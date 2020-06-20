//
// Created by konek on 8/14/2019.
//

#include "../GLIS.h"

const char *vertexSource = R"glsl( #version 320 es
layout (location = 0) in vec3 aPos;
layout (location = 1) in vec3 aColor;
layout (location = 2) in vec2 aTexCoord;

out vec3 ourColor;
out vec2 TexCoord;

void main()
{
    gl_Position = vec4(aPos, 1.0);
    ourColor = aColor;
    TexCoord = aTexCoord;
}
)glsl";

const char *fragmentSource = R"glsl( #version 320 es
out highp vec4 FragColor;
in highp vec3 ourColor;

void main()
{
    FragColor = vec4(ourColor, 1.0);
}
)glsl";

class GLIS_CLASS G;

int main() {
    int W = 1080;
    int H = 2031;
    if (GLIS_setupOffScreenRendering(G, W, H)) {
        // create a new texture
        GLuint FB;
        GLuint RB;
        GLuint renderedTexture;
        GLIS_texture_buffer(FB, RB, renderedTexture, W, H);

        GLuint shaderProgram;
        GLuint vertexShader;
        GLuint fragmentShader;
        vertexShader = GLIS_createShader(GL_VERTEX_SHADER, vertexSource);
        fragmentShader = GLIS_createShader(GL_FRAGMENT_SHADER, fragmentSource);
        LOG_INFO("Creating Shader program");
        shaderProgram = glCreateProgram();
        LOG_INFO("Attaching vertex Shader to program");
        glAttachShader(shaderProgram, vertexShader);
        LOG_INFO("Attaching fragment Shader to program");
        glAttachShader(shaderProgram, fragmentShader);
        LOG_INFO("Linking Shader program");
        glLinkProgram(shaderProgram);
        LOG_INFO("Validating Shader program");
        GLboolean ProgramIsValid = GLIS_validate_program(shaderProgram);
        assert(ProgramIsValid == GL_TRUE);

        LOG_INFO("Using Shader program");
        glUseProgram(shaderProgram);
        GLIS_draw_rectangle<GLint>(GL_TEXTURE0, renderedTexture, 0, 0, 0, W, H, W, H);

        size_t win_id1 = GLIS_new_window(500, 500, 200, 200);
        GLIS_upload_texture_resize(G, win_id1, renderedTexture, W, H, 200, 200);
        LOG_INFO("win_id1 = %zu", win_id1);
        size_t win_id2 = GLIS_new_window(600, 600, 200, 200);
        GLIS_upload_texture_resize(G, win_id2, renderedTexture, W, H, 200, 200);
        LOG_INFO("win_id2 = %zu", win_id2);
        for (int i = 500; i <= 600; i++) GLIS_modify_window(win_id1, 500, i, 200, 200);
        for (int i = 600; i <= 700; i++) GLIS_modify_window(win_id2, i, 600, 200, 200);
        for (int i = 599; i >= 451; i--) GLIS_modify_window(win_id1, 500, i, 200, 200);
        for (int i = 699; i >= 501; i--) GLIS_modify_window(win_id2, i, 600, 200, 200);
        while (true) {
            for (int i = 450; i <= 600; i++) GLIS_modify_window(win_id1, 500, i, 200, 200);
            for (int i = 500; i <= 700; i++) GLIS_modify_window(win_id2, i, 600, 200, 200);
            for (int i = 599; i >= 451; i--) GLIS_modify_window(win_id1, 500, i, 200, 200);
            for (int i = 699; i >= 501; i--) GLIS_modify_window(win_id2, i, 600, 200, 200);
        }

        LOG_INFO("Cleaning up");
        glDeleteProgram(shaderProgram);
        glDeleteShader(fragmentShader);
        glDeleteShader(vertexShader);
        glDeleteTextures(1, &renderedTexture);
        glDeleteRenderbuffers(1, &RB);
        glDeleteFramebuffers(1, &FB);
        GLIS_destroy_GLIS(G);
        LOG_INFO("Destroyed sub Compositor GLIS");
        LOG_INFO("Cleaned up");
    }
    return 0;
}