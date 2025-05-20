#include "TextureCache.h"
#include "ImageLoader.h"
#include <iostream>

TextureCache::TextureCache()
{
}

TextureCache::~TextureCache()
{
}

GLTexture TextureCache::getTexture(string texturePath)
{
	//images/hola.png = bytes de la imagn convertida
	//map<string, GLTexture>::iterator ite = textureMap.find(texturePath);
	auto ite = textureMap.find(texturePath);
	if (ite == textureMap.end()) {
		cout << "Estoy cargando la imagen desde la ruta " << endl;
		GLTexture texture = ImageLoader::loadPNG(texturePath);
		textureMap[texturePath] = texture;
		return texture;
		//pair<string, GLTexture> newPair(texturePath, texture);
		//textureMap.insert(newPair);
	}
	cout << "EStoy cargando desde la cache " << endl;
	return ite->second;
}
