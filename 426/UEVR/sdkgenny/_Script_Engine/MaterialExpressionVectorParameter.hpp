#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MaterialExpressionParameter.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct MaterialExpressionVectorParameter : public MaterialExpressionParameter {
    private: char pad_58[0x18]; public:
    void* get_DefaultValue();
    bool get_bUseCustomPrimitiveData();
    void set_bUseCustomPrimitiveData(bool value);
    void* get_PrimitiveDataIndex();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}
