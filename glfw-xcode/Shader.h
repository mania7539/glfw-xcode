//
//  Shader.hpp
//  glfw-xcode
//
//  Created by Liu Ray on 01/02/2018.
//  Copyright © 2018 Liu Ray. All rights reserved.
//

#ifndef Shader_hpp
#define Shader_hpp

#pragma once
#include <iostream>
#include <unordered_map>

struct ShaderProgramSources {
    std::string vertexSource;
    std::string fragmentSource;
};

class Shader
{
private:
    std::string m_FilePath;
    unsigned int m_RendererID;  // ProgramID
    std::unordered_map<std::string, int> m_UniformLocationCache;
    
public:
    Shader(const std::string& filepath);
    Shader(const std::string & vertexText, const std::string & fragmentText);
    ~Shader();
    
    void bind() const;
    void unbind() const;
    
    // Set uniforms
    void setUniform4f(const std::string& name, float f0, float f1, float f2, float f3);
    void setUniform1f(const std::string& name, float f0);
    void setUniform1i(const std::string& name, int i0);
    
private:
    unsigned int createShader(const std::string& vertexShader, const std::string& fragmentShader);
    ShaderProgramSources parseShader(const std::string& filepath);
    unsigned int compileShader(unsigned int type, const std::string& source);
    int getUniformLocation(const std::string& name);
};

#endif /* Shader_hpp */
