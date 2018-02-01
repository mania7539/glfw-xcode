//
//  Renderer.hpp
//  glfw-xcode
//
//  Created by Liu Ray on 01/02/2018.
//  Copyright © 2018 Liu Ray. All rights reserved.
//

#ifndef Renderer_hpp
#define Renderer_hpp

#pragma once
#include <GL/glew.h>

#include <iostream>

#define ASSERT(x) if (!(x)) throw;
#define GLCall(x) GLClearError();\
x;\
ASSERT(GLLogCall(#x, __FILE__, __LINE__))

void GLClearError();
bool GLLogCall(const char* function, const char* file, int line);

#endif /* Renderer_hpp */
