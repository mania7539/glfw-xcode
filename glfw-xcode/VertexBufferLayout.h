//
//  VertexBufferLayout.hpp
//  glfw-xcode
//
//  Created by Liu Ray on 01/02/2018.
//  Copyright © 2018 Liu Ray. All rights reserved.
//

#ifndef VertexBufferLayout_hpp
#define VertexBufferLayout_hpp

#pragma once

#include <vector>
#include <GL/glew.h>
#include "Renderer.h"

struct VertexBufferElement
{
    // the sequence should be the same when inserting item to vector
    unsigned int type;
    unsigned int count;
    unsigned char normalized;
    
    static unsigned int getSizeOfType(unsigned int type) {
        switch (type) {
            case GL_FLOAT:            return 4;
            case GL_UNSIGNED_INT:     return 4;
            case GL_UNSIGNED_BYTE:    return 1;
        }
        
        ASSERT(false);
        return 0;
    }
};

class VertexBufferLayout
{
private:
    std::vector<VertexBufferElement> m_Elements;
    unsigned int m_Stride;
    
public:
    VertexBufferLayout();
    
    template<typename T>
    void push(unsigned int count);
    
    inline const std::vector<VertexBufferElement> getElements() const;
    inline unsigned int getStride() const;
};

#endif /* VertexBufferLayout_hpp */
