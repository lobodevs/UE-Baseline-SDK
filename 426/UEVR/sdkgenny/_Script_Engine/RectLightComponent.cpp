#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LocalLightComponent.hpp"
#include "RectLightComponent.hpp"
#include "Texture.hpp"
float& _Script_Engine::RectLightComponent::get_SourceWidth() {
    return *(float*)((uintptr_t)this + 0x340);
}
void _Script_Engine::RectLightComponent::SetSourceTexture(_Script_Engine::Texture* bNewValue) {
    return;
}
_Script_CoreUObject::Class* _Script_Engine::RectLightComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.RectLightComponent");
    return result;
}
float& _Script_Engine::RectLightComponent::get_SourceHeight() {
    return *(float*)((uintptr_t)this + 0x344);
}
float& _Script_Engine::RectLightComponent::get_BarnDoorAngle() {
    return *(float*)((uintptr_t)this + 0x348);
}
float& _Script_Engine::RectLightComponent::get_BarnDoorLength() {
    return *(float*)((uintptr_t)this + 0x34c);
}
_Script_Engine::Texture*& _Script_Engine::RectLightComponent::get_SourceTexture() {
    return *(_Script_Engine::Texture**)((uintptr_t)this + 0x350);
}
void _Script_Engine::RectLightComponent::SetSourceWidth(float bNewValue) {
    return;
}
void _Script_Engine::RectLightComponent::SetSourceHeight(float NewValue) {
    return;
}
void _Script_Engine::RectLightComponent::SetBarnDoorLength(float NewValue) {
    return;
}
void _Script_Engine::RectLightComponent::SetBarnDoorAngle(float NewValue) {
    return;
}
