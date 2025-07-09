#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SoundModulationDefaultRoutingSettings.hpp"
#include "SoundModulationDefaultSettings.hpp"
void* _Script_Engine::SoundModulationDefaultRoutingSettings::get_VolumeRouting() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::SoundModulationDefaultRoutingSettings::get_PitchRouting() {
    return (void*)((uintptr_t)this + 0x41);
}
void* _Script_Engine::SoundModulationDefaultRoutingSettings::get_HighpassRouting() {
    return (void*)((uintptr_t)this + 0x42);
}
void* _Script_Engine::SoundModulationDefaultRoutingSettings::get_LowpassRouting() {
    return (void*)((uintptr_t)this + 0x43);
}
_Script_CoreUObject::Class* _Script_Engine::SoundModulationDefaultRoutingSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SoundModulationDefaultRoutingSettings");
    return result;
}
