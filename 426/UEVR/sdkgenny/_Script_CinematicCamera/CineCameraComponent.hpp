#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\CameraComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CinematicCamera {
#pragma pack(push, 1)
struct CineCameraComponent : public _Script_Engine::CameraComponent {
    private: char pad_7c0[0x100]; public:
    void* get_FilmbackSettings();
    void* get_Filmback();
    void* get_LensSettings();
    void* get_FocusSettings();
    float& get_CurrentFocalLength();
    float& get_CurrentAperture();
    float& get_CurrentFocusDistance();
    void* get_FilmbackPresets();
    void* get_LensPresets();
    void* get_DefaultFilmbackPresetName();
    void* get_DefaultFilmbackPreset();
    void* get_DefaultLensPresetName();
    float& get_DefaultLensFocalLength();
    float& get_DefaultLensFStop();
    static _Script_CoreUObject::Class* static_class();
    void SetLensPresetByName(void* InPresetName);
    void SetFilmbackPresetByName(void* InPresetName);
    void SetCurrentFocalLength(float InFocalLength);
    float GetVerticalFieldOfView();
    void* GetLensPresetsCopy();
    void* GetLensPresetName();
    float GetHorizontalFieldOfView();
    void* GetFilmbackPresetsCopy();
    void* GetFilmbackPresetName();
    void* GetDefaultFilmbackPresetName();
}; // Size: 0x8c0
#pragma pack(pop)
}
