#ifndef WINDOW_H
#define WINDOW_H

#include <SDL.h>

class Window
{
    public:
        Window();

        SDL_Window* getWindow();
        void initSurface();
    private:
        void init();

    private:
        SDL_Window* m_window;
        SDL_Surface* m_surface;
};

#endif