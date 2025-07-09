#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "FieldNodeBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_FieldSystemEngine {
#pragma pack(push, 1)
struct OperatorField : public FieldNodeBase {
    private: char pad_b0[0x20]; public:
    float& get_Magnitude();
    _Script_FieldSystemEngine::FieldNodeBase*& get_RightField();
    _Script_FieldSystemEngine::FieldNodeBase*& get_LeftField();
    void* get_Operation();
    static _Script_CoreUObject::Class* static_class();
    _Script_FieldSystemEngine::OperatorField* SetOperatorField(float Magnitude, _Script_FieldSystemEngine::FieldNodeBase* RightField, _Script_FieldSystemEngine::FieldNodeBase* LeftField, void* Operation);
}; // Size: 0xd0
#pragma pack(pop)
}
