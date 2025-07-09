#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SceneComponentInstanceData.hpp"
namespace _Script_Engine {
struct StaticMesh;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct InstancedStaticMeshComponentInstanceData : public SceneComponentInstanceData {
    private: char pad_b8[0x98]; public:
    _Script_Engine::StaticMesh*& get_StaticMesh();
    void* get_CachedStaticLighting();
    void* get_PerInstanceSMData();
    void* get_PerInstanceSMCustomData();
    int32_t& get_InstancingRandomSeed();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x150
#pragma pack(pop)
}
