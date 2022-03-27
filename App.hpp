#pragma once 

#include "VulkanWindow.hpp"

namespace AMRT{
    class App{
        
        public:
        static constexpr int WIDTH = 1280;
        static constexpr int HEIGHT = 720;
        void run();
        private:
            Window::VulkanWindow vulkanWindow{WIDTH,HEIGHT,"AMRT"};
    };
}