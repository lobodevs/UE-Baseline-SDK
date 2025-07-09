#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Synthesis {
struct ModularSynthPresetBank;
}
namespace _Script_Synthesis {
struct ModularSynthPreset;
}
namespace _Script_Synthesis {
#pragma pack(push, 1)
struct ModularSynthLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void AddModularSynthPresetToBankAsset(_Script_Synthesis::ModularSynthPresetBank* InBank, _Script_Synthesis::ModularSynthPreset& Preset, void* PresetName);
}; // Size: 0x28
#pragma pack(pop)
}
