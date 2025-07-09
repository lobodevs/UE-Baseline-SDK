#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "ModularSynthPresetBank.hpp"
void* _Script_Synthesis::ModularSynthPresetBank::get_Presets() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_Synthesis::ModularSynthPresetBank::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Synthesis.ModularSynthPresetBank");
    return result;
}
