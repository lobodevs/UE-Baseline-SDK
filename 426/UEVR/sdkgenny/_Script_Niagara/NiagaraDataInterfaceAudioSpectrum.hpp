#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "NiagaraDataInterfaceAudioSubmix.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraDataInterfaceAudioSpectrum : public NiagaraDataInterfaceAudioSubmix {
    private: char pad_40[0x10]; public:
    int32_t& get_Resolution();
    float& get_MinimumFrequency();
    float& get_MaximumFrequency();
    float& get_NoiseFloorDb();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
