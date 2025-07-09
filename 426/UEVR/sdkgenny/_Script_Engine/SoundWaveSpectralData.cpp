#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SoundWaveSpectralData.hpp"
float& _Script_Engine::SoundWaveSpectralData::get_FrequencyHz() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::SoundWaveSpectralData::get_Magnitude() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_Engine::SoundWaveSpectralData::get_NormalizedMagnitude() {
    return *(float*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::SoundWaveSpectralData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SoundWaveSpectralData");
    return result;
}
