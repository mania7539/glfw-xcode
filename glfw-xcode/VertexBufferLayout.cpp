//
//  VertexBufferLayout.cpp
//  glfw-xcode
//
//  Created by Liu Ray on 01/02/2018.
//  Copyright © 2018 Liu Ray. All rights reserved.
//

#include "VertexBufferLayout.h"

VertexBufferLayout::VertexBufferLayout()
: m_Stride(0) {}

template<typename T>
void VertexBufferLayout::push(unsigned int count) {
    throw;
    
}

template<>
void VertexBufferLayout::push<float>(unsigned int count) {
    m_Elements.push_back({ GL_FLOAT, count, GL_FALSE });
    m_Stride += count * VertexBufferElement::getSizeOfType(GL_FLOAT); // 4 bytes
}

template<>
void VertexBufferLayout::push<unsigned int>(unsigned int count) {
    m_Elements.push_back({ GL_UNSIGNED_INT, count, GL_FALSE });
    m_Stride += count * VertexBufferElement::getSizeOfType(GL_UNSIGNED_INT);    // 4 bytes
}

template<>
void VertexBufferLayout::push<unsigned char>(unsigned int count) {
    m_Elements.push_back({ GL_UNSIGNED_BYTE, count, GL_TRUE });
    m_Stride += count * VertexBufferElement::getSizeOfType(GL_UNSIGNED_BYTE);    // 1 byte
}

inline const std::vector<VertexBufferElement> VertexBufferLayout::getElements() const { return m_Elements; }

inline unsigned int VertexBufferLayout::getStride() const { return m_Stride; }
