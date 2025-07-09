#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GrainTableEntry.hpp"
int32_t& _Script_MotoSynth::GrainTableEntry::get_SampleIndex() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
float& _Script_MotoSynth::GrainTableEntry::get_RPM() {
    return *(float*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_MotoSynth::GrainTableEntry::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MotoSynth.GrainTableEntry");
    return result;
}
