#include "..\FUObjectArray.hpp"
#include "AnimationSharingScalability.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_AnimationSharing::AnimationSharingScalability::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimationSharing.AnimationSharingScalability");
    return result;
}
void* _Script_AnimationSharing::AnimationSharingScalability::get_UseBlendTransitions() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_AnimationSharing::AnimationSharingScalability::get_BlendSignificanceValue() {
    return (void*)((uintptr_t)this + 0x4);
}
void* _Script_AnimationSharing::AnimationSharingScalability::get_MaximumNumberConcurrentBlends() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_AnimationSharing::AnimationSharingScalability::get_TickSignificanceValue() {
    return (void*)((uintptr_t)this + 0xc);
}
