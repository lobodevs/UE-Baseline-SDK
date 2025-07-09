#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_PhysicsCore {
struct PhysicalMaterial;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RigidBodyContactInfo {
    private: char pad_0[0x30]; public:
    void* get_ContactPosition();
    void* get_ContactNormal();
    float& get_ContactPenetration();
    _Script_PhysicsCore::PhysicalMaterial*& get_PhysMaterial();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
