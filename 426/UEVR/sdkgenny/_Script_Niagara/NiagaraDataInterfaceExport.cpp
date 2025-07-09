#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraDataInterface.hpp"
#include "NiagaraDataInterfaceExport.hpp"
void* _Script_Niagara::NiagaraDataInterfaceExport::get_CallbackHandlerParameter() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Niagara::NiagaraDataInterfaceExport::get_GPUAllocationMode() {
    return (void*)((uintptr_t)this + 0x58);
}
int32_t& _Script_Niagara::NiagaraDataInterfaceExport::get_GPUAllocationFixedSize() {
    return *(int32_t*)((uintptr_t)this + 0x5c);
}
float& _Script_Niagara::NiagaraDataInterfaceExport::get_GPUAllocationPerParticleSize() {
    return *(float*)((uintptr_t)this + 0x60);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraDataInterfaceExport::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraDataInterfaceExport");
    return result;
}
