#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraBoundParameter.hpp"
void* _Script_Niagara::NiagaraBoundParameter::get_Parameter() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_Niagara::NiagaraBoundParameter::get_DestOffset() {
    return *(int32_t*)((uintptr_t)this + 0x24);
}
int32_t& _Script_Niagara::NiagaraBoundParameter::get_SrcOffset() {
    return *(int32_t*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraBoundParameter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraBoundParameter");
    return result;
}
