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
namespace _Script_Engine {
#pragma pack(push, 1)
struct ExposedValueHandler {
    private: char pad_0[0x50]; public:
    void* get_BoundFunction();
    void* get_CopyRecords();
    _Script_CoreUObject::Function*& get_Function();
    void* get_ValueHandlerNodeProperty();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
