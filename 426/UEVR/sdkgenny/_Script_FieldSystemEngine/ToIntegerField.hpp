#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "FieldNodeInt.hpp"
namespace _Script_FieldSystemEngine {
struct FieldNodeFloat;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_FieldSystemEngine {
#pragma pack(push, 1)
struct ToIntegerField : public FieldNodeInt {
    private: char pad_b0[0x8]; public:
    _Script_FieldSystemEngine::FieldNodeFloat*& get_FloatField();
    static _Script_CoreUObject::Class* static_class();
    _Script_FieldSystemEngine::ToIntegerField* SetToIntegerField(_Script_FieldSystemEngine::FieldNodeFloat* FloatField);
}; // Size: 0xb8
#pragma pack(pop)
}
