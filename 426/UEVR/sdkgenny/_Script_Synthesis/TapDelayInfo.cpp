#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "TapDelayInfo.hpp"
float& _Script_Synthesis::TapDelayInfo::get_DelayLength() {
    return *(float*)((uintptr_t)this + 0x4);
}
void* _Script_Synthesis::TapDelayInfo::get_TapLineMode() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_Synthesis::TapDelayInfo::get_Gain() {
    return *(float*)((uintptr_t)this + 0x8);
}
int32_t& _Script_Synthesis::TapDelayInfo::get_OutputChannel() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_Synthesis::TapDelayInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Synthesis.TapDelayInfo");
    return result;
}
float& _Script_Synthesis::TapDelayInfo::get_PanInDegrees() {
    return *(float*)((uintptr_t)this + 0x10);
}
int32_t& _Script_Synthesis::TapDelayInfo::get_TapId() {
    return *(int32_t*)((uintptr_t)this + 0x14);
}
