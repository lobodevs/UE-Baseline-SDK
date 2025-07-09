#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "QuartzTimeSignature.hpp"
int32_t& _Script_Engine::QuartzTimeSignature::get_NumBeats() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::QuartzTimeSignature::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.QuartzTimeSignature");
    return result;
}
void* _Script_Engine::QuartzTimeSignature::get_BeatType() {
    return (void*)((uintptr_t)this + 0x4);
}
void* _Script_Engine::QuartzTimeSignature::get_OptionalPulseOverride() {
    return (void*)((uintptr_t)this + 0x8);
}
