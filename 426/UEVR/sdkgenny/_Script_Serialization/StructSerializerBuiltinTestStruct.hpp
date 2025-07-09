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
struct StructSerializerBuiltinTestStruct {
    private: char pad_0[0x90]; public:
    void* get_Guid();
    void* get_Name();
    void* get_String();
    void* get_Text();
    void* get_Vector();
    void* get_Vector4();
    void* get_Rotator();
    void* get_Quat();
    void* get_Color();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x90
#pragma pack(pop)
}
