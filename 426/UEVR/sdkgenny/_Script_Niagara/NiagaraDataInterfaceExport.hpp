#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "NiagaraDataInterface.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraDataInterfaceExport : public NiagaraDataInterface {
    private: char pad_38[0x30]; public:
    void* get_CallbackHandlerParameter();
    void* get_GPUAllocationMode();
    int32_t& get_GPUAllocationFixedSize();
    float& get_GPUAllocationPerParticleSize();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x68
#pragma pack(pop)
}
