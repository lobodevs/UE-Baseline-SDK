#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_NiagaraShader {
#pragma pack(push, 1)
struct NiagaraCompileEvent {
    private: char pad_0[0x48]; public:
    void* get_Severity();
    void* get_Message();
    void* get_NodeGuid();
    void* get_PinGuid();
    void* get_StackGuids();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
