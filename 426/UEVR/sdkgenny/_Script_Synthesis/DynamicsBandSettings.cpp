#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DynamicsBandSettings.hpp"
float& _Script_Synthesis::DynamicsBandSettings::get_ThresholdDb() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_Synthesis::DynamicsBandSettings::get_CrossoverTopFrequency() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_Synthesis::DynamicsBandSettings::get_AttackTimeMsec() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_Synthesis::DynamicsBandSettings::get_ReleaseTimeMsec() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_Synthesis::DynamicsBandSettings::get_InputGainDb() {
    return *(float*)((uintptr_t)this + 0x18);
}
float& _Script_Synthesis::DynamicsBandSettings::get_Ratio() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_Synthesis::DynamicsBandSettings::get_KneeBandwidthDb() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Script_Synthesis::DynamicsBandSettings::get_OutputGainDb() {
    return *(float*)((uintptr_t)this + 0x1c);
}
_Script_CoreUObject::Class* _Script_Synthesis::DynamicsBandSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Synthesis.DynamicsBandSettings");
    return result;
}
