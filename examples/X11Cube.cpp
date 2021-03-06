//
// Created by smallville7123 on 19/07/20.
//

#include <glis/glis.hpp>

GLIS_CLASS screen;
GLIS glis;
GLIS_FONT font;
GLIS_FPS fps;

using namespace Magnum;
using namespace Magnum::Math::Literals;

GL::Mesh * _mesh = nullptr;
Shaders::Phong * _shader = nullptr;

Matrix4 _transformation, _projection;
Color3 _color;

GLIS_CALLBACKS_DRAW_RESIZE_CLOSE(draw, glis, renderer, font, fps) {
    GL::defaultFramebuffer.clear(GL::FramebufferClear::Color|GL::FramebufferClear::Depth);
    _transformation = _transformation*Matrix4::rotationX(1.0_degf)*Matrix4::rotationY(1.0_degf);
    _shader->setLightPosition({7.0f, 5.0f, 2.5f})
        .setLightColor(Color3{1.0f})
        .setDiffuseColor(_color)
        .setAmbientColor(Color3::fromHsv({_color.hue(), 1.0f, 0.3f}))
        .setTransformationMatrix(_transformation)
        .setNormalMatrix(_transformation.normalMatrix())
        .setProjectionMatrix(_projection)
        .draw(*_mesh);
    glis.GLIS_SwapBuffers(screen);
}

GLIS_CALLBACKS_DRAW_RESIZE_CLOSE(resize, glis, renderer, font, fps) {
    glis.GLIS_Viewport(renderer);
}

GLIS_CALLBACKS_DRAW_RESIZE_CLOSE(close, glis, renderer, font, fps) {
    glis.destroyX11Window(screen);
    delete _shader;
    delete _mesh;
    glis.GLIS_destroy_GLIS(screen);
}

int main() {
    glis.getX11Window(screen, 400, 400);
    glis.GLIS_setupOnScreenRendering(screen);
    screen.contextMagnum.create();
    _shader = new Shaders::Phong;
    _mesh = new GL::Mesh;
    GL::Renderer::enable(GL::Renderer::Feature::DepthTest);
    GL::Renderer::enable(GL::Renderer::Feature::FaceCulling);
    *_mesh = MeshTools::compile(Primitives::cubeSolid());
    _transformation = Matrix4::rotationX(0.0_degf)*Matrix4::rotationY(0.0_degf);
    _projection = Matrix4::perspectiveProjection(35.0_degf, Vector2{static_cast<float>(screen.width*screen.height)}.aspectRatio(), 0.01f, 100.0f)*Matrix4::translation(Vector3::zAxis(-10.0f));
    _color = Color3::fromHsv({35.0_degf, 1.0f, 1.0f});
    glis.runUntilX11WindowClose(glis, screen, font, fps, draw, resize, close);
}
