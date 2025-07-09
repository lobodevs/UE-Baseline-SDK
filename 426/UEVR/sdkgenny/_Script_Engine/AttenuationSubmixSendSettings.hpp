#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct SoundSubmixBase;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AttenuationSubmixSendSettings {
    private: char pad_0[0xa8]; public:
    _Script_Engine::SoundSubmixBase*& get_Submix();
    void* get_SubmixSendMethod();
    float& get_SubmixSendLevelMin();
    float& get_SubmixSendLevelMax();
    float& get_SubmixSendDistanceMin();
    float& get_SubmixSendDistanceMax();
    float& get_ManualSubmixSendLevel();
    void* get_CustomSubmixSendCurve();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa8
#pragma pack(pop)
}
