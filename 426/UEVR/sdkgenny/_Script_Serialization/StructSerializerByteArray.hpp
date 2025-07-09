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
struct StructSerializerByteArray {
    private: char pad_0[0x38]; public:
    int32_t& get_Dummy1();
    void* get_ByteArray();
    int32_t& get_Dummy2();
    void* get_Int8Array();
    int32_t& get_Dummy3();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
