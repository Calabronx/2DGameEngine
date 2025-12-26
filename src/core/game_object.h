#pragma once
#ifndef GAME_OBJECT
#define GAME_OBJECT

/**
 * clase para poder represtar game objects del juego y comportamiento
 * 
 * definir atributos
 * 2d vectores
 * posicion
 * velocidad
 * color
 * 
 * definir metodo para renderizar utilizando el renderer como parametro
**/

#include <glm/glm.hpp>
#include "renderer/renderer.h"

class GameObject
{
	public:
		GameObject();
		GameObject(glm::vec2 pos, glm::vec2 size, Renderer::Texture, uint32_t shader, glm::vec3 color = glm::vec3(1.0f), glm::vec2 velocity = glm::vec2(0.0f, 0.0f));

		virtual void RenderObject();

	private:
		glm::vec2 m_Position;
		glm::vec2 m_Velocity;
		glm::vec2 m_Size;
		glm::vec3 m_Color;

		float m_Rotation;

		bool m_Destroyed;
		Renderer::Texture 	m_Sprite;
		uint32_t 		  	m_VertexArray;
		uint32_t 		  	m_Shader;

};
#endif

