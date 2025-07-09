#include "..\FUObjectArray.hpp"
#include "AnimSharingInstance.hpp"
#include "AnimSharingStateInstance.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimInstance.hpp"
#include "..\_Script_Engine\AnimSequence.hpp"
void _Script_AnimationSharing::AnimSharingStateInstance::set_bStateBool(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_AnimationSharing::AnimSharingStateInstance::get_PermutationTimeOffset() {
    return *(float*)((uintptr_t)this + 0x2c0);
}
_Script_Engine::AnimSequence*& _Script_AnimationSharing::AnimSharingStateInstance::get_AnimationToPlay() {
    return *(_Script_Engine::AnimSequence**)((uintptr_t)this + 0x2b8);
}
float& _Script_AnimationSharing::AnimSharingStateInstance::get_PlayRate() {
    return *(float*)((uintptr_t)this + 0x2c4);
}
void _Script_AnimationSharing::AnimSharingStateInstance::GetInstancedActors(void*& Actors) {
    return;
}
bool _Script_AnimationSharing::AnimSharingStateInstance::get_bStateBool() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c8 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_AnimationSharing::AnimSharingStateInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AnimationSharing.AnimSharingStateInstance");
    return result;
}
_Script_AnimationSharing::AnimSharingInstance*& _Script_AnimationSharing::AnimSharingStateInstance::get_Instance() {
    return *(_Script_AnimationSharing::AnimSharingInstance**)((uintptr_t)this + 0x2d0);
}
