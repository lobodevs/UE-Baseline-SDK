#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ModularSynthPresetBankEntry.hpp"
_Script_CoreUObject::Class* _Script_Synthesis::ModularSynthPresetBankEntry::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Synthesis.ModularSynthPresetBankEntry");
    return result;
}
void* _Script_Synthesis::ModularSynthPresetBankEntry::get_PresetName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Synthesis::ModularSynthPresetBankEntry::get_Preset() {
    return (void*)((uintptr_t)this + 0x10);
}
