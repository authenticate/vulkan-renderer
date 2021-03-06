#pragma once

#include "inexor/vulkan-renderer/wrapper/device.hpp"

#include <vma/vk_mem_alloc.h>

#include <cassert>
#include <string>

namespace inexor::vulkan_renderer::wrapper {

class Image {
private:
    const wrapper::Device &m_device;
    VmaAllocator m_vma_allocator;
    VmaAllocation m_allocation;
    VmaAllocationInfo m_allocation_info;
    VkImage m_image;
    VkFormat m_format;
    VkImageView m_image_view;
    std::string m_name;

public:
    /// @brief Creates an image and a corresponding image view.
    /// @param device [in] The Vulkan device.
    /// @param graphics_card [in] The graphics card.
    /// @param vma_allocator [in] The Vulkan Memory Allocator library handle.
    /// @param format [in] The image format.
    /// @param image_usage [in] The image usage flags.
    /// @param aspect_flags [in] The image aspect flags for the image view.
    /// @param sample_count [in] The sample count, mostly 1 if multisampling for this image is disabled.
    /// @param name [in] The internal name of this image.
    /// @param image_extent [in] The width and height of the image.
    Image(const wrapper::Device &device, const VkPhysicalDevice graphics_card, const VmaAllocator vma_allocator,
          const VkFormat format, const VkImageUsageFlags image_usage, const VkImageAspectFlags aspect_flags,
          const VkSampleCountFlagBits sample_count, const std::string &name, const VkExtent2D image_extent);
    Image(const Image &) = delete;
    Image(Image &&) noexcept;
    ~Image();

    Image &operator=(const Image &) = delete;
    Image &operator=(Image &&) = default;

    [[nodiscard]] VkFormat image_format() const {
        return m_format;
    }

    [[nodiscard]] VkImageView image_view() const {
        assert(m_image_view);
        return m_image_view;
    }

    [[nodiscard]] VkImage get() const {
        assert(m_image);
        return m_image;
    }
};

} // namespace inexor::vulkan_renderer::wrapper
