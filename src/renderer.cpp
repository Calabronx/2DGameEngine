#include "renderer.h"

Renderer::Renderer(SDL_Renderer *renderer)
{
    m_sdl_renderer = renderer;
}

void Renderer::render()
{
    SDL_RenderClear(m_sdl_renderer);

    SDL_SetRenderDrawColor(m_sdl_renderer, 22, 22, 22, 255);

    SDL_RenderPresent(m_sdl_renderer);
}

SDL_Renderer* Renderer::getSDLRawRenderer()
{
    return m_sdl_renderer;
}