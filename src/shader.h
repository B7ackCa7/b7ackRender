#ifndef SHADER_H
#define SHADER_H

#include <glad/glad.h>

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>


class Shader 
{
public:
    // the program ID
    unsigned int ID;

    // constructor reads and builds the shaders
    void load(std::string vertexPath, std::string fragmentPath);
    // use/activate the shader
    void use();
    // get uniiform location
    int getUniformLocation(std::string uniformName);
    // utility uniform functions
    void setBool(const std::string& name, bool value) const;
    void setInt(const std::string& name, int value) const;
    void setFloat(const std::string& name, float value) const;
};

#endif
