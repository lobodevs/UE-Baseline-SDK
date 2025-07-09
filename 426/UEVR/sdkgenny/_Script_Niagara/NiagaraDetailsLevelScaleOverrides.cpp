#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraDetailsLevelScaleOverrides.hpp"
float& _Script_Niagara::NiagaraDetailsLevelScaleOverrides::get_Medium() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_Niagara::NiagaraDetailsLevelScaleOverrides::get_Low() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_Niagara::NiagaraDetailsLevelScaleOverrides::get_Cine() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_Niagara::NiagaraDetailsLevelScaleOverrides::get_High() {
    return *(float*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraDetailsLevelScaleOverrides::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraDetailsLevelScaleOverrides");
    return result;
}
float& _Script_Niagara::NiagaraDetailsLevelScaleOverrides::get_Epic() {
    return *(float*)((uintptr_t)this + 0xc);
}
