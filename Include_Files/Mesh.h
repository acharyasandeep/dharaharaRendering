#ifndef MESH_H
#define MESH_H

#include <glad/glad.h>

#include "Shader.h"

#include <string>
#include <vector>
using namespace std;

struct Vertex
{
    // position
    Transf::vec3 Position;
    // normal
    Transf::vec3 Normal;
    // texCoords
    Transf::vec2 TexCoords;
    // tangent
    Transf::vec3 Tangent;
    // bitangent
    Transf::vec3 Bitangent;
};

struct Texture
{
    unsigned int id;
    string type;
    string path;
};

class Mesh
{
public:
    // mesh Data
    vector<Vertex> vertices;
    vector<unsigned int> indices;
    vector<Texture> textures;
    unsigned int VAO;

    // constructor
    Mesh(vector<Vertex> vertices, vector<unsigned int> indices, vector<Texture> textures);

    // render the mesh
    void Draw(Shader &shader);

private:
    // render data
    unsigned int VBO, EBO;

    // initializes all the buffer objects/arrays
    void setupMesh();
};
#endif