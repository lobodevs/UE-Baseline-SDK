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
struct CullingField : public FieldNodeBase {
    private: char pad_b0[0x18]; public:
    _Script_FieldSystemEngine::FieldNodeBase*& get_Culling();
    _Script_FieldSystemEngine::FieldNodeBase*& get_Field();
    void* get_Operation();
    static _Script_CoreUObject::Class* static_class();
    _Script_FieldSystemEngine::CullingField* SetCullingField(_Script_FieldSystemEngine::FieldNodeBase* Culling, _Script_FieldSystemEngine::FieldNodeBase* Field, void* Operation);
}; // Size: 0xc8
#pragma pack(pop)
}
