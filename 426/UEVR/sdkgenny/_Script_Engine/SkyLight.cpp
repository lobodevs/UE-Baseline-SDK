#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Info.hpp"
#include "SkyLight.hpp"
#include "SkyLightComponent.hpp"
_Script_CoreUObject::Class* _Script_Engine::SkyLight::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SkyLight");
    return result;
}
_Script_Engine::SkyLightComponent*& _Script_Engine::SkyLight::get_LightComponent() {
    return *(_Script_Engine::SkyLightComponent**)((uintptr_t)this + 0x220);
}
bool _Script_Engine::SkyLight::get_bEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x228 + 0)) & 1 != 0;
}
void _Script_Engine::SkyLight::set_bEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x228 + 0);
    *(uint8_t*)((uintptr_t)this + 0x228 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::SkyLight::OnRep_bEnabled() {
    return;
}
