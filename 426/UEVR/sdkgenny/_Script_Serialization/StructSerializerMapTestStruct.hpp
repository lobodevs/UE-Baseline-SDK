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
struct StructSerializerMapTestStruct {
    private: char pad_0[0x140]; public:
    void* get_IntToStr();
    void* get_StrToStr();
    void* get_StrToVec();
    void* get_StrToStruct();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x140
#pragma pack(pop)
}
