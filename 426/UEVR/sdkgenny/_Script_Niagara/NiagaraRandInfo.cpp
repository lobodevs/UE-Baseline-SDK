#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraRandInfo.hpp"
int32_t& _Script_Niagara::NiagaraRandInfo::get_Seed1() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
int32_t& _Script_Niagara::NiagaraRandInfo::get_Seed2() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraRandInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraRandInfo");
    return result;
}
int32_t& _Script_Niagara::NiagaraRandInfo::get_Seed3() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
