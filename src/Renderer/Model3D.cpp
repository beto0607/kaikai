/* 
 * File:   Model3D.cpp
 * Author: beto0607
 * 
 * Created on 15 de febrero de 2014, 14:38
 */

#include <Renderer/Renderable.h>
#include <Renderer/Model3D.h>
#include <Scene/Material.h>
#include <Scene/MaterialNull.h>
#include <Core/Core.h>
#include <Texture/TextureManager.h>
#include <iostream>

using namespace kaikai;

Model3D::Model3D():Renderable() {
    material = ((Core::getInstance())->getTextureManager())->getNullMaterial();
    projection_matrix = glm::ortho(0.0f, 800.0f, 600.0f, 0.0f, -100.0f, 100.0f);
}

Model3D::~Model3D() {
}

void Model3D::draw()
{
    material->setVariables(this);
    //glDrawElements(GL_TRIANGLES,6,GL_UNSIGNED_INT,index);
    glDrawArrays(GL_TRIANGLE_STRIP,0,4);
    material->disableVariables();
}

GLfloat* Model3D::getVertexBufferOffset()
{
    return vertex;
}

GLvoid Model3D::setMaterial(Material* _mat)
{
    this->material = _mat;
}

GLfloat Model3D::flipX()
{
    scale_matrix[0][0] *= -1;
}

GLfloat Model3D::flipY()
{
    scale_matrix[1][1] *= -1;
}

GLfloat Model3D::flipZ()
{
    scale_matrix[2][2] *= -1;
}
