#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "NiagaraDataInterface.hpp"
namespace _Script_Engine {
struct SoundSubmix;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraDataInterfaceAudioOscilloscope : public NiagaraDataInterface {
    private: char pad_38[0x10]; public:
    _Script_Engine::SoundSubmix*& get_Submix();
    int32_t& get_Resolution();
    float& get_ScopeInMilliseconds();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
