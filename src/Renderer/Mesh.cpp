/* 
 * File:   Mesh.cpp
 * Author: beto0607
 * 
 * Created on 16 de febrero de 2014, 13:04
 */

#include <Renderer/Mesh.h>
#include <glew.h>

using namespace kaikai;

Mesh::Mesh(GLint _width, GLint _height) {
    
    this->width = _width; this->height = _height;
    
    float mesh_scale = 10.0;
    float mesh_trans[2];
    mesh_trans[0] = -((width-1)/2.0)*mesh_scale;
    mesh_trans[1] = -((height-1)/2.0)*mesh_scale;

    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_TRIANGLES);

    float v[3];
    int row, col;
    for (row=0; row<height-1; row++)
    for (col=0; col<width-1; col++)
    {
        v[0] = (col * mesh_scale) + mesh_trans[0]; // X
        v[1] = (row * mesh_scale) + mesh_trans[1]; // Y
        glVertex2f(v[0], v[1]);

        v[0] = (col * mesh_scale) + mesh_trans[0]; // X
        v[1] = ((row+1) * mesh_scale) + mesh_trans[1]; // Y
        glVertex2f(v[0], v[1]);

        v[0] = ((col+1) * mesh_scale) + mesh_trans[0]; // X
        v[1] = ((row+1) * mesh_scale) + mesh_trans[1]; // Y
        glVertex2f(v[0], v[1]);

        // second triangle
        v[0] = ((col+1) * mesh_scale) + mesh_trans[0]; // X
        v[1] = ((row+1) * mesh_scale) + mesh_trans[1]; // Y
        glVertex2f(v[0], v[1]);

        v[0] = (col * mesh_scale) + mesh_trans[0]; // X
        v[1] = (row * mesh_scale) + mesh_trans[1]; // Y
        glVertex2f(v[0], v[1]);

        v[0] = ((col+1) * mesh_scale) + mesh_trans[0]; // X
        v[1] = (row * mesh_scale) + mesh_trans[1]; // Y
        glVertex2f(v[0], v[1]);

    }
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);


   
}

Mesh::render(){
    this->mesh->render();
}

Mesh::~Mesh() {
}

