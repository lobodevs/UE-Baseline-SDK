#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Engine {
struct RuntimeVirtualTextureStreamingProxy;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RuntimeVirtualTexture : public _Script_CoreUObject::Object {
    private: char pad_28[0x78]; public:
    int32_t& get_TileCount();
    int32_t& get_TileSize();
    int32_t& get_TileBorderSize();
    void* get_MaterialType();
    bool get_bCompressTextures();
    void set_bCompressTextures(bool value);
    bool get_bClearTextures();
    void set_bClearTextures(bool value);
    bool get_bSinglePhysicalSpace();
    void set_bSinglePhysicalSpace(bool value);
    bool get_bPrivateSpace();
    void set_bPrivateSpace(bool value);
    bool get_bAdaptive();
    void set_bAdaptive(bool value);
    bool get_bContinuousUpdate();
    void set_bContinuousUpdate(bool value);
    int32_t& get_RemoveLowMips();
    void* get_LODGroup();
    int32_t& get_Size();
    _Script_Engine::RuntimeVirtualTextureStreamingProxy*& get_StreamingTexture();
    static _Script_CoreUObject::Class* static_class();
    int32_t GetTileSize();
    int32_t GetTileCount();
    int32_t GetTileBorderSize();
    int32_t GetSize();
    int32_t GetPageTableSize();
}; // Size: 0xa0
#pragma pack(pop)
}
