#pragma once

#include <cstdint>
#include <vector>
#include <string>

namespace ddspp {

// DDS file header magic number
constexpr uint32_t DDS_MAGIC = 0x20534444; // "DDS "

// DDS pixel format flags
enum class DDSFlags : uint32_t {
    DDSD_CAPS = 0x1,
    DDSD_HEIGHT = 0x2,
    DDSD_WIDTH = 0x4,
    DDSD_PITCH = 0x8,
    DDSD_PIXELFORMAT = 0x1000,
    DDSD_MIPMAPCOUNT = 0x20000,
    DDSD_LINEARSIZE = 0x80000,
    DDSD_DEPTH = 0x800000
};

// DDS pixel format structure
struct DDSPixelFormat {
    uint32_t size;
    uint32_t flags;
    uint32_t fourCC;
    uint32_t rgbBitCount;
    uint32_t rBitMask;
    uint32_t gBitMask;
    uint32_t bBitMask;
    uint32_t aBitMask;
};

// DDS header structure
struct DDSHeader {
    uint32_t size;
    uint32_t flags;
    uint32_t height;
    uint32_t width;
    uint32_t pitchOrLinearSize;
    uint32_t depth;
    uint32_t mipMapCount;
    uint32_t reserved1[11];
    DDSPixelFormat pixelFormat;
    uint32_t caps;
    uint32_t caps2;
    uint32_t caps3;
    uint32_t caps4;
    uint32_t reserved2;
};

// DDS texture class
class Texture {
public:
    Texture() = default;
    ~Texture() = default;

    bool Load(const std::string& filename);
    bool Save(const std::string& filename) const;

    uint32_t GetWidth() const { return header_.width; }
    uint32_t GetHeight() const { return header_.height; }
    uint32_t GetDepth() const { return header_.depth; }
    uint32_t GetMipMapCount() const { return header_.mipMapCount; }

private:
    DDSHeader header_;
    std::vector<uint8_t> data_;
};

} // namespace ddspp 