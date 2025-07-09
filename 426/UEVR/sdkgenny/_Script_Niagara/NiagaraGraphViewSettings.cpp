#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraGraphViewSettings.hpp"
bool _Script_Niagara::NiagaraGraphViewSettings::get_bIsValid() {
    return (*(uint8_t*)((uintptr_t)this + 0xc + 0)) & 1 != 0;
}
void* _Script_Niagara::NiagaraGraphViewSettings::get_Location() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_Niagara::NiagaraGraphViewSettings::get_Zoom() {
    return *(float*)((uintptr_t)this + 0x8);
}
void _Script_Niagara::NiagaraGraphViewSettings::set_bIsValid(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc + 0);
    *(uint8_t*)((uintptr_t)this + 0xc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraGraphViewSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraGraphViewSettings");
    return result;
}
