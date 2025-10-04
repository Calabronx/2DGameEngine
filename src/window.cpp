#include "window.h"

#include <iostream>

Window::Window()
{
    init();
}

void Window::InitWindowSurface()
{
    if (m_surface == nullptr) {
        m_surface = SDL_GetWindowSurface(m_window);

        if (m_surface == nullptr)
        {
            std::cout << "Failed to get the surface from the window\n";
            return;
        }
    }
}

void Window::init()
{
    if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        std::cout << "Failed to initialize the window\n";
        return;
    }

    m_window = SDL_CreateWindow("Game",
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
}

SDL_Window* Window::getWindow()
{
    return m_window;
}