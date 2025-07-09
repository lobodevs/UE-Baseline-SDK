#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraCompileHashVisitorDebugInfo.hpp"
void* _Script_Niagara::NiagaraCompileHashVisitorDebugInfo::get_Object() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Niagara::NiagaraCompileHashVisitorDebugInfo::get_PropertyKeys() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Niagara::NiagaraCompileHashVisitorDebugInfo::get_PropertyValues() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraCompileHashVisitorDebugInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraCompileHashVisitorDebugInfo");
    return result;
}
