
#ifndef CORE_H
#define	CORE_H

#include "../Unnivelmas_conf.h"

namespace unnivelmas
{
        class TextureManager;
        class Texture;
        class Render;
        class Renderable;
        class Input;
        class CommandManager;
        class Logger;
        class Clock;
        class Scene;
        class MouseEventListener;
        class TimeEventListener;
        class AudioManager;
        class Audio;
        class JoystickListener;
        class KeyBoardListener;
        class TextManager;
        class MeshLoader;
        
	class Core
	{
		private: 
					Render* render;
					Input* input;
					CommandManager* command;
                                        Logger* logger;
                                        Clock* clock;
                                        TextureManager* texture;
                                        AudioManager* audio;
                                        TextManager* text;
                                        MeshLoader* meshloader;
                                        static Core* instance;
                                        GLboolean end_flag;

                                        
					Core();
		public:
                                        static Core* getInstance();
                                        Logger* getLogger();
                                        Clock*  getClock();
                                        TextureManager* getTextureManager();
					virtual ~Core();	
                                        
                                        GLvoid start();
                                        GLvoid stop();
                                        GLvoid update();
                                        
                                        GLvoid addRenderable(const GLchar*,Renderable*);
                                        GLvoid addScene(Scene*);
                                        GLvoid addAudio(Audio*);
                                        Texture* getTexture(const GLchar*);
                                        GLvoid scaleObject(const GLchar*, GLfloat);
                                        GLvoid moveObject(const GLchar*, GLfloat, GLfloat);
                                        GLvoid rotateObject(const GLchar*, GLfloat, GLfloat);
                                        GLvoid setFPS(GLint);
                                        
                                        GLvoid addMouseKeyPressedListener(MouseEventListener*);
                                        GLvoid addMouseMovedListener(MouseEventListener*);
                                        GLvoid addTimeListener(TimeEventListener*);
                                        GLvoid addButtonDownListener(JoystickListener*);
                                        GLvoid addButtonUpListener(JoystickListener*);
                                        GLvoid addAxisListener(JoystickListener*);
                                        GLvoid addKeyDownListener(const GLchar*,KeyBoardListener*);
                                        GLvoid addKeyUpListener(const GLchar*,KeyBoardListener*);
                                        GLvoid addKeyLoopListener(const GLchar*,KeyBoardListener*);
                                        GLvoid addAllStateKeyListener(const GLchar*,KeyBoardListener*);
                                        
                                        GLvoid fullScreenMode();
                                        
                                        GLvoid addCollider(Renderable*);
                                        GLvoid addCollidable(Renderable*);
                                        
                                        GLvoid play(const GLchar*);
                                        GLvoid loadTexture(const GLchar*,const GLchar*);
	};
}; // Close Namespace Tag
#endif // CORE_ENGINE_H