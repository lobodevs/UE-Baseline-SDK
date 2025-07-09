#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AnimationRecordingSettings {
    private: char pad_0[0x14]; public:
    bool get_bRecordInWorldSpace();
    void set_bRecordInWorldSpace(bool value);
    bool get_bRemoveRootAnimation();
    void set_bRemoveRootAnimation(bool value);
    bool get_bAutoSaveAsset();
    void set_bAutoSaveAsset(bool value);
    float& get_SampleRate();
    float& get_Length();
    void* get_InterpMode();
    void* get_TangentMode();
    bool get_bRecordTransforms();
    void set_bRecordTransforms(bool value);
    bool get_bRecordCurves();
    void set_bRecordCurves(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x14
#pragma pack(pop)
}
