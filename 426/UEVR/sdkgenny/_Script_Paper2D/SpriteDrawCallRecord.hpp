#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct Texture;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Paper2D {
#pragma pack(push, 1)
struct SpriteDrawCallRecord {
    private: char pad_0[0xd0]; public:
    void* get_Destination();
    _Script_Engine::Texture*& get_BaseTexture();
    void* get_Color();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xd0
#pragma pack(pop)
}
