/* 
 * File:   MaterialNull.cpp
 * Author: francisco
 * 
 * Created on 8 de enero de 2014, 19:51
 */

#include <Scene/Material.h>
#include <Scene/MaterialNull.h>
#include <Texture/Texture.h>
#include <Shader/ShaderNull.h>

using namespace kaikai;

MaterialNull::MaterialNull() {
    texture = new Texture("texture_null", 1);
    shader = new ShaderNull();
}

MaterialNull::~MaterialNull() {
}

