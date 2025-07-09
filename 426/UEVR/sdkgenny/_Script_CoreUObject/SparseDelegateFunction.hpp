#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "DelegateFunction.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
#pragma pack(push, 1)
struct SparseDelegateFunction : public DelegateFunction {
    private: char pad_e0[0x10]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xf0
#pragma pack(pop)
}
