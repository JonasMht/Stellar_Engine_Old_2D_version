#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <iostream>
#include <stdexcept>
#include <vector>
#include <map>
#include <cstring>
#include <cstdlib>
#include <optional>


// Program constants
const uint32_t WIDTH = 800;
const uint32_t HEIGHT = 600;

//Validation layers
const std::vector<const char*> validationLayers = {"VK_LAYER_KHRONOS_validation"};

#ifdef NDEBUG //Check if c++ isn't in debug mode
const bool enableValidationLayers = false;
#else
const bool enableValidationLayers = true;
#endif

// Save loading dunctions