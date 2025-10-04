#ifndef WINDOW_H
#define WINDOW_H

#include <SDL.h>

namespace Engine {

    struct WindowSpecification
    {
        const char *title;
        uint32_t width = 800;
        uint32_t height = 720;
        bool    isResizable = false;
        bool    vSync = true;
    };

    class Window
    {
        public:
            Window(const WindowSpecification& specification = WindowSpecification());

            SDL_Window* GetWindowPtr();
            void InitWindowSurface();
        private:
            void init();

        private:
            SDL_Window* m_Window;
            SDL_Surface* m_Surface;
    };
}

#endif