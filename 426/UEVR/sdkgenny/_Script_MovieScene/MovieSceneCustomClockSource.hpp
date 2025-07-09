#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\FrameTime.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct QualifiedFrameTime;
}
namespace _Script_MovieScene {
#pragma pack(push, 1)
struct MovieSceneCustomClockSource : public _Script_CoreUObject::Interface {
    static _Script_CoreUObject::Class* static_class();
    void OnTick(float DeltaSeconds, float InPlayRate);
    void OnStopPlaying(_Script_CoreUObject::QualifiedFrameTime& InStopTime);
    void OnStartPlaying(_Script_CoreUObject::QualifiedFrameTime& InStartTime);
    _Script_CoreUObject::FrameTime OnRequestCurrentTime(_Script_CoreUObject::QualifiedFrameTime& InCurrentTime, float InPlayRate);
}; // Size: 0x28
#pragma pack(pop)
}
