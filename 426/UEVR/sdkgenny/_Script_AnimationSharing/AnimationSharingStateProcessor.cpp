#include "..\FUObjectArray.hpp"
#include "AnimationSharingStateProcessor.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Enum.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\Actor.hpp"
void* _Script_AnimationSharing::AnimationSharingStateProcessor::get_AnimationStateEnum() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_AnimationSharing::AnimationSharingStateProcessor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AnimationSharing.AnimationSharingStateProcessor");
    return result;
}
void _Script_AnimationSharing::AnimationSharingStateProcessor::ProcessActorState(int32_t& OutState, _Script_Engine::Actor* InActor, void* CurrentState, void* OnDemandState, bool& bShouldProcess) {
    return;
}
_Script_CoreUObject::Enum* _Script_AnimationSharing::AnimationSharingStateProcessor::GetAnimationStateEnum() {
    return;
}
