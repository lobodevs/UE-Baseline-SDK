#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Paper2D {
#pragma pack(push, 1)
struct PaperSpriteAtlasSlot {
    private: char pad_0[0x40]; public:
    void* get_SpriteRef();
    int32_t& get_AtlasIndex();
    int32_t& get_X();
    int32_t& get_Y();
    int32_t& get_Width();
    int32_t& get_Height();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
