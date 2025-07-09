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
struct StructSerializerBooleanTestStruct {
    private: char pad_0[0x3]; public:
    bool get_BoolFalse();
    void set_BoolFalse(bool value);
    bool get_BoolTrue();
    void set_BoolTrue(bool value);
    bool get_Bitfield0();
    void set_Bitfield0(bool value);
    bool get_Bitfield1();
    void set_Bitfield1(bool value);
    bool get_Bitfield2Set();
    void set_Bitfield2Set(bool value);
    bool get_Bitfield3();
    void set_Bitfield3(bool value);
    bool get_Bitfield4Set();
    void set_Bitfield4Set(bool value);
    bool get_Bitfield5Set();
    void set_Bitfield5Set(bool value);
    bool get_Bitfield6();
    void set_Bitfield6(bool value);
    bool get_Bitfield7Set();
    void set_Bitfield7Set(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x3
#pragma pack(pop)
}
