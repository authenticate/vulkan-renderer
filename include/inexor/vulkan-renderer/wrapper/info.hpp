#pragma once

#include <vector>

#include <vulkan/vulkan.h>

namespace inexor::vulkan_renderer::wrapper {

/// @brief A small helper function that return vulkan create infos with sType already set
/// @example auto render_pass_ci = make_info<VkRenderPassCreateInfo>();
/// @note Also zeros the returned struct
template <typename T>
[[nodiscard]] T make_info();

/// VkDescriptorPoolSize
template <typename T>
[[nodiscard]] T make_info(VkDescriptorType type, uint32_t descriptorCount);

/// VkDescriptorPoolCreateInfo
template <typename T>
[[nodiscard]] T make_info(const std::vector<VkDescriptorPoolSize> &poolSizes, uint32_t maxSets);

/// VkDescriptorSetLayoutBinding
template <typename T>
[[nodiscard]] T make_info(VkDescriptorType type, VkShaderStageFlags stageFlags, uint32_t binding,
                          uint32_t descriptorCount = 0);

/// VkDescriptorSetLayoutCreateInfo
template <typename T>
[[nodiscard]] T make_info(const std::vector<VkDescriptorSetLayoutBinding> &bindings);

/// VkDescriptorSetAllocateInfo
template <typename T>
[[nodiscard]] T make_info(VkDescriptorPool descriptorPool, const VkDescriptorSetLayout *pSetLayouts,
                          uint32_t descriptorSetCount);

/// VkDescriptorImageInfo
template <typename T>
[[nodiscard]] T make_info(VkSampler sampler, VkImageView imageView, VkImageLayout imageLayout);

/// VkWriteDescriptorSet
template <typename T>
[[nodiscard]] T make_info(VkDescriptorSet dstSet, VkDescriptorType type, uint32_t binding,
                          VkDescriptorBufferInfo *bufferInfo, uint32_t descriptorCount = 1);

/// VkWriteDescriptorSet
template <typename T>
[[nodiscard]] T make_info(VkDescriptorSet dstSet, VkDescriptorType type, uint32_t binding,
                          VkDescriptorImageInfo *imageInfo, uint32_t descriptorCount = 1);

/// VkPushConstantRange
template <typename T>
[[nodiscard]] T make_info(VkShaderStageFlags stageFlags, uint32_t size, uint32_t offset);

/// VkPipelineLayoutCreateInfo
template <typename T>
[[nodiscard]] T make_info(const VkDescriptorSetLayout *pSetLayouts, uint32_t setLayoutCount = 1);

/// VkPipelineInputAssemblyStateCreateInfo
template <typename T>
[[nodiscard]] T make_info(VkPrimitiveTopology topology, VkPipelineInputAssemblyStateCreateFlags flags,
                          VkBool32 primitiveRestartEnable);

/// VkPipelineRasterizationStateCreateInfo
template <typename T>
[[nodiscard]] T make_info(VkPolygonMode polygonMode, VkCullModeFlags cullMode, VkFrontFace frontFace,
                          VkPipelineRasterizationStateCreateFlags flags = 0);

/// VkPipelineColorBlendStateCreateInfo
template <typename T>
[[nodiscard]] T make_info(uint32_t attachmentCount, const VkPipelineColorBlendAttachmentState *pAttachments);

/// VkPipelineDepthStencilStateCreateInfo
template <typename T>
[[nodiscard]] T make_info(VkBool32 depthTestEnable, VkBool32 depthWriteEnable, VkCompareOp depthCompareOp);

/// VkPipelineViewportStateCreateInfo
template <typename T>
[[nodiscard]] T make_info(uint32_t viewportCount, uint32_t scissorCount, VkPipelineViewportStateCreateFlags flags = 0);

/// VkPipelineMultisampleStateCreateInfo
template <typename T>
[[nodiscard]] T make_info(VkSampleCountFlagBits rasterizationSamples, VkPipelineMultisampleStateCreateFlags flags = 0);

/// VkPipelineDynamicStateCreateInfo
template <typename T>
[[nodiscard]] T make_info(const std::vector<VkDynamicState> &pDynamicStates,
                          VkPipelineDynamicStateCreateFlags flags = 0);

/// VkGraphicsPipelineCreateInfo
template <typename T>
[[nodiscard]] T make_info(VkPipelineLayout layout, VkRenderPass renderPass, VkPipelineCreateFlags flags = 0);

/// VkVertexInputBindingDescription
template <typename T>
[[nodiscard]] T make_info(uint32_t binding, uint32_t stride, VkVertexInputRate inputRate);

/// VkVertexInputAttributeDescription
template <typename T>
[[nodiscard]] T make_info(uint32_t binding, uint32_t location, VkFormat format, uint32_t offset);

///

} // namespace inexor::vulkan_renderer::wrapper
