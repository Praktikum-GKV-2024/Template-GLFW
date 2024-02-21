#include <GLFW/glfw3.h>
#include <glm/vec3.hpp> // glm::vec3
#include <glm/vec4.hpp> // glm::vec4
#include <glm/mat4x4.hpp> // glm::mat4
#include <glm/ext/matrix_transform.hpp> // glm::translate, glm::rotate, glm::scale
#include <glm/ext/matrix_clip_space.hpp> // glm::perspective
#include <glm/ext/scalar_constants.hpp> // glm::pi
#include <iostream>

class MainScene {
public:
    MainScene () {

    }

    void start() {

    }

    void update() {
        glBegin(GL_TRIANGLES);
            glVertex2d(0,0);
            glVertex2d(1,1);
            glVertex2d(0,1);
            glVertex2d(0,0);
            glVertex2d(-1,-1);
            glVertex2d(0,-1);
        glEnd();
    }
};