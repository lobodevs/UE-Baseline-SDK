#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SoundWaveEnvelopeTimeData.hpp"
float& _Script_Engine::SoundWaveEnvelopeTimeData::get_Amplitude() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::SoundWaveEnvelopeTimeData::get_TimeSec() {
    return *(float*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_Engine::SoundWaveEnvelopeTimeData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SoundWaveEnvelopeTimeData");
    return result;
}
