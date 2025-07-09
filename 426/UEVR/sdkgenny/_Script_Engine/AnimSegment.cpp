#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimSegment.hpp"
#include "AnimSequenceBase.hpp"
_Script_Engine::AnimSequenceBase*& _Script_Engine::AnimSegment::get_AnimReference() {
    return *(_Script_Engine::AnimSequenceBase**)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::AnimSegment::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AnimSegment");
    return result;
}
float& _Script_Engine::AnimSegment::get_AnimPlayRate() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Script_Engine::AnimSegment::get_AnimEndTime() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_Engine::AnimSegment::get_StartPos() {
    return *(float*)((uintptr_t)this + 0x8);
}
int32_t& _Script_Engine::AnimSegment::get_LoopingCount() {
    return *(int32_t*)((uintptr_t)this + 0x18);
}
float& _Script_Engine::AnimSegment::get_AnimStartTime() {
    return *(float*)((uintptr_t)this + 0xc);
}
