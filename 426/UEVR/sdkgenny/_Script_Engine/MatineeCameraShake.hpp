#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "CameraShakeBase.hpp"
namespace _Script_Engine {
struct CameraAnim;
}
namespace _Script_Engine {
struct CameraAnimInst;
}
namespace _Script_Engine {
struct MinimalViewInfo;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct MatineeCameraShake : public CameraShakeBase {
    private: char pad_a0[0xe0]; public:
    float& get_OscillationDuration();
    float& get_OscillationBlendInTime();
    float& get_OscillationBlendOutTime();
    void* get_RotOscillation();
    void* get_LocOscillation();
    void* get_FOVOscillation();
    float& get_AnimPlayRate();
    float& get_AnimScale();
    float& get_AnimBlendInTime();
    float& get_AnimBlendOutTime();
    float& get_RandomAnimSegmentDuration();
    _Script_Engine::CameraAnim*& get_Anim();
    bool get_bRandomAnimSegment();
    void set_bRandomAnimSegment(bool value);
    float& get_OscillatorTimeRemaining();
    _Script_Engine::CameraAnimInst*& get_AnimInst();
    static _Script_CoreUObject::Class* static_class();
    void ReceiveStopShake(bool bImmediately);
    void ReceivePlayShake(float Scale);
    bool ReceiveIsFinished();
    void BlueprintUpdateCameraShake(float DeltaTime, float Alpha, _Script_Engine::MinimalViewInfo& POV, _Script_Engine::MinimalViewInfo& ModifiedPOV);
}; // Size: 0x180
#pragma pack(pop)
}
