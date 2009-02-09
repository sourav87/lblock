#ifndef TEXTURE_H
#define TEXTURE_H

#include <qgl.h>

/**
 * This represents all the functions used for loading a texture.
 * An object of this model can be used to set the textures of a wall.
 */
struct Texture {
	GLuint texture;
	float sizex;
	float sizey;

	/// Just a dummy constructor
	Texture();

	/**
	 *  This is the constructor.
	 *  It is used to add texture to the \ref Model
	 *  \param rgb a default colour that is to be loaded 
	 *  \param path specifies where the texture file that is to be loaded is present
	 *  \param x gives the x scale, default value is 1.0
	 *  \param y gives the y scale, default value is 1.0 
	 */ 
	Texture(const uint rgb, const QString &path = QString(), float x = 1.0f, float y = 1.0f);

	/// This is the destructor
	void destroy();
};

#endif
