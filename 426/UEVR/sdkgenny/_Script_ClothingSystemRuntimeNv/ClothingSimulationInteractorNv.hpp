#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_ClothingSystemRuntimeInterface\ClothingSimulationInteractor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ClothingSystemRuntimeNv {
#pragma pack(push, 1)
struct ClothingSimulationInteractorNv : public _Script_ClothingSystemRuntimeInterface::ClothingSimulationInteractor {
    private: char pad_30[0x10]; public:
    static _Script_CoreUObject::Class* static_class();
    void SetAnimDriveDamperStiffness(float InStiffness);
}; // Size: 0x40
#pragma pack(pop)
}
