#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SourceEffectBitCrusherBaseSettings.hpp"
float& _Script_Synthesis::SourceEffectBitCrusherBaseSettings::get_SampleRate() {
    return *(float*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Synthesis::SourceEffectBitCrusherBaseSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Synthesis.SourceEffectBitCrusherBaseSettings");
    return result;
}
float& _Script_Synthesis::SourceEffectBitCrusherBaseSettings::get_BitDepth() {
    return *(float*)((uintptr_t)this + 0x4);
}
