#ifndef RENDERER_H
#define RENDERER_H

#include <SDL.h>

#include "window.h"

class Renderer
{
    public:
        Renderer(SDL_Renderer *renderer);

    public:
        void render();
        SDL_Renderer* getSDLRawRenderer();

    private:
        SDL_Renderer*   m_sdl_renderer;
};

#endif