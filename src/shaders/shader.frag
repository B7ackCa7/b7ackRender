#version 330 core
out vec4 FragColor;
/*NOTE Uniforms are global, they are a means to pass data from our application
on the cpu to the shaders on the GPU
- the uniform variable is unique per shader program object
- can be accessed from any shader at any stage in the shader program */
// uniform vec4 ourColor;

// in vec4 vertexColor; /* the input variable from the vertex shader the vertex
// attribute*/
in vec3 ourColor;
in vec3 ourPosition;

void main() {
  // FragColor = ourColor;
  //  FragColor = vertexColor;
  FragColor = vec4(ourPosition, 1.0);
  /*FragColor =
      vec4(ourColor, 1.0); // note how the position value is linearly
                           // interpolated to get all the different colors */
}