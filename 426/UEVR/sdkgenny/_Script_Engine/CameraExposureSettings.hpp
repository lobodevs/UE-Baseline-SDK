#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct CurveFloat;
}
namespace _Script_Engine {
struct Texture;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct CameraExposureSettings {
    private: char pad_0[0x40]; public:
    void* get_Method();
    float& get_LowPercent();
    float& get_HighPercent();
    float& get_MinBrightness();
    float& get_MaxBrightness();
    float& get_SpeedUp();
    float& get_SpeedDown();
    float& get_Bias();
    _Script_Engine::CurveFloat*& get_BiasCurve();
    _Script_Engine::Texture*& get_MeterMask();
    float& get_HistogramLogMin();
    float& get_HistogramLogMax();
    float& get_CalibrationConstant();
    bool get_ApplyPhysicalCameraExposure();
    void set_ApplyPhysicalCameraExposure(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
