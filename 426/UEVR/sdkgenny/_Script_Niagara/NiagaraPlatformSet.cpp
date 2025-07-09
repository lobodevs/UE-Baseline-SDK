#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraPlatformSet.hpp"
int32_t& _Script_Niagara::NiagaraPlatformSet::get_QualityLevelMask() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
void* _Script_Niagara::NiagaraPlatformSet::get_DeviceProfileStates() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Niagara::NiagaraPlatformSet::get_CVarConditions() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraPlatformSet::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraPlatformSet");
    return result;
}
