#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MulticastDelegateProperty.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
#pragma pack(push, 1)
struct MulticastSparseDelegateProperty : public MulticastDelegateProperty {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x78
#pragma pack(pop)
}
