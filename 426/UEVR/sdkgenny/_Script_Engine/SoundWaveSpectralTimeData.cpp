#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SoundWaveSpectralTimeData.hpp"
float& _Script_Engine::SoundWaveSpectralTimeData::get_TimeSec() {
    return *(float*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::SoundWaveSpectralTimeData::get_Data() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::SoundWaveSpectralTimeData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SoundWaveSpectralTimeData");
    return result;
}
