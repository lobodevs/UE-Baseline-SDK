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
struct SoundSubmixSendInfo {
    private: char pad_0[0xb0]; public:
    void* get_SendLevelControlMethod();
    void* get_SendStage();
    _Script_Engine::SoundSubmixBase*& get_SoundSubmix();
    float& get_SendLevel();
    float& get_MinSendLevel();
    float& get_MaxSendLevel();
    float& get_MinSendDistance();
    float& get_MaxSendDistance();
    void* get_CustomSendLevelCurve();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb0
#pragma pack(pop)
}
