#include <GLFW/glfw3.h>
#include <iostream>

int main() {
    if (!glfwInit()) {
        std::cout << "Error initialiazing GLFW" << std::endl;
        return -1;
    }

    GLFWwindow* window = glfwCreateWindow(800, 600, "Star OpenGL", NULL, NULL);
    if (window == NULL) {
        std::cout << "Error creating window GLFW" << std::endl;
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);

    float vertices[] = {
		// First Triangle
         0.0f,  0.8f, 0.0f,
        -0.8f, -0.4f, 0.0f,
         0.8f, -0.4f, 0.0f,
        
		// Second Triangle
         0.0f, -0.8f, 0.0f,
        -0.8f,  0.4f, 0.0f,
         0.8f,  0.4f, 0.0f
    };

    while (!glfwWindowShouldClose(window)) {
        // Background color
        glClearColor(0.8f, 0.6f, 0.8f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        // yellow color
        glColor3f(1.0f, 1.0f, 0.0f);

        glBegin(GL_TRIANGLES);
        for(int i = 0; i < 18; i += 3) {
            glVertex3f(vertices[i], vertices[i+1], vertices[i+2]);
        }
        glEnd();

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}
