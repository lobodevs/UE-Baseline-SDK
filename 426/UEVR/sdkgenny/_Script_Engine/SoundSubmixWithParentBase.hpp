#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SoundSubmixBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SoundSubmixWithParentBase : public SoundSubmixBase {
    private: char pad_38[0x8]; public:
    _Script_Engine::SoundSubmixBase*& get_ParentSubmix();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
