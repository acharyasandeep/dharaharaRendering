@echo off

if not exist ".\Object_Files\glad.o" (
    g++ -c -I ./Dependencies/glad/include/ ./Dependencies/glad/src/glad.c -o ./Object_Files/glad.o
)

for %%f in (./Source_Files/*.cpp) do (
    g++ -c -I ./Dependencies/glad/include/ -I ./Dependencies/GLFW/include/ -I ./Dependencies/glm/include/ -I ./Dependencies/assimp/include/ -I ./Include_Files/ ./Source_Files/%%f -o ./Object_Files/%%~nf.o
    )

g++ -L ./Dependencies/GLFW/lib-mingw-w64/ -L ./Dependencies/assimp/lib ./Object_Files/*.o -o output -lopengl32 -lglfw3 -lgdi32 -lassimp
