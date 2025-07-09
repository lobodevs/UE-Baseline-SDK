#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SoundWaveSpectralDataEntry.hpp"
float& _Script_Engine::SoundWaveSpectralDataEntry::get_Magnitude() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::SoundWaveSpectralDataEntry::get_NormalizedMagnitude() {
    return *(float*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_Engine::SoundWaveSpectralDataEntry::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SoundWaveSpectralDataEntry");
    return result;
}
