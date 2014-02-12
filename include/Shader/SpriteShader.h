/* 
 * File:   PruebaShader.h
 * Author: fran
 *
 * Created on December 14, 2013, 6:17 PM
 */

#ifndef SPRITESHADER_H
#define	SPRITESHADER_H

#include "../Unnivelmas_conf.h"
#include <Shader/Shader.h>

namespace unnivelmas
{
    class SpriteShader : public Shader{
    public:
        SpriteShader();
        virtual ~SpriteShader();

        void setShaderVariables(Renderable*, Material*);
        void enableShaderVariables();
        void disableShaderVariables();
    private:
        GLint vPos;
        GLint vCol;
        GLint sMat;
        GLint rMat;
        GLint pMat;
        GLint tUni;
        GLint proM;
        GLint vieP;
    };
}
#endif	/* PRUEBASHADER_H */
