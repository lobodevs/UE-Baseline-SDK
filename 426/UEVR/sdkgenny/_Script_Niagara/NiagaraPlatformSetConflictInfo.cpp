#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraPlatformSetConflictInfo.hpp"
int32_t& _Script_Niagara::NiagaraPlatformSetConflictInfo::get_SetBIndex() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
int32_t& _Script_Niagara::NiagaraPlatformSetConflictInfo::get_SetAIndex() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
void* _Script_Niagara::NiagaraPlatformSetConflictInfo::get_Conflicts() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraPlatformSetConflictInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraPlatformSetConflictInfo");
    return result;
}
