#ifndef GAME_H
#define GAME_H

#include <SDL.h>

#include "window.h"
#include "renderer.h"
#include "texture.h"

#include <vector>

class Game
{
public:
    Game();

private:
    void init();
    void update();
    void render();
    void run();

private:
    SDL_Window          *m_window;
    SDL_Renderer        *m_renderer;
    SDL_Surface         *m_surface;

    std::vector<Texture> m_textures;
};

#endif