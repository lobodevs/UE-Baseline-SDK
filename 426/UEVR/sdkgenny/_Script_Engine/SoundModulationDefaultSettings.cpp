#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SoundModulationDefaultSettings.hpp"
_Script_CoreUObject::Class* _Script_Engine::SoundModulationDefaultSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SoundModulationDefaultSettings");
    return result;
}
void* _Script_Engine::SoundModulationDefaultSettings::get_VolumeModulationDestination() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::SoundModulationDefaultSettings::get_LowpassModulationDestination() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::SoundModulationDefaultSettings::get_HighpassModulationDestination() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Engine::SoundModulationDefaultSettings::get_PitchModulationDestination() {
    return (void*)((uintptr_t)this + 0x10);
}
