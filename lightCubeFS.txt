#version 330 core
out vec4 FragColor;
uniform bool isDark;

void main()
{
    if(isDark)
    FragColor = vec4(1.0,0.57,0.16,1.0)*0.6; // orange light
    else
    FragColor = vec4(1.0);   //white light
}