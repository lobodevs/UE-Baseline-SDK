#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraEventGeneratorProperties.hpp"
_Script_CoreUObject::Class* _Script_Niagara::NiagaraEventGeneratorProperties::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraEventGeneratorProperties");
    return result;
}
int32_t& _Script_Niagara::NiagaraEventGeneratorProperties::get_MaxEventsPerFrame() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
void* _Script_Niagara::NiagaraEventGeneratorProperties::get_ID() {
    return (void*)((uintptr_t)this + 0x4);
}
void* _Script_Niagara::NiagaraEventGeneratorProperties::get_DataSetCompiledData() {
    return (void*)((uintptr_t)this + 0x10);
}
