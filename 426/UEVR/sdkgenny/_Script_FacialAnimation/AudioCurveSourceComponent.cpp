#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "AudioCurveSourceComponent.hpp"
void* _Script_FacialAnimation::AudioCurveSourceComponent::get_CurveSourceBindingName() {
    return (void*)((uintptr_t)this + 0x868);
}
float& _Script_FacialAnimation::AudioCurveSourceComponent::get_CurveSyncOffset() {
    return *(float*)((uintptr_t)this + 0x870);
}
_Script_CoreUObject::Class* _Script_FacialAnimation::AudioCurveSourceComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/FacialAnimation.AudioCurveSourceComponent");
    return result;
}
