//
//  IndexBuffer.hpp
//  glfw-xcode
//
//  Created by Liu Ray on 01/02/2018.
//  Copyright © 2018 Liu Ray. All rights reserved.
//

#ifndef IndexBuffer_hpp
#define IndexBuffer_hpp

#pragma once

class IndexBuffer
{
private:
    unsigned int m_RendererID;
    unsigned int m_Count;
public:
    IndexBuffer(const unsigned int* data, unsigned int count);
    ~IndexBuffer();
    
    void bind() const;
    void unbind() const;
    
    inline unsigned int getCount() const {
        return m_Count;
    };
};

#endif /* IndexBuffer_hpp */
