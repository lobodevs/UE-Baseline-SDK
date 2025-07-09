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
struct MovieSceneEventSectionTemplate : public _Script_MovieScene::MovieSceneEvalTemplate {
    private: char pad_20[0x90]; public:
    void* get_EventData();
    bool get_bFireEventsWhenForwards();
    void set_bFireEventsWhenForwards(bool value);
    bool get_bFireEventsWhenBackwards();
    void set_bFireEventsWhenBackwards(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb0
#pragma pack(pop)
}
