//
//  Renderer.cpp
//  glfw-xcode
//
//  Created by Liu Ray on 01/02/2018.
//  Copyright © 2018 Liu Ray. All rights reserved.
//

#include "Renderer.h"
#include <iostream>


void GLClearError()
{
    while (glGetError() != GL_NO_ERROR);
}

bool GLLogCall(const char* function, const char* file, int line)
{
    while (GLenum error = glGetError())
    {
        std::cout << "[OpenGL Error] (" << error << "): " << function <<
        " " << file << ":" << line << std::endl;
        return false;
    }
    return true;
}
