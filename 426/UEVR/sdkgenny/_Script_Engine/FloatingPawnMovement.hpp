#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PawnMovementComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct FloatingPawnMovement : public PawnMovementComponent {
    private: char pad_138[0x18]; public:
    float& get_MaxSpeed();
    float& get_Acceleration();
    float& get_Deceleration();
    float& get_TurningBoost();
    bool get_bPositionCorrected();
    void set_bPositionCorrected(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x150
#pragma pack(pop)
}
