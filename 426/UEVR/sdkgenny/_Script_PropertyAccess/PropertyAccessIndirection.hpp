#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Function;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_PropertyAccess {
#pragma pack(push, 1)
struct PropertyAccessIndirection {
    private: char pad_0[0x40]; public:
    void* get_ArrayProperty();
    _Script_CoreUObject::Function*& get_Function();
    int32_t& get_ReturnBufferSize();
    int32_t& get_ReturnBufferAlignment();
    int32_t& get_ArrayIndex();
    void* get_Offset();
    void* get_ObjectType();
    void* get_Type();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
