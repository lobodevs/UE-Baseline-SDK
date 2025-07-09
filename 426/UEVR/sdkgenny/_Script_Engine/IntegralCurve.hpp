#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "IndexedCurve.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct IntegralCurve : public IndexedCurve {
    private: char pad_68[0x18]; public:
    void* get_Keys();
    int32_t& get_DefaultValue();
    bool get_bUseDefaultValueBeforeFirstKey();
    void set_bUseDefaultValueBeforeFirstKey(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x80
#pragma pack(pop)
}
