#pragma once

#include "inexor/vulkan-renderer/imgui/vks.hpp"
#include "inexor/vulkan-renderer/wrapper/device.hpp"
#include "inexor/vulkan-renderer/wrapper/mesh_buffer.hpp"
#include "inexor/vulkan-renderer/wrapper/texture.hpp"

#include <glm/glm.hpp>
#include <imgui.h>
#include <spdlog/spdlog.h>
#include <vma/vk_mem_alloc.h>
#include <vulkan/vulkan.h>

#include <assert.h>
#include <iomanip>
#include <memory>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>

namespace inexor::vulkan_renderer::imgui {
class ImGUIOverlay {
public:
    const wrapper::Device &m_device;
    const VkPhysicalDevice m_graphics_card;
    const VmaAllocator m_vma_allocator;

    VkQueue queue;
    VkSampleCountFlagBits rasterizationSamples = VK_SAMPLE_COUNT_1_BIT;
    uint32_t subpass = 0;

    std::unique_ptr<wrapper::MeshBuffer> m_imgui_mesh;
    std::unique_ptr<wrapper::Texture> m_imgui_texture;

    VkQueue m_data_transfer_queue;
    std::uint32_t m_data_transfer_queue_family_index{VK_NULL_HANDLE};

    int32_t vertexCount = 0;
    int32_t indexCount = 0;

    std::vector<VkPipelineShaderStageCreateInfo> shaders;

    VkDescriptorPool descriptorPool;
    VkDescriptorSetLayout descriptorSetLayout;
    VkDescriptorSet descriptorSet;
    VkPipelineLayout pipelineLayout;
    VkPipeline pipeline;

    // VkDeviceMemory fontMemory = VK_NULL_HANDLE;
    // VkImage fontImage = VK_NULL_HANDLE;
    // VkImageView fontView = VK_NULL_HANDLE;
    // VkSampler sampler;

    struct PushConstBlock {
        glm::vec2 scale;
        glm::vec2 translate;
    } pushConstBlock;

    bool visible = true;
    bool updated = false;
    float scale = 1.0f;

    ImGUIOverlay(const wrapper::Device &device, const VkPhysicalDevice graphics_card, const VmaAllocator vma_allocator,
                 const VkQueue data_transfer_queue, const std::uint32_t data_transfer_queue_family_index);
    ~ImGUIOverlay();

    void preparePipeline(const VkPipelineCache pipelineCache, const VkRenderPass renderPass);
    void prepareResources();

    bool update();
    void draw(const VkCommandBuffer commandBuffer);
    void resize(uint32_t width, uint32_t height);

    void freeResources();

    bool header(const char *caption);
    bool checkBox(const char *caption, bool *value);
    bool checkBox(const char *caption, int32_t *value);
    bool inputFloat(const char *caption, float *value, float step, uint32_t precision);
    bool sliderFloat(const char *caption, float *value, float min, float max);
    bool sliderInt(const char *caption, int32_t *value, int32_t min, int32_t max);
    bool comboBox(const char *caption, int32_t *itemindex, std::vector<std::string> items);
    bool button(const char *caption);
    void text(const char *formatstr, ...);
};
} // namespace inexor::vulkan_renderer::imgui
