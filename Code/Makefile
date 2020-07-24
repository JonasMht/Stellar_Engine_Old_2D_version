VULKAN_SDK_PATH = /home/jonas/VulkanSDK/1.2.141.2/x86_64

CFLAGS = -std=c++17 -I$(VULKAN_SDK_PATH)/include

LDFLAGS = -L$(VULKAN_SDK_PATH)/lib `pkg-config --static --libs glfw3` -lvulkan

INCLUDES = root.cpp

VulkanTest: main.cpp
	g++ $(CFLAGS) -o VulkanTest main.cpp $(INCLUDES) $(LDFLAGS)


.PHONY: test clean

test: VulkanTest
	LD_LIBRARY_PATH=$(VULKAN_SDK_PATH)/lib VK_LAYER_PATH=$(VULKAN_SDK_PATH)/etc/vulkan/explicit_layer.d ./VulkanTest

clean:
	rm -f VulkanTest
