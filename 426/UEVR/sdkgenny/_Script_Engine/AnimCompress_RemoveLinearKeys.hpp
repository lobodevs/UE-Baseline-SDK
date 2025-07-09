#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimCompress.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AnimCompress_RemoveLinearKeys : public AnimCompress {
    private: char pad_40[0x20]; public:
    float& get_MaxPosDiff();
    float& get_MaxAngleDiff();
    float& get_MaxScaleDiff();
    float& get_MaxEffectorDiff();
    float& get_MinEffectorDiff();
    float& get_EffectorDiffSocket();
    float& get_ParentKeyScale();
    bool get_bRetarget();
    void set_bRetarget(bool value);
    bool get_bActuallyFilterLinearKeys();
    void set_bActuallyFilterLinearKeys(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
