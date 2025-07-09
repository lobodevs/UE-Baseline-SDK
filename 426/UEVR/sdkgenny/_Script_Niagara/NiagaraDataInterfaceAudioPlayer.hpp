#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "NiagaraDataInterface.hpp"
namespace _Script_Engine {
struct SoundBase;
}
namespace _Script_Engine {
struct SoundAttenuation;
}
namespace _Script_Engine {
struct SoundConcurrency;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraDataInterfaceAudioPlayer : public NiagaraDataInterface {
    private: char pad_38[0x38]; public:
    _Script_Engine::SoundBase*& get_SoundToPlay();
    _Script_Engine::SoundAttenuation*& get_Attenuation();
    _Script_Engine::SoundConcurrency*& get_Concurrency();
    void* get_ParameterNames();
    bool get_bLimitPlaysPerTick();
    void set_bLimitPlaysPerTick(bool value);
    int32_t& get_MaxPlaysPerTick();
    bool get_bStopWhenComponentIsDestroyed();
    void set_bStopWhenComponentIsDestroyed(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}
