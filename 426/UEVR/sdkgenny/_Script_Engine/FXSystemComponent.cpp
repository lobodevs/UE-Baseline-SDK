#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "Actor.hpp"
#include "FXSystemAsset.hpp"
#include "FXSystemComponent.hpp"
#include "PrimitiveComponent.hpp"
#include "SceneComponent.hpp"
void _Script_Engine::FXSystemComponent::SetFloatParameter(void* ParameterName, float Param) {
    return;
}
_Script_CoreUObject::Class* _Script_Engine::FXSystemComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.FXSystemComponent");
    return result;
}
void _Script_Engine::FXSystemComponent::SetBoolParameter(void* ParameterName, bool Param) {
    return;
}
void _Script_Engine::FXSystemComponent::SetEmitterEnable(void* EmitterName, bool bNewEnableState) {
    return;
}
void _Script_Engine::FXSystemComponent::SetVectorParameter(void* ParameterName, _Script_CoreUObject::Vector Param) {
    return;
}
void _Script_Engine::FXSystemComponent::SetUseAutoManageAttachment(bool bAutoManage) {
    return;
}
void _Script_Engine::FXSystemComponent::SetIntParameter(void* ParameterName, int32_t Param) {
    return;
}
void _Script_Engine::FXSystemComponent::SetColorParameter(void* ParameterName, _Script_CoreUObject::LinearColor Param) {
    return;
}
void _Script_Engine::FXSystemComponent::SetAutoAttachmentParameters(_Script_Engine::SceneComponent* Parent, void* SocketName, void* LocationRule, void* RotationRule, void* ScaleRule) {
    return;
}
void _Script_Engine::FXSystemComponent::SetActorParameter(void* ParameterName, _Script_Engine::Actor* Param) {
    return;
}
void _Script_Engine::FXSystemComponent::ReleaseToPool() {
    return;
}
_Script_Engine::FXSystemAsset* _Script_Engine::FXSystemComponent::GetFXSystemAsset() {
    return;
}
