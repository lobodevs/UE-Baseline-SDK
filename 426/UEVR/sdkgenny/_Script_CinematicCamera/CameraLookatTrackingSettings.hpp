#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CinematicCamera {
#pragma pack(push, 1)
struct CameraLookatTrackingSettings {
    private: char pad_0[0x50]; public:
    bool get_bEnableLookAtTracking();
    void set_bEnableLookAtTracking(bool value);
    bool get_bDrawDebugLookAtTrackingPosition();
    void set_bDrawDebugLookAtTrackingPosition(bool value);
    float& get_LookAtTrackingInterpSpeed();
    void* get_ActorToTrack();
    void* get_RelativeOffset();
    bool get_bAllowRoll();
    void set_bAllowRoll(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
