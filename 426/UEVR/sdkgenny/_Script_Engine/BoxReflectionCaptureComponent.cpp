#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BoxComponent.hpp"
#include "BoxReflectionCaptureComponent.hpp"
#include "ReflectionCaptureComponent.hpp"
float& _Script_Engine::BoxReflectionCaptureComponent::get_BoxTransitionDistance() {
    return *(float*)((uintptr_t)this + 0x270);
}
_Script_Engine::BoxComponent*& _Script_Engine::BoxReflectionCaptureComponent::get_PreviewInfluenceBox() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x278);
}
_Script_Engine::BoxComponent*& _Script_Engine::BoxReflectionCaptureComponent::get_PreviewCaptureBox() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x280);
}
_Script_CoreUObject::Class* _Script_Engine::BoxReflectionCaptureComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.BoxReflectionCaptureComponent");
    return result;
}
