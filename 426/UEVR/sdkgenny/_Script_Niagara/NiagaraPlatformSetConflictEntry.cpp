#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraPlatformSetConflictEntry.hpp"
void* _Script_Niagara::NiagaraPlatformSetConflictEntry::get_ProfileName() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraPlatformSetConflictEntry::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraPlatformSetConflictEntry");
    return result;
}
int32_t& _Script_Niagara::NiagaraPlatformSetConflictEntry::get_QualityLevelMask() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
