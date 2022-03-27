#include "App.hpp"

namespace AMRT{
    void App::run(){
        while (!vulkanWindow.shouldClose()){
            glfwPollEvents();
        }
    }
}