#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "MotoSynthPreset.hpp"
void* _Script_MotoSynth::MotoSynthPreset::get_Settings() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_MotoSynth::MotoSynthPreset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MotoSynth.MotoSynthPreset");
    return result;
}
