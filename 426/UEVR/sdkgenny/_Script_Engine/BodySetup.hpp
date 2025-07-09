#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_PhysicsCore\BodySetupCore.hpp"
namespace _Script_PhysicsCore {
struct PhysicalMaterial;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct BodySetup : public _Script_PhysicsCore::BodySetupCore {
    private: char pad_48[0x258]; public:
    void* get_AggGeom();
    bool get_bAlwaysFullAnimWeight();
    void set_bAlwaysFullAnimWeight(bool value);
    bool get_bConsiderForBounds();
    void set_bConsiderForBounds(bool value);
    bool get_bMeshCollideAll();
    void set_bMeshCollideAll(bool value);
    bool get_bDoubleSidedGeometry();
    void set_bDoubleSidedGeometry(bool value);
    bool get_bGenerateNonMirroredCollision();
    void set_bGenerateNonMirroredCollision(bool value);
    bool get_bSharedCookedData();
    void set_bSharedCookedData(bool value);
    bool get_bGenerateMirroredCollision();
    void set_bGenerateMirroredCollision(bool value);
    bool get_bSupportUVsAndFaceRemap();
    void set_bSupportUVsAndFaceRemap(bool value);
    _Script_PhysicsCore::PhysicalMaterial*& get_PhysMaterial();
    void* get_WalkableSlopeOverride();
    void* get_DefaultInstance();
    void* get_BuildScale3D();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2a0
#pragma pack(pop)
}
