#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_LevelSequence {
struct LevelSequence;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LevelSequence {
#pragma pack(push, 1)
struct LevelSequencePlayerSnapshot {
    private: char pad_0[0xb8]; public:
    void* get_MasterName();
    void* get_MasterTime();
    void* get_SourceTime();
    void* get_CurrentShotName();
    void* get_CurrentShotLocalTime();
    void* get_CurrentShotSourceTime();
    void* get_SourceTimecode();
    void* get_CameraComponent();
    void* get_Settings();
    _Script_LevelSequence::LevelSequence*& get_ActiveShot();
    void* get_ShotID();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb8
#pragma pack(pop)
}
