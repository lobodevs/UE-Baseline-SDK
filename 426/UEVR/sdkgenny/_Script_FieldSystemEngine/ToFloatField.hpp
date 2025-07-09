#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "FieldNodeFloat.hpp"
namespace _Script_FieldSystemEngine {
struct FieldNodeInt;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_FieldSystemEngine {
#pragma pack(push, 1)
struct ToFloatField : public FieldNodeFloat {
    private: char pad_b0[0x8]; public:
    _Script_FieldSystemEngine::FieldNodeInt*& get_IntField();
    static _Script_CoreUObject::Class* static_class();
    _Script_FieldSystemEngine::ToFloatField* SetToFloatField(_Script_FieldSystemEngine::FieldNodeInt* IntegerField);
}; // Size: 0xb8
#pragma pack(pop)
}
