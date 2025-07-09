#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Paper2D {
#pragma pack(push, 1)
struct PaperRuntimeSettings : public _Script_CoreUObject::Object {
    private: char pad_28[0x8]; public:
    bool get_bEnableSpriteAtlasGroups();
    void set_bEnableSpriteAtlasGroups(bool value);
    bool get_bEnableTerrainSplineEditing();
    void set_bEnableTerrainSplineEditing(bool value);
    bool get_bResizeSpriteDataToMatchTextures();
    void set_bResizeSpriteDataToMatchTextures(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
