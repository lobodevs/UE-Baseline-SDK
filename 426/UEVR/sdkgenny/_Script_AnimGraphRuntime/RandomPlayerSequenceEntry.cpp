#include "..\FUObjectArray.hpp"
#include "RandomPlayerSequenceEntry.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimSequence.hpp"
float& _Script_AnimGraphRuntime::RandomPlayerSequenceEntry::get_MinPlayRate() {
    return *(float*)((uintptr_t)this + 0x14);
}
int32_t& _Script_AnimGraphRuntime::RandomPlayerSequenceEntry::get_MaxLoopCount() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
_Script_Engine::AnimSequence*& _Script_AnimGraphRuntime::RandomPlayerSequenceEntry::get_Sequence() {
    return *(_Script_Engine::AnimSequence**)((uintptr_t)this + 0x0);
}
int32_t& _Script_AnimGraphRuntime::RandomPlayerSequenceEntry::get_MinLoopCount() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
float& _Script_AnimGraphRuntime::RandomPlayerSequenceEntry::get_ChanceToPlay() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_AnimGraphRuntime::RandomPlayerSequenceEntry::get_MaxPlayRate() {
    return *(float*)((uintptr_t)this + 0x18);
}
void* _Script_AnimGraphRuntime::RandomPlayerSequenceEntry::get_BlendIn() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::RandomPlayerSequenceEntry::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.RandomPlayerSequenceEntry");
    return result;
}
