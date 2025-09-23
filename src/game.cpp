#include "game.h"

#include <iostream>

Game::Game()
{
    init();
}

void Game::init()
{

    if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        std::cout << "Failed to initialize the window\n";
        return;
    }

    m_window = SDL_CreateWindow("Tetris",
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED,
        800,
        600, 0);

    if (m_window == nullptr)
    {
        std::cout << "Failed to create the window\n";
        return;
    }

    if (!m_window)
    {
        SDL_Log("Window pointer is null!");
        return;
    }

    m_renderer = SDL_CreateRenderer(m_window, -1, SDL_RENDERER_PRESENTVSYNC);
    if (!m_renderer) {
        SDL_Log("Failed to create renderer: %s", SDL_GetError());
        return;
    }

    m_surface = SDL_GetWindowSurface(m_window);

    if (m_surface == nullptr)
    {
        std::cout << "Failed to get the surface from the window\n";
        return;
    }

    Texture player (m_renderer, "./images/character.png");

    player.setRectantangleTextureProperties(50, 100, 50, 80);

    m_textures.push_back(player);

    run();
}

void Game::update()
{
    std::cout << "running" << std::endl;
    render();
}

void Game::render()
{
    SDL_RenderClear(m_renderer);

    SDL_SetRenderDrawColor(m_renderer, 22, 22, 22, 255);

    m_textures[0].renderTexture(m_renderer);

    SDL_RenderPresent(m_renderer);
}

void Game::run()
{
    bool exit = false;
    while(!exit)
    {
        update();
    }
}

