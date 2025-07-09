#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneCapture {
#pragma pack(push, 1)
struct MovieSceneCaptureSettings {
    private: char pad_0[0x70]; public:
    void* get_OutputDirectory();
    void* get_GameModeOverride();
    void* get_OutputFormat();
    bool get_bOverwriteExisting();
    void set_bOverwriteExisting(bool value);
    bool get_bUseRelativeFrameNumbers();
    void set_bUseRelativeFrameNumbers(bool value);
    int32_t& get_HandleFrames();
    void* get_MovieExtension();
    void* get_ZeroPadFrameNumbers();
    void* get_FrameRate();
    bool get_bUseCustomFrameRate();
    void set_bUseCustomFrameRate(bool value);
    void* get_CustomFrameRate();
    void* get_Resolution();
    bool get_bEnableTextureStreaming();
    void set_bEnableTextureStreaming(bool value);
    bool get_bCinematicEngineScalability();
    void set_bCinematicEngineScalability(bool value);
    bool get_bCinematicMode();
    void set_bCinematicMode(bool value);
    bool get_bAllowMovement();
    void set_bAllowMovement(bool value);
    bool get_bAllowTurning();
    void set_bAllowTurning(bool value);
    bool get_bShowPlayer();
    void set_bShowPlayer(bool value);
    bool get_bShowHUD();
    void set_bShowHUD(bool value);
    bool get_bUsePathTracer();
    void set_bUsePathTracer(bool value);
    int32_t& get_PathTracerSamplePerPixel();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}
