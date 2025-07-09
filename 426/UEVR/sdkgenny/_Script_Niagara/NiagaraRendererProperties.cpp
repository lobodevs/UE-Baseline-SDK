#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraRendererProperties.hpp"
#include "..\_Script_NiagaraCore\NiagaraMergeable.hpp"
void _Script_Niagara::NiagaraRendererProperties::set_bIsEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5c + 0);
    *(uint8_t*)((uintptr_t)this + 0x5c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Niagara::NiagaraRendererProperties::get_Platforms() {
    return (void*)((uintptr_t)this + 0x28);
}
int32_t& _Script_Niagara::NiagaraRendererProperties::get_SortOrderHint() {
    return *(int32_t*)((uintptr_t)this + 0x58);
}
bool _Script_Niagara::NiagaraRendererProperties::get_bIsEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x5c + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraRendererProperties::set_bMotionBlurEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5d + 0);
    *(uint8_t*)((uintptr_t)this + 0x5d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Niagara::NiagaraRendererProperties::get_bMotionBlurEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x5d + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraRendererProperties::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraRendererProperties");
    return result;
}
