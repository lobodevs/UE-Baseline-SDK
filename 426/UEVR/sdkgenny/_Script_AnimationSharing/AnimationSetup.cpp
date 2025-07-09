#include "..\FUObjectArray.hpp"
#include "AnimationSetup.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimSequence.hpp"
_Script_CoreUObject::Class* _Script_AnimationSharing::AnimationSetup::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimationSharing.AnimationSetup");
    return result;
}
_Script_Engine::AnimSequence*& _Script_AnimationSharing::AnimationSetup::get_AnimSequence() {
    return *(_Script_Engine::AnimSequence**)((uintptr_t)this + 0x0);
}
void* _Script_AnimationSharing::AnimationSetup::get_AnimBlueprint() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_AnimationSharing::AnimationSetup::get_NumRandomizedInstances() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_AnimationSharing::AnimationSetup::get_Enabled() {
    return (void*)((uintptr_t)this + 0x14);
}
