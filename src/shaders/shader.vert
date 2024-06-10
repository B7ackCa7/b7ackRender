#version 330 core
/* NOTE here in the vertex shader is each input is a Vertex Attriibute
  - maximum amount of vertex attributes available is limited by the hardware
  - OpenGL states there is at least 16 4 component vertex attributes */
layout(location =
           0) in vec3 aPos; // the position variable has attribute position 0
layout(
    location = 1) in vec3 aColor; // the color variable has attribute position 1

// out vec4 vertexColor; // specify a color output to the fragment shader
out vec3 ourColor; // output a color to the fragment shader
out vec3 ourPosition;

// uniform offset through the vertex shader to manipulate the position
// uniform float xOffset;

void main() {
  // gl_Position = vec4(aPos.x + xOffset, aPos.y, aPos.z, 1.0f);
  gl_Position = vec4(aPos, 1.0);
  /*vertexColor = vec4(0.5, 0.0, 0.0, 1.0); // set the output variable to a
   * dark-red color*/

  // gl_Position = vec4(aPos.x, -aPos.y, aPos.z, 1.0);
  // ourColor = aColor; // set ourColor to the input color we got from the

  // vertex data
  ourPosition = aPos;
}