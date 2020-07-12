//
// Created by smallville7123 on 12/07/20.
//

#include <glis/backup/types/renderbuffer.hpp>

void GLIS_BACKUP_RENDERBUFFER::backup() {
    glGetIntegerv(GL_RENDERBUFFER_BINDING, &__GL_RENDERBUFFER_BINDING);

    glGetRenderbufferParameteriv(GL_RENDERBUFFER, GL_RENDERBUFFER_WIDTH,
                                 &__GL_RENDERBUFFER_WIDTH);

    glGetRenderbufferParameteriv(GL_RENDERBUFFER, GL_RENDERBUFFER_HEIGHT,
                                 &__GL_RENDERBUFFER_HEIGHT);

    glGetRenderbufferParameteriv(GL_RENDERBUFFER, GL_RENDERBUFFER_INTERNAL_FORMAT,
                                 &__GL_RENDERBUFFER_INTERNAL_FORMAT);

    glGetRenderbufferParameteriv(GL_RENDERBUFFER, GL_RENDERBUFFER_RED_SIZE,
                                 &__GL_RENDERBUFFER_RED_SIZE);

    glGetRenderbufferParameteriv(GL_RENDERBUFFER, GL_RENDERBUFFER_GREEN_SIZE,
                                 &__GL_RENDERBUFFER_GREEN_SIZE);

    glGetRenderbufferParameteriv(GL_RENDERBUFFER, GL_RENDERBUFFER_BLUE_SIZE,
                                 &__GL_RENDERBUFFER_BLUE_SIZE);

    glGetRenderbufferParameteriv(GL_RENDERBUFFER, GL_RENDERBUFFER_ALPHA_SIZE,
                                 &__GL_RENDERBUFFER_ALPHA_SIZE);

    glGetRenderbufferParameteriv(GL_RENDERBUFFER, GL_RENDERBUFFER_DEPTH_SIZE,
                                 &__GL_RENDERBUFFER_DEPTH_SIZE);

    glGetRenderbufferParameteriv(GL_RENDERBUFFER, GL_RENDERBUFFER_STENCIL_SIZE,
                                 &__GL_RENDERBUFFER_STENCIL_SIZE);

    glGetRenderbufferParameteriv(GL_RENDERBUFFER, GL_RENDERBUFFER_SAMPLES,
                                 &__GL_RENDERBUFFER_SAMPLES);
}

void GLIS_BACKUP_RENDERBUFFER::restore() {
    glBindRenderbuffer(GL_RENDERBUFFER, __GL_RENDERBUFFER_BINDING);
    // TODO: restore parameters
}