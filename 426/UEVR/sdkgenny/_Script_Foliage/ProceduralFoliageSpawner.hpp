#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Foliage {
#pragma pack(push, 1)
struct ProceduralFoliageSpawner : public _Script_CoreUObject::Object {
    private: char pad_28[0x40]; public:
    int32_t& get_RandomSeed();
    float& get_TileSize();
    int32_t& get_NumUniqueTiles();
    float& get_MinimumQuadTreeSize();
    void* get_FoliageTypes();
    static _Script_CoreUObject::Class* static_class();
    void Simulate(int32_t NumSteps);
}; // Size: 0x68
#pragma pack(pop)
}
