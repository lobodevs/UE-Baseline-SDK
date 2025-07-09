#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_ClothingSystemRuntimeInterface\ClothingSimulationInteractor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ChaosCloth {
#pragma pack(push, 1)
struct ChaosClothingSimulationInteractor : public _Script_ClothingSystemRuntimeInterface::ClothingSimulationInteractor {
    private: char pad_30[0x28]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
