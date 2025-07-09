#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\CameraActor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CinematicCamera {
struct CineCameraComponent;
}
namespace _Script_CinematicCamera {
#pragma pack(push, 1)
struct CineCameraActor : public _Script_Engine::CameraActor {
    private: char pad_7a0[0x60]; public:
    void* get_LookatTrackingSettings();
    static _Script_CoreUObject::Class* static_class();
    _Script_CinematicCamera::CineCameraComponent* GetCineCameraComponent();
}; // Size: 0x800
#pragma pack(pop)
}
