#include "game_object.h"

GameObject::GameObject()
	: m_Position(0.0f, 0.0f)
	, m_Size(1.0f,1.0f)
	, m_Velocity(0.0f)
	, m_Color(1.0f)
	, m_Rotation(0.0f)
	, m_Sprite()
	, m_Shader()
	, m_Destroyed(false) 
{
}

GameObject::GameObject(glm::vec2 pos, glm::vec2 size, Renderer::Texture sprite, uint32_t shader, glm::vec3 color, glm::vec2 velocity)
	: m_Position(pos)
	, m_Size(size)
	, m_Velocity(velocity)
	, m_Color(color)
	, m_Rotation(0.0f)
	, m_Sprite(sprite)
	, m_Shader(shader)
	, m_Destroyed(false)
{
}

void GameObject::RenderObject()
{
	/*Texture& texture, uint32_t shader,uint32_t vao, glm::vec2 position, glm::vec2 size, float rotate, glm::vec3 color
	Renderer::RenderSprite(m_Sprite, m_Shader, m_Position);*/
}
