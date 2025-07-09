#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Serialization {
#pragma pack(push, 1)
struct StructSerializerObjectTestStruct {
    private: char pad_0[0xa0]; public:
    void* get_Class();
    void* get_SubClass();
    void* get_SoftClass();
    _Script_CoreUObject::Object*& get_Object();
    void* get_WeakObject();
    void* get_SoftObject();
    void* get_ClassPath();
    void* get_ObjectPath();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa0
#pragma pack(pop)
}
