#include "..\FUObjectArray.hpp"
#include "..\_Script_AudioExtensions\SoundModulatorBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SoundModulationDestinationSettings.hpp"
float& _Script_Engine::SoundModulationDestinationSettings::get_Value() {
    return *(float*)((uintptr_t)this + 0x0);
}
_Script_AudioExtensions::SoundModulatorBase*& _Script_Engine::SoundModulationDestinationSettings::get_Modulator() {
    return *(_Script_AudioExtensions::SoundModulatorBase**)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::SoundModulationDestinationSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SoundModulationDestinationSettings");
    return result;
}
