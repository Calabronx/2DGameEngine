#include <SDL.h>

#include "vector2.h"
#include "texture.h"

class Sprite
{
    /**
     * constructor sin arg
     * constructor con parametro de texture
     * 
     * move sprite metodo
     * 
     * atributos
     * rectangulo
     * */
    public:
        Sprite();

    public:
        void moveSprite(Vector2* vector);

    private:
        Texture m_spriteTexture;

};