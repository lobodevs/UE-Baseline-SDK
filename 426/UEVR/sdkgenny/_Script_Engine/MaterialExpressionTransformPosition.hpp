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
struct MaterialExpressionTransformPosition : public MaterialExpression {
    private: char pad_40[0x18]; public:
    void* get_Input();
    void* get_TransformSourceType();
    void* get_TransformType();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
