//
// Created by smallville7123 on 14/07/20.
//

#include <glis/glis.hpp>

GLIS_CLASS screen;
GLIS glis;
GLIS_FONT font;
GLIS_FPS fps;

GLIS_CALLBACKS_DRAW_RESIZE_CLOSE(draw, glis, renderer, font, fps) {
    glClearColor(1.0f, 0.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glis.GLIS_SwapBuffers(screen);
}

GLIS_CALLBACKS_DRAW_RESIZE_CLOSE(close, glis, renderer, font, fps) {
    glis.destroyWaylandWindow(screen);
    glis.GLIS_destroy_GLIS(screen);
}

int main() {
    glis.getWaylandWindow(screen, 400, 400);
    glis.GLIS_setupOnScreenRendering(screen);
    glis.runUntilWaylandWindowClose(glis, screen, font, fps, draw, nullptr, close);
}