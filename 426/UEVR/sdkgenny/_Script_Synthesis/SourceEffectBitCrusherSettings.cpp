#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SourceEffectBitCrusherSettings.hpp"
float& _Script_Synthesis::SourceEffectBitCrusherSettings::get_CrushedSampleRate() {
    return *(float*)((uintptr_t)this + 0x0);
}
void* _Script_Synthesis::SourceEffectBitCrusherSettings::get_BitModulation() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Synthesis::SourceEffectBitCrusherSettings::get_SampleRateModulation() {
    return (void*)((uintptr_t)this + 0x8);
}
float& _Script_Synthesis::SourceEffectBitCrusherSettings::get_CrushedBits() {
    return *(float*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_Synthesis::SourceEffectBitCrusherSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Synthesis.SourceEffectBitCrusherSettings");
    return result;
}
