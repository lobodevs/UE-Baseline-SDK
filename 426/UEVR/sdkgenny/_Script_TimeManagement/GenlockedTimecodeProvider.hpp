#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\TimecodeProvider.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_TimeManagement {
#pragma pack(push, 1)
struct GenlockedTimecodeProvider : public _Script_Engine::TimecodeProvider {
    private: char pad_30[0x28]; public:
    bool get_bUseGenlockToCount();
    void set_bUseGenlockToCount(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
