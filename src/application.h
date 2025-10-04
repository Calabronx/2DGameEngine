#ifndef GAME_H
#define GAME_H

#include <SDL.h>

#include "window.h"
#include "renderer.h"
#include "texture.h"

#include <vector>
#include <string>

namespace Engine
{   
    struct ApplicationSpecification
    {
        std::string Name = "Application";
        // WindowSpecification WindowSpec;
    };

    class Application
    {
        public:
            static Application& GetInstance() { return m_Instance; }
            // Application(const ApplicationSpecification& specification = ApplicationSpecification()); // cuando tenga el windowSpec definido, lo uso
            Application();

            ~Application();
        private:

            void static init();
            void static update();
            void static render();
            void static run();

        private:
            static Application                 m_Instance;

            static SDL_Window                 *m_window;
            static SDL_Renderer               *m_renderer;
            static SDL_Surface                *m_surface;

            static std::vector<Texture>        m_textures;
    };
}
#endif