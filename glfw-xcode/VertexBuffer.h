//
//  VertexBuffer.hpp
//  glfw-xcode
//
//  Created by Liu Ray on 01/02/2018.
//  Copyright © 2018 Liu Ray. All rights reserved.
//

#ifndef VertexBuffer_hpp
#define VertexBuffer_hpp

#pragma once

class VertexBuffer
{
private:
    unsigned int m_RendererID;
public:
    VertexBuffer(const void* data, unsigned int size);
    ~VertexBuffer();
    
    void bind() const;
    void unbind() const;
};

#endif /* VertexBuffer_hpp */
