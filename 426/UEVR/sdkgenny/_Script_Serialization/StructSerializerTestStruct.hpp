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
struct StructSerializerTestStruct {
    private: char pad_0[0x450]; public:
    void* get_Numerics();
    void* get_Booleans();
    void* get_Objects();
    void* get_Builtins();
    void* get_Arrays();
    void* get_Maps();
    void* get_Sets();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x450
#pragma pack(pop)
}
