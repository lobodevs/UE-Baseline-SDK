#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraDataInterfaceRWBase.hpp"
#include "NiagaraDataInterfaceRenderTargetVolume.hpp"
void* _Script_Niagara::NiagaraDataInterfaceRenderTargetVolume::get_Size() {
    return (void*)((uintptr_t)this + 0xd8);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraDataInterfaceRenderTargetVolume::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraDataInterfaceRenderTargetVolume");
    return result;
}
void* _Script_Niagara::NiagaraDataInterfaceRenderTargetVolume::get_OverrideRenderTargetFormat() {
    return (void*)((uintptr_t)this + 0xe4);
}
bool _Script_Niagara::NiagaraDataInterfaceRenderTargetVolume::get_bOverrideFormat() {
    return (*(uint8_t*)((uintptr_t)this + 0xe5 + 0)) & 1 != 0;
}
void* _Script_Niagara::NiagaraDataInterfaceRenderTargetVolume::get_RenderTargetUserParameter() {
    return (void*)((uintptr_t)this + 0xe8);
}
void _Script_Niagara::NiagaraDataInterfaceRenderTargetVolume::set_bOverrideFormat(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe5 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe5 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Niagara::NiagaraDataInterfaceRenderTargetVolume::get_ManagedRenderTargets() {
    return (void*)((uintptr_t)this + 0x108);
}
