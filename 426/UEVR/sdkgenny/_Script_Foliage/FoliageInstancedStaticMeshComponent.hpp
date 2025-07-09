#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\HierarchicalInstancedStaticMeshComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Foliage {
#pragma pack(push, 1)
struct FoliageInstancedStaticMeshComponent : public _Script_Engine::HierarchicalInstancedStaticMeshComponent {
    private: char pad_670[0x30]; public:
    void* get_OnInstanceTakePointDamage();
    void* get_OnInstanceTakeRadialDamage();
    void* get_GenerationGuid();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x6a0
#pragma pack(pop)
}
