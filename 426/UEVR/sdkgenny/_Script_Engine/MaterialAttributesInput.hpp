#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ExpressionInput.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct MaterialAttributesInput : public ExpressionInput {
    private: char pad_14[0x4]; public:
    int32_t& get_PropertyConnectedBitmask();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
