#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "NiagaraComponentRendererProperties.hpp"
#include "NiagaraRendererProperties.hpp"
void* _Script_Niagara::NiagaraComponentRendererProperties::get_ComponentCountLimit() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_Niagara::NiagaraComponentRendererProperties::get_ComponentType() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_Niagara::NiagaraComponentRendererProperties::get_EnabledBinding() {
    return (void*)((uintptr_t)this + 0x90);
}
void _Script_Niagara::NiagaraComponentRendererProperties::set_bAssignComponentsOnParticleID(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Niagara::NiagaraComponentRendererProperties::get_bAssignComponentsOnParticleID() {
    return (*(uint8_t*)((uintptr_t)this + 0xe8 + 0)) & 1 != 0;
}
bool _Script_Niagara::NiagaraComponentRendererProperties::get_bOnlyCreateComponentsOnParticleSpawn() {
    return (*(uint8_t*)((uintptr_t)this + 0xe9 + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraComponentRendererProperties::set_bOnlyCreateComponentsOnParticleSpawn(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe9 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::SceneComponent*& _Script_Niagara::NiagaraComponentRendererProperties::get_TemplateComponent() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0xf0);
}
void* _Script_Niagara::NiagaraComponentRendererProperties::get_PropertyBindings() {
    return (void*)((uintptr_t)this + 0xf8);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraComponentRendererProperties::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraComponentRendererProperties");
    return result;
}
