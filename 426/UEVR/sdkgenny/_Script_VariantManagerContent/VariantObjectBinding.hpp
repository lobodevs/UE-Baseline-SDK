#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_VariantManagerContent {
#pragma pack(push, 1)
struct VariantObjectBinding : public _Script_CoreUObject::Object {
    private: char pad_28[0x68]; public:
    void* get_CachedActorLabel();
    void* get_ObjectPtr();
    void* get_LazyObjectPtr();
    void* get_CapturedProperties();
    void* get_FunctionCallers();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x90
#pragma pack(pop)
}
