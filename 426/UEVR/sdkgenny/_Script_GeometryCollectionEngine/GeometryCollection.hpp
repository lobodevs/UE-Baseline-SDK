#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_GeometryCollectionEngine {
#pragma pack(push, 1)
struct GeometryCollection : public _Script_CoreUObject::Object {
    private: char pad_28[0xb8]; public:
    void* get_GeometrySource();
    void* get_Materials();
    void* get_CollisionType();
    void* get_ImplicitType();
    int32_t& get_MinLevelSetResolution();
    int32_t& get_MaxLevelSetResolution();
    int32_t& get_MinClusterLevelSetResolution();
    int32_t& get_MaxClusterLevelSetResolution();
    float& get_CollisionObjectReductionPercentage();
    bool get_bMassAsDensity();
    void set_bMassAsDensity(bool value);
    float& get_Mass();
    float& get_MinimumMassClamp();
    float& get_CollisionParticlesFraction();
    int32_t& get_MaximumCollisionParticles();
    void* get_SizeSpecificData();
    bool get_EnableRemovePiecesOnFracture();
    void set_EnableRemovePiecesOnFracture(bool value);
    void* get_RemoveOnFractureMaterials();
    void* get_PersistentGuid();
    void* get_StateGuid();
    int32_t& get_BoneSelectedMaterialIndex();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xe0
#pragma pack(pop)
}
