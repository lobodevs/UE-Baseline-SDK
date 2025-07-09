#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MaterialInterface.hpp"
namespace _Script_PhysicsCore {
struct PhysicalMaterial;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct MaterialInstance : public MaterialInterface {
    private: char pad_88[0x2d8]; public:
    _Script_PhysicsCore::PhysicalMaterial*& get_PhysMaterial();
    _Script_PhysicsCore::PhysicalMaterial*& get_PhysicalMaterialMap();
    _Script_Engine::MaterialInterface*& get_Parent();
    bool get_bHasStaticPermutationResource();
    void set_bHasStaticPermutationResource(bool value);
    bool get_bOverrideSubsurfaceProfile();
    void set_bOverrideSubsurfaceProfile(bool value);
    void* get_ScalarParameterValues();
    void* get_VectorParameterValues();
    void* get_TextureParameterValues();
    void* get_RuntimeVirtualTextureParameterValues();
    void* get_FontParameterValues();
    void* get_BasePropertyOverrides();
    void* get_StaticParameters();
    void* get_CachedLayerParameters();
    void* get_CachedReferencedTextures();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x360
#pragma pack(pop)
}
