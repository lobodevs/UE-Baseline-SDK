#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "NiagaraComponentSettings.hpp"
void* _Script_Niagara::NiagaraComponentSettings::get_SuppressActivationList() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Niagara::NiagaraComponentSettings::get_ForceAutoPooolingList() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_Niagara::NiagaraComponentSettings::get_SuppressEmitterList() {
    return (void*)((uintptr_t)this + 0xc8);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraComponentSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraComponentSettings");
    return result;
}
