/* 
 * File:   Model3D.h
 * Author: beto0607
 *
 * Created on 15 de febrero de 2014, 14:38
 */

#ifndef MODEL3D_H
#define	MODEL3D_H

#include "../Unnivelmas_conf.h"
#include <Renderer/Renderable.h>

namespace kaikai {
    class Material;
    
    class Model3D : public Renderable{
    public:
        Model3D();
        virtual ~Model3D();
        
        void draw();
        void setMaterial(Material*);
        GLfloat* getVertexBufferOffset();
        GLfloat flipX();
        GLfloat flipY();
        GLfloat flipZ();
    private:
            GLfloat* vertex;
            GLfloat* texture_coordenates;
            GLint* index;
            Material* material;
    };
}
#endif	/* MODEL3D_H */

