#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraScriptExecutionPaddingInfo.hpp"
void* _Script_Niagara::NiagaraScriptExecutionPaddingInfo::get_SrcSize() {
    return (void*)((uintptr_t)this + 0x4);
}
void* _Script_Niagara::NiagaraScriptExecutionPaddingInfo::get_DestOffset() {
    return (void*)((uintptr_t)this + 0x2);
}
void* _Script_Niagara::NiagaraScriptExecutionPaddingInfo::get_SrcOffset() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Niagara::NiagaraScriptExecutionPaddingInfo::get_DestSize() {
    return (void*)((uintptr_t)this + 0x6);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraScriptExecutionPaddingInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraScriptExecutionPaddingInfo");
    return result;
}
