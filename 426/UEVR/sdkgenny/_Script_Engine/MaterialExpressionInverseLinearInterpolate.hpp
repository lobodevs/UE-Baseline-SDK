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
struct MaterialExpressionInverseLinearInterpolate : public MaterialExpression {
    private: char pad_40[0x50]; public:
    void* get_A();
    void* get_B();
    void* get_Value();
    float& get_ConstA();
    float& get_ConstB();
    float& get_ConstValue();
    bool get_bClampResult();
    void set_bClampResult(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x90
#pragma pack(pop)
}
