#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraComponentSettings : public _Script_CoreUObject::Object {
    private: char pad_28[0xf0]; public:
    void* get_SuppressActivationList();
    void* get_ForceAutoPooolingList();
    void* get_SuppressEmitterList();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x118
#pragma pack(pop)
}
