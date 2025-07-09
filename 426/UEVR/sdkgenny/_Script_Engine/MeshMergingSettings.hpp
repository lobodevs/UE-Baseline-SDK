#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct MeshMergingSettings {
    private: char pad_0[0xa0]; public:
    int32_t& get_TargetLightMapResolution();
    void* get_OutputUVs();
    void* get_MaterialSettings();
    int32_t& get_GutterSize();
    int32_t& get_SpecificLOD();
    void* get_LODSelectionType();
    bool get_bGenerateLightMapUV();
    void set_bGenerateLightMapUV(bool value);
    bool get_bComputedLightMapResolution();
    void set_bComputedLightMapResolution(bool value);
    bool get_bPivotPointAtZero();
    void set_bPivotPointAtZero(bool value);
    bool get_bMergePhysicsData();
    void set_bMergePhysicsData(bool value);
    bool get_bMergeMaterials();
    void set_bMergeMaterials(bool value);
    bool get_bCreateMergedMaterial();
    void set_bCreateMergedMaterial(bool value);
    bool get_bBakeVertexDataToMesh();
    void set_bBakeVertexDataToMesh(bool value);
    bool get_bUseVertexDataForBakingMaterial();
    void set_bUseVertexDataForBakingMaterial(bool value);
    bool get_bUseTextureBinning();
    void set_bUseTextureBinning(bool value);
    bool get_bReuseMeshLightmapUVs();
    void set_bReuseMeshLightmapUVs(bool value);
    bool get_bMergeEquivalentMaterials();
    void set_bMergeEquivalentMaterials(bool value);
    bool get_bUseLandscapeCulling();
    void set_bUseLandscapeCulling(bool value);
    bool get_bIncludeImposters();
    void set_bIncludeImposters(bool value);
    bool get_bAllowDistanceField();
    void set_bAllowDistanceField(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa0
#pragma pack(pop)
}
