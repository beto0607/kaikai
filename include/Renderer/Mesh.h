/* 
 * File:   Mesh.h
 * Author: beto0607
 *
 * Created on 16 de febrero de 2014, 13:04
 */

#ifndef MESH_H
#define	MESH_H

#include <glew.h>

namespace kaikai{

    class Mesh {
    public:
        Mesh();
        virtual ~Mesh();
        GLvoid render();
    private:
        Mesh * mesh;
        GLint width, height;
    };
}
#endif	/* MESH_H */

