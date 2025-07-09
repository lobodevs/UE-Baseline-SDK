#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "StreamableRenderAsset.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct Texture : public StreamableRenderAsset {
    private: char pad_60[0x78]; public:
    void* get_LightingGuid();
    int32_t& get_LODBias();
    void* get_CompressionSettings();
    void* get_Filter();
    void* get_MipLoadOptions();
    void* get_LODGroup();
    void* get_Downscale();
    void* get_DownscaleOptions();
    bool get_SRGB();
    void set_SRGB(bool value);
    bool get_bNoTiling();
    void set_bNoTiling(bool value);
    bool get_VirtualTextureStreaming();
    void set_VirtualTextureStreaming(bool value);
    bool get_CompressionYCoCg();
    void set_CompressionYCoCg(bool value);
    bool get_bNotOfflineProcessed();
    void set_bNotOfflineProcessed(bool value);
    bool get_bAsyncResourceReleaseHasBeenStarted();
    void set_bAsyncResourceReleaseHasBeenStarted(bool value);
    void* get_AssetUserData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xd8
#pragma pack(pop)
}
