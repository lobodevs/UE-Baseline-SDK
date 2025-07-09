#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "QuartzPulseOverrideStep.hpp"
int32_t& _Script_Engine::QuartzPulseOverrideStep::get_NumberOfPulses() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::QuartzPulseOverrideStep::get_PulseDuration() {
    return (void*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_Engine::QuartzPulseOverrideStep::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.QuartzPulseOverrideStep");
    return result;
}
