#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct TextureLODGroup {
    private: char pad_0[0x64]; public:
    void* get_Group();
    int32_t& get_LODBias();
    int32_t& get_LODBias_Smaller();
    int32_t& get_LODBias_Smallest();
    int32_t& get_NumStreamedMips();
    void* get_MipGenSettings();
    int32_t& get_MinLODSize();
    int32_t& get_MaxLODSize();
    int32_t& get_MaxLODSize_Smaller();
    int32_t& get_MaxLODSize_Smallest();
    int32_t& get_OptionalLODBias();
    int32_t& get_OptionalMaxLODSize();
    void* get_MinMagFilter();
    void* get_MipFilter();
    void* get_MipLoadOptions();
    bool get_DuplicateNonOptionalMips();
    void set_DuplicateNonOptionalMips(bool value);
    float& get_Downscale();
    void* get_DownscaleOptions();
    int32_t& get_VirtualTextureTileCountBias();
    int32_t& get_VirtualTextureTileSizeBias();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x64
#pragma pack(pop)
}
