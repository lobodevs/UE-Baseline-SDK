#include "..\FUObjectArray.hpp"
#include "AnimSharingInstance.hpp"
#include "AnimationSharingStateProcessor.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Enum.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\Actor.hpp"
void* _Script_AnimationSharing::AnimSharingInstance::get_RegisteredActors() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_AnimationSharing::AnimationSharingStateProcessor*& _Script_AnimationSharing::AnimSharingInstance::get_StateProcessor() {
    return *(_Script_AnimationSharing::AnimationSharingStateProcessor**)((uintptr_t)this + 0x88);
}
void* _Script_AnimationSharing::AnimSharingInstance::get_UsedAnimationSequences() {
    return (void*)((uintptr_t)this + 0xc8);
}
_Script_CoreUObject::Enum*& _Script_AnimationSharing::AnimSharingInstance::get_StateEnum() {
    return *(_Script_CoreUObject::Enum**)((uintptr_t)this + 0xe8);
}
_Script_Engine::Actor*& _Script_AnimationSharing::AnimSharingInstance::get_SharingActor() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0xf0);
}
_Script_CoreUObject::Class* _Script_AnimationSharing::AnimSharingInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AnimationSharing.AnimSharingInstance");
    return result;
}
