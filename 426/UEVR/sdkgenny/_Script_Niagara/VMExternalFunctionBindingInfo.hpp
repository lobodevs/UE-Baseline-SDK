#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct VMExternalFunctionBindingInfo {
    private: char pad_0[0x38]; public:
    void* get_Name();
    void* get_OwnerName();
    void* get_InputParamLocations();
    int32_t& get_NumOutputs();
    void* get_FunctionSpecifiers();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
