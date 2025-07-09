#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraDeviceProfileStateEntry.hpp"
void* _Script_Niagara::NiagaraDeviceProfileStateEntry::get_ProfileName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Niagara::NiagaraDeviceProfileStateEntry::get_QualityLevelMask() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Niagara::NiagaraDeviceProfileStateEntry::get_SetQualityLevelMask() {
    return (void*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraDeviceProfileStateEntry::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraDeviceProfileStateEntry");
    return result;
}
