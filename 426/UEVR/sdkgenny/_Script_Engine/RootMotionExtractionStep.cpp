#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimSequence.hpp"
#include "RootMotionExtractionStep.hpp"
_Script_Engine::AnimSequence*& _Script_Engine::RootMotionExtractionStep::get_AnimSequence() {
    return *(_Script_Engine::AnimSequence**)((uintptr_t)this + 0x0);
}
float& _Script_Engine::RootMotionExtractionStep::get_EndPosition() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_Engine::RootMotionExtractionStep::get_StartPosition() {
    return *(float*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::RootMotionExtractionStep::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RootMotionExtractionStep");
    return result;
}
