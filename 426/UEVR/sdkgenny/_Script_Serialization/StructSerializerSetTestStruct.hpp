#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Serialization {
#pragma pack(push, 1)
struct StructSerializerSetTestStruct {
    private: char pad_0[0x140]; public:
    void* get_StrSet();
    void* get_IntSet();
    void* get_NameSet();
    void* get_StructSet();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x140
#pragma pack(pop)
}
