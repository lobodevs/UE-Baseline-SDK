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
struct NiagaraMaterialAttributeBinding {
    private: char pad_0[0x2c]; public:
    void* get_MaterialParameterName();
    void* get_NiagaraVariable();
    void* get_ResolvedNiagaraVariable();
    void* get_NiagaraChildVariable();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2c
#pragma pack(pop)
}
