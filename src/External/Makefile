
GLEW_INCLUDE= -Iexternal/include

# glew.o 
glew.o:
	g++ $(GLEW_INCLUDE) -c src/External/glew.c -o build/Core/glew.o 
	
tinyxml2.o: 
	g++ $(GLEW_INCLUDE) -c src/Core/tinyxml2.cpp -o build/Core/tinyxml2.o

external: glew.o tinyxml2.o
	ar -r  -s build/lib/external.a build/Core/glew.o build/Core/tinyxml2.o

#END glew.o 