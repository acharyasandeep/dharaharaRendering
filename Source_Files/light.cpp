#include <Light.h>
Light::Light()
{
    sunLightPos = Transf::vec3(0.0f, 5.0f, 10.0f);
    pointLightPositions[0] = Transf::vec3(-3.2f, -0.2f, -0.5f);
    pointLightPositions[1] = Transf::vec3(3.2f, -0.2f, 0.8f);
    pointLightPositions[2] = Transf::vec3(-1.8f, -0.2f, 2.8f);
    pointLightPositions[3] = Transf::vec3(0.80f, -0.2f, 3.3f);
    pointLightPositions[4] = Transf::vec3(2.3f, -0.2f, -2.4f);
    pointLightPositions[5] = Transf::vec3(-1.1f, -0.2f, -3.2f);
    pointLightPositions[6] = Transf::vec3(1.2f, 3.5f, 1.0f);
}

void Light::setLights(Shader &lightingShader)
{
    // sun light
    lightingShader.setVec3("sunLight.position", sunLightPos);
    lightingShader.setVec3("sunLight.ambient", 0.5f, 0.5f, 0.5f);
    lightingShader.setVec3("sunLight.diffuse", 0.8f, 0.8f, 0.8f);
    lightingShader.setVec3("sunLight.specular", 0.0f, 0.0f, 0.0f);
    lightingShader.setFloat("sunLight.constant", 0.9f);
    lightingShader.setFloat("sunLight.linear", 0.002);
    lightingShader.setFloat("sunLight.quadratic", 0.0013);

    // point light 0
    lightingShader.setVec3("pointLights[0].position", pointLightPositions[0]);
    lightingShader.setVec3("pointLights[0].ambient", 0.2f, 0.2f, 0.2f);
    lightingShader.setVec3("pointLights[0].diffuse", 1.0f, 0.77f, 0.56f);
    lightingShader.setVec3("pointLights[0].specular", 0.0f, 0.0f, 0.0f);
    lightingShader.setFloat("pointLights[0].constant", 1.0f);
    lightingShader.setFloat("pointLights[0].linear", 0.35);
    lightingShader.setFloat("pointLights[0].quadratic", 0.44);

    // point light 1
    lightingShader.setVec3("pointLights[1].position", pointLightPositions[1]);
    lightingShader.setVec3("pointLights[1].ambient", 0.2f, 0.2f, 0.2f);
    lightingShader.setVec3("pointLights[1].diffuse", 1.0f, 0.77f, 0.56f);
    lightingShader.setVec3("pointLights[1].specular", 0.0f, 0.0f, 0.0f);
    lightingShader.setFloat("pointLights[1].constant", 1.0f);
    lightingShader.setFloat("pointLights[1].linear", 0.35);
    lightingShader.setFloat("pointLights[1].quadratic", 0.44);

    // point light 2
    lightingShader.setVec3("pointLights[2].position", pointLightPositions[2]);
    lightingShader.setVec3("pointLights[2].ambient", 0.2f, 0.2f, 0.2f);
    lightingShader.setVec3("pointLights[2].diffuse", 1.0f, 0.77f, 0.56f);
    lightingShader.setVec3("pointLights[2].specular", 0.0f, 0.0f, 0.0f);
    lightingShader.setFloat("pointLights[2].constant", 1.0f);
    lightingShader.setFloat("pointLights[2].linear", 0.35);
    lightingShader.setFloat("pointLights[2].quadratic", 0.44);

    // point light 3
    lightingShader.setVec3("pointLights[3].position", pointLightPositions[3]);
    lightingShader.setVec3("pointLights[3].ambient", 0.2f, 0.2f, 0.2f);
    lightingShader.setVec3("pointLights[3].diffuse", 1.0f, 0.77f, 0.56f);
    lightingShader.setVec3("pointLights[3].specular", 0.0f, 0.0f, 0.0f);
    lightingShader.setFloat("pointLights[3].constant", 1.0f);
    lightingShader.setFloat("pointLights[3].linear", 0.35);
    lightingShader.setFloat("pointLights[3].quadratic", 0.44);

    // point light 4
    lightingShader.setVec3("pointLights[4].position", pointLightPositions[4]);
    lightingShader.setVec3("pointLights[4].ambient", 0.2f, 0.2f, 0.2f);
    lightingShader.setVec3("pointLights[4].diffuse", 1.0f, 0.77f, 0.56f);
    lightingShader.setVec3("pointLights[4].specular", 0.0f, 0.0f, 0.0f);
    lightingShader.setFloat("pointLights[4].constant", 1.0f);
    lightingShader.setFloat("pointLights[4].linear", 0.35);
    lightingShader.setFloat("pointLights[4].quadratic", 0.44);

    // point light 5
    lightingShader.setVec3("pointLights[5].position", pointLightPositions[5]);
    lightingShader.setVec3("pointLights[5].ambient", 0.2f, 0.2f, 0.2f);
    lightingShader.setVec3("pointLights[5].diffuse", 1.0f, 0.77f, 0.56f);
    lightingShader.setVec3("pointLights[5].specular", 0.0f, 0.0f, 0.0f);
    lightingShader.setFloat("pointLights[5].constant", 1.0f);
    lightingShader.setFloat("pointLights[5].linear", 0.35);
    lightingShader.setFloat("pointLights[5].quadratic", 0.44);

    // point light 6
    lightingShader.setVec3("pointLights[6].position", pointLightPositions[6]);
    lightingShader.setVec3("pointLights[6].ambient", 0.2f, 0.2f, 0.2f);
    lightingShader.setVec3("pointLights[6].diffuse", 1.0f, 0.77f, 0.56f);
    lightingShader.setVec3("pointLights[6].specular", 0.0f, 0.0f, 0.0f);
    lightingShader.setFloat("pointLights[6].constant", 1.0f);
    lightingShader.setFloat("pointLights[6].linear", 0.35);
    lightingShader.setFloat("pointLights[6].quadratic", 0.44);
}
