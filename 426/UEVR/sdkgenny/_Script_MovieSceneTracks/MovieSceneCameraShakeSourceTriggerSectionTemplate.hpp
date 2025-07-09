#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieScene\MovieSceneEvalTemplate.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneTracks {
#pragma pack(push, 1)
struct MovieSceneCameraShakeSourceTriggerSectionTemplate : public _Script_MovieScene::MovieSceneEvalTemplate {
    private: char pad_20[0x20]; public:
    void* get_TriggerTimes();
    void* get_TriggerValues();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
