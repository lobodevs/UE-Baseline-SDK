#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LevelSequence {
#pragma pack(push, 1)
struct LevelSequenceCameraSettings {
    private: char pad_0[0x2]; public:
    bool get_bOverrideAspectRatioAxisConstraint();
    void set_bOverrideAspectRatioAxisConstraint(bool value);
    void* get_AspectRatioAxisConstraint();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2
#pragma pack(pop)
}
