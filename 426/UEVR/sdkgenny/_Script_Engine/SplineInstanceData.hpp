#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SceneComponentInstanceData.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SplineInstanceData : public SceneComponentInstanceData {
    private: char pad_b8[0xe8]; public:
    bool get_bSplineHasBeenEdited();
    void set_bSplineHasBeenEdited(bool value);
    void* get_SplineCurves();
    void* get_SplineCurvesPreUCS();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1a0
#pragma pack(pop)
}
