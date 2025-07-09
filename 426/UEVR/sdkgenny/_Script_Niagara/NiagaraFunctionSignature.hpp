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
struct NiagaraFunctionSignature {
    private: char pad_0[0x90]; public:
    void* get_Name();
    void* get_Inputs();
    void* get_Outputs();
    void* get_OwnerName();
    bool get_bRequiresContext();
    void set_bRequiresContext(bool value);
    bool get_bRequiresExecPin();
    void set_bRequiresExecPin(bool value);
    bool get_bMemberFunction();
    void set_bMemberFunction(bool value);
    bool get_bExperimental();
    void set_bExperimental(bool value);
    bool get_bSupportsCPU();
    void set_bSupportsCPU(bool value);
    bool get_bSupportsGPU();
    void set_bSupportsGPU(bool value);
    bool get_bWriteFunction();
    void set_bWriteFunction(bool value);
    bool get_bSoftDeprecatedFunction();
    void set_bSoftDeprecatedFunction(bool value);
    int32_t& get_ModuleUsageBitmask();
    int32_t& get_ContextStageMinIndex();
    int32_t& get_ContextStageMaxIndex();
    void* get_FunctionSpecifiers();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x90
#pragma pack(pop)
}
