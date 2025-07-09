#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PointLightComponent.hpp"
#include "SpotLightComponent.hpp"
float& _Script_Engine::SpotLightComponent::get_InnerConeAngle() {
    return *(float*)((uintptr_t)this + 0x358);
}
float& _Script_Engine::SpotLightComponent::get_OuterConeAngle() {
    return *(float*)((uintptr_t)this + 0x35c);
}
_Script_CoreUObject::Class* _Script_Engine::SpotLightComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SpotLightComponent");
    return result;
}
void _Script_Engine::SpotLightComponent::SetInnerConeAngle(float NewInnerConeAngle) {
    return;
}
void _Script_Engine::SpotLightComponent::SetOuterConeAngle(float NewOuterConeAngle) {
    return;
}
