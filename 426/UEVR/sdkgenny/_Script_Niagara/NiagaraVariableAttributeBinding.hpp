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
struct NiagaraVariableAttributeBinding {
    private: char pad_0[0x58]; public:
    void* get_ParamMapVariable();
    void* get_DataSetVariable();
    void* get_RootVariable();
    void* get_BindingSourceMode();
    bool get_bBindingExistsOnSource();
    void set_bBindingExistsOnSource(bool value);
    bool get_bIsCachedParticleValue();
    void set_bIsCachedParticleValue(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
