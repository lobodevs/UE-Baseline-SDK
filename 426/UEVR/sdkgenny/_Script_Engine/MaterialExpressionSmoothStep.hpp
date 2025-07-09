#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MaterialExpression.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct MaterialExpressionSmoothStep : public MaterialExpression {
    private: char pad_40[0x48]; public:
    void* get_Min();
    void* get_Max();
    void* get_Value();
    float& get_ConstMin();
    float& get_ConstMax();
    float& get_ConstValue();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x88
#pragma pack(pop)
}
