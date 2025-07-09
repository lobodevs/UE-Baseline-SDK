#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraVariableLayoutInfo.hpp"
void* _Script_Niagara::NiagaraVariableLayoutInfo::get_FloatComponentStart() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Niagara::NiagaraVariableLayoutInfo::get_Int32ComponentStart() {
    return (void*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraVariableLayoutInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraVariableLayoutInfo");
    return result;
}
void* _Script_Niagara::NiagaraVariableLayoutInfo::get_HalfComponentStart() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Niagara::NiagaraVariableLayoutInfo::get_LayoutInfo() {
    return (void*)((uintptr_t)this + 0x10);
}
