#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\StereoLayerShapeQuad.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SteamVR {
#pragma pack(push, 1)
struct SteamVRHQStereoLayerShape : public _Script_Engine::StereoLayerShapeQuad {
    private: char pad_28[0x10]; public:
    bool get_bCurved();
    void set_bCurved(bool value);
    bool get_bAntiAlias();
    void set_bAntiAlias(bool value);
    float& get_AutoCurveMinDistance();
    float& get_AutoCurveMaxDistance();
    static _Script_CoreUObject::Class* static_class();
    void SetCurved(bool InCurved);
    void SetAutoCurveMinDistance(float InDistance);
    void SetAutoCurveMaxDistance(float InDistance);
    void SetAntiAlias(bool InAntiAlias);
}; // Size: 0x38
#pragma pack(pop)
}
