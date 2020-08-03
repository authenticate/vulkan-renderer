#include "inexor/vulkan-renderer/wrapper/info.hpp"

#include <vulkan/vulkan_core.h>

namespace inexor::vulkan_renderer::wrapper {

template <>
VkApplicationInfo make_info() {
    VkApplicationInfo ret{};
    ret.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
    return ret;
}

template <>
VkBufferCreateInfo make_info() {
    VkBufferCreateInfo ret{};
    ret.sType = VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO;
    return ret;
}

template <>
VkCommandBufferAllocateInfo make_info() {
    VkCommandBufferAllocateInfo ret{};
    ret.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO;
    return ret;
}

template <>
VkCommandBufferBeginInfo make_info() {
    VkCommandBufferBeginInfo ret{};
    ret.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO;
    return ret;
}

template <>
VkCommandPoolCreateInfo make_info() {
    VkCommandPoolCreateInfo ret{};
    ret.sType = VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO;
    return ret;
}

template <>
VkDebugMarkerMarkerInfoEXT make_info() {
    VkDebugMarkerMarkerInfoEXT ret{};
    ret.sType = VK_STRUCTURE_TYPE_DEBUG_MARKER_MARKER_INFO_EXT;
    return ret;
}

template <>
VkDebugMarkerObjectNameInfoEXT make_info() {
    VkDebugMarkerObjectNameInfoEXT ret{};
    ret.sType = VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_NAME_INFO_EXT;
    return ret;
}

template <>
VkDebugMarkerObjectTagInfoEXT make_info() {
    VkDebugMarkerObjectTagInfoEXT ret{};
    ret.sType = VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_TAG_INFO_EXT;
    return ret;
}

template <>
VkDebugReportCallbackCreateInfoEXT make_info() {
    VkDebugReportCallbackCreateInfoEXT ret{};
    ret.sType = VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT;
    return ret;
}

template <>
VkDescriptorPoolCreateInfo make_info() {
    VkDescriptorPoolCreateInfo ret{};
    ret.sType = VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO;
    return ret;
}

template <>
VkDescriptorSetAllocateInfo make_info() {
    VkDescriptorSetAllocateInfo ret{};
    ret.sType = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO;
    return ret;
}

template <>
VkDescriptorSetLayoutCreateInfo make_info() {
    VkDescriptorSetLayoutCreateInfo ret{};
    ret.sType = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO;
    return ret;
}

template <>
VkDeviceCreateInfo make_info() {
    VkDeviceCreateInfo ret{};
    ret.sType = VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO;
    return ret;
}

template <>
VkDeviceQueueCreateInfo make_info() {
    VkDeviceQueueCreateInfo ret{};
    ret.sType = VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO;
    return ret;
}

template <>
VkFramebufferCreateInfo make_info() {
    VkFramebufferCreateInfo ret{};
    ret.sType = VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO;
    return ret;
}

template <>
VkGraphicsPipelineCreateInfo make_info() {
    VkGraphicsPipelineCreateInfo ret{};
    ret.sType = VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO;
    return ret;
}

template <>
VkImageCreateInfo make_info() {
    VkImageCreateInfo ret{};
    ret.sType = VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO;
    return ret;
}

template <>
VkImageMemoryBarrier make_info() {
    VkImageMemoryBarrier ret{};
    ret.sType = VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER;
    return ret;
}

template <>
VkImageViewCreateInfo make_info() {
    VkImageViewCreateInfo ret{};
    ret.sType = VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO;
    return ret;
}

template <>
VkInstanceCreateInfo make_info() {
    VkInstanceCreateInfo ret{};
    ret.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    return ret;
}

template <>
VkPipelineColorBlendStateCreateInfo make_info() {
    VkPipelineColorBlendStateCreateInfo ret{};
    ret.sType = VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO;
    return ret;
}

template <>
VkPipelineDepthStencilStateCreateInfo make_info() {
    VkPipelineDepthStencilStateCreateInfo ret{};
    ret.sType = VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO;
    return ret;
}

template <>
VkPipelineInputAssemblyStateCreateInfo make_info() {
    VkPipelineInputAssemblyStateCreateInfo ret{};
    ret.sType = VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO;
    return ret;
}

template <>
VkPipelineLayoutCreateInfo make_info() {
    VkPipelineLayoutCreateInfo ret{};
    ret.sType = VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO;
    return ret;
}

template <>
VkPipelineMultisampleStateCreateInfo make_info() {
    VkPipelineMultisampleStateCreateInfo ret{};
    ret.sType = VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO;
    return ret;
}

template <>
VkPipelineRasterizationStateCreateInfo make_info() {
    VkPipelineRasterizationStateCreateInfo ret{};
    ret.sType = VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO;
    return ret;
}

template <>
VkPipelineShaderStageCreateInfo make_info() {
    VkPipelineShaderStageCreateInfo ret{};
    ret.sType = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
    return ret;
}

template <>
VkPipelineVertexInputStateCreateInfo make_info() {
    VkPipelineVertexInputStateCreateInfo ret{};
    ret.sType = VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO;
    return ret;
}

template <>
VkPipelineViewportStateCreateInfo make_info() {
    VkPipelineViewportStateCreateInfo ret{};
    ret.sType = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO;
    return ret;
}

template <>
VkPresentInfoKHR make_info() {
    VkPresentInfoKHR ret{};
    ret.sType = VK_STRUCTURE_TYPE_PRESENT_INFO_KHR;
    return ret;
}

template <>
VkRenderPassBeginInfo make_info() {
    VkRenderPassBeginInfo ret{};
    ret.sType = VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO;
    return ret;
}

template <>
VkRenderPassCreateInfo make_info() {
    VkRenderPassCreateInfo ret{};
    ret.sType = VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO;
    return ret;
}

template <>
VkSamplerCreateInfo make_info() {
    VkSamplerCreateInfo ret{};
    ret.sType = VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO;
    return ret;
}

template <>
VkSemaphoreCreateInfo make_info() {
    VkSemaphoreCreateInfo ret{};
    ret.sType = VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO;
    return ret;
}

template <>
VkShaderModuleCreateInfo make_info() {
    VkShaderModuleCreateInfo ret{};
    ret.sType = VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO;
    return ret;
}

template <>
VkSubmitInfo make_info() {
    VkSubmitInfo ret{};
    ret.sType = VK_STRUCTURE_TYPE_SUBMIT_INFO;
    return ret;
}

template <>
VkSwapchainCreateInfoKHR make_info() {
    VkSwapchainCreateInfoKHR ret{};
    ret.sType = VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR;
    return ret;
}

template <>
VkDescriptorPoolSize make_info(VkDescriptorType type, uint32_t descriptorCount) {
    VkDescriptorPoolSize ret{};
    ret.type = type;
    ret.descriptorCount = descriptorCount;
    return ret;
}

template <>
VkDescriptorPoolCreateInfo make_info(const std::vector<VkDescriptorPoolSize> &poolSizes, uint32_t maxSets) {
    VkDescriptorPoolCreateInfo ret{};
    ret.sType = VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO;
    ret.poolSizeCount = static_cast<uint32_t>(poolSizes.size());
    ret.pPoolSizes = poolSizes.data();
    ret.maxSets = maxSets;
    return ret;
}

template <>
VkDescriptorSetLayoutBinding make_info(VkDescriptorType type, VkShaderStageFlags stageFlags, uint32_t binding,
                                       uint32_t descriptorCount) {
    VkDescriptorSetLayoutBinding ret{};
    ret.descriptorType = type;
    ret.stageFlags = stageFlags;
    ret.binding = binding;
    ret.descriptorCount = descriptorCount;
    return ret;
}

template <>
VkDescriptorSetLayoutCreateInfo make_info(const std::vector<VkDescriptorSetLayoutBinding> &bindings) {
    VkDescriptorSetLayoutCreateInfo ret{};
    ret.sType = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO;
    ret.pBindings = bindings.data();
    ret.bindingCount = static_cast<uint32_t>(bindings.size());
    return ret;
}

template <>
VkDescriptorSetAllocateInfo make_info(VkDescriptorPool descriptorPool, const VkDescriptorSetLayout *pSetLayouts,
                                      uint32_t descriptorSetCount) {
    VkDescriptorSetAllocateInfo ret{};
    ret.sType = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO;
    ret.descriptorPool = descriptorPool;
    ret.pSetLayouts = pSetLayouts;
    ret.descriptorSetCount = descriptorSetCount;
    return ret;
}

template <>
VkDescriptorImageInfo make_info(VkSampler sampler, VkImageView imageView, VkImageLayout imageLayout) {
    VkDescriptorImageInfo ret{};
    ret.sampler = sampler;
    ret.imageView = imageView;
    ret.imageLayout = imageLayout;
    return ret;
}

template <>
VkWriteDescriptorSet make_info(VkDescriptorSet dstSet, VkDescriptorType type, uint32_t binding,
                               VkDescriptorBufferInfo *bufferInfo, uint32_t descriptorCount) {
    VkWriteDescriptorSet ret{};
    ret.sType = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
    ret.dstSet = dstSet;
    ret.descriptorType = type;
    ret.dstBinding = binding;
    ret.pBufferInfo = bufferInfo;
    ret.descriptorCount = descriptorCount;
    return ret;
}

template <>
VkWriteDescriptorSet make_info(VkDescriptorSet dstSet, VkDescriptorType type, uint32_t binding,
                               VkDescriptorImageInfo *imageInfo, uint32_t descriptorCount) {
    VkWriteDescriptorSet ret{};
    ret.sType = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
    ret.dstSet = dstSet;
    ret.descriptorType = type;
    ret.dstBinding = binding;
    ret.pImageInfo = imageInfo;
    ret.descriptorCount = descriptorCount;
    return ret;
}

template <>
VkPushConstantRange make_info(VkShaderStageFlags stageFlags, uint32_t size, uint32_t offset) {
    VkPushConstantRange ret{};
    ret.stageFlags = stageFlags;
    ret.offset = offset;
    ret.size = size;
    return ret;
}

template <>
VkPipelineLayoutCreateInfo make_info(const VkDescriptorSetLayout *pSetLayouts, uint32_t setLayoutCount) {
    VkPipelineLayoutCreateInfo ret{};
    ret.sType = VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO;
    ret.setLayoutCount = setLayoutCount;
    ret.pSetLayouts = pSetLayouts;
    return ret;
}

template <>
VkPipelineInputAssemblyStateCreateInfo make_info(VkPrimitiveTopology topology,
                                                 VkPipelineInputAssemblyStateCreateFlags flags,
                                                 VkBool32 primitiveRestartEnable) {
    VkPipelineInputAssemblyStateCreateInfo ret{};
    ret.sType = VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO;
    ret.topology = topology;
    ret.flags = flags;
    ret.primitiveRestartEnable = primitiveRestartEnable;
    return ret;
}

template <>
VkPipelineRasterizationStateCreateInfo make_info(VkPolygonMode polygonMode, VkCullModeFlags cullMode,
                                                 VkFrontFace frontFace, VkPipelineRasterizationStateCreateFlags flags) {
    VkPipelineRasterizationStateCreateInfo ret{};
    ret.sType = VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO;
    ret.polygonMode = polygonMode;
    ret.cullMode = cullMode;
    ret.frontFace = frontFace;
    ret.flags = flags;
    ret.depthClampEnable = VK_FALSE;
    ret.lineWidth = 1.0f;
    return ret;
}

template <>
VkPipelineColorBlendStateCreateInfo make_info(uint32_t attachmentCount,
                                              const VkPipelineColorBlendAttachmentState *pAttachments) {
    VkPipelineColorBlendStateCreateInfo ret{};
    ret.sType = VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO;
    ret.attachmentCount = attachmentCount;
    ret.pAttachments = pAttachments;
    return ret;
}

template <>
VkPipelineDepthStencilStateCreateInfo make_info(VkBool32 depthTestEnable, VkBool32 depthWriteEnable,
                                                VkCompareOp depthCompareOp) {
    VkPipelineDepthStencilStateCreateInfo ret{};
    ret.sType = VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO;
    ret.depthTestEnable = depthTestEnable;
    ret.depthWriteEnable = depthWriteEnable;
    ret.depthCompareOp = depthCompareOp;
    ret.back.compareOp = VK_COMPARE_OP_ALWAYS;
    return ret;
}

template <>
VkPipelineViewportStateCreateInfo make_info(uint32_t viewportCount, uint32_t scissorCount,
                                            VkPipelineViewportStateCreateFlags flags) {
    VkPipelineViewportStateCreateInfo ret{};
    ret.sType = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO;
    ret.viewportCount = viewportCount;
    ret.scissorCount = scissorCount;
    ret.flags = flags;
    return ret;
}

template <>
VkPipelineMultisampleStateCreateInfo make_info(VkSampleCountFlagBits rasterizationSamples,
                                               VkPipelineMultisampleStateCreateFlags flags) {
    VkPipelineMultisampleStateCreateInfo ret{};
    ret.sType = VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO;
    ret.rasterizationSamples = rasterizationSamples;
    ret.flags = flags;
    return ret;
}

template <>
VkPipelineDynamicStateCreateInfo make_info(const std::vector<VkDynamicState> &pDynamicStates,
                                           VkPipelineDynamicStateCreateFlags flags) {
    VkPipelineDynamicStateCreateInfo ret{};
    ret.sType = VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO;
    ret.pDynamicStates = pDynamicStates.data();
    ret.dynamicStateCount = static_cast<uint32_t>(pDynamicStates.size());
    ret.flags = flags;
    return ret;
}

template <>
VkGraphicsPipelineCreateInfo make_info(VkPipelineLayout layout, VkRenderPass renderPass, VkPipelineCreateFlags flags) {
    VkGraphicsPipelineCreateInfo ret{};
    ret.sType = VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO;
    ret.layout = layout;
    ret.renderPass = renderPass;
    ret.flags = flags;
    ret.basePipelineIndex = -1;
    ret.basePipelineHandle = VK_NULL_HANDLE;
    return ret;
}

template <>
VkVertexInputBindingDescription make_info(uint32_t binding, uint32_t stride, VkVertexInputRate inputRate) {
    VkVertexInputBindingDescription ret{};
    ret.binding = binding;
    ret.stride = stride;
    ret.inputRate = inputRate;
    return ret;
}

template <>
VkVertexInputAttributeDescription make_info(uint32_t binding, uint32_t location, VkFormat format, uint32_t offset) {
    VkVertexInputAttributeDescription ret{};
    ret.location = location;
    ret.binding = binding;
    ret.format = format;
    ret.offset = offset;
    return ret;
}

} // namespace inexor::vulkan_renderer::wrapper
