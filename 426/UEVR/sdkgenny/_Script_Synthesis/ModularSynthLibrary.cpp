#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "ModularSynthLibrary.hpp"
#include "ModularSynthPreset.hpp"
#include "ModularSynthPresetBank.hpp"
_Script_CoreUObject::Class* _Script_Synthesis::ModularSynthLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Synthesis.ModularSynthLibrary");
    return result;
}
void _Script_Synthesis::ModularSynthLibrary::AddModularSynthPresetToBankAsset(_Script_Synthesis::ModularSynthPresetBank* InBank, _Script_Synthesis::ModularSynthPreset& Preset, void* PresetName) {
    return;
}
