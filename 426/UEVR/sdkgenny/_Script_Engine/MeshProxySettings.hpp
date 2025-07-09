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
struct MeshProxySettings {
    private: char pad_0[0xa8]; public:
    int32_t& get_ScreenSize();
    float& get_VoxelSize();
    void* get_MaterialSettings();
    float& get_MergeDistance();
    void* get_UnresolvedGeometryColor();
    float& get_MaxRayCastDist();
    float& get_HardAngleThreshold();
    int32_t& get_LightMapResolution();
    void* get_NormalCalculationMethod();
    void* get_LandscapeCullingPrecision();
    bool get_bCalculateCorrectLODModel();
    void set_bCalculateCorrectLODModel(bool value);
    bool get_bOverrideVoxelSize();
    void set_bOverrideVoxelSize(bool value);
    bool get_bOverrideTransferDistance();
    void set_bOverrideTransferDistance(bool value);
    bool get_bUseHardAngleThreshold();
    void set_bUseHardAngleThreshold(bool value);
    bool get_bComputeLightMapResolution();
    void set_bComputeLightMapResolution(bool value);
    bool get_bRecalculateNormals();
    void set_bRecalculateNormals(bool value);
    bool get_bUseLandscapeCulling();
    void set_bUseLandscapeCulling(bool value);
    bool get_bAllowAdjacency();
    void set_bAllowAdjacency(bool value);
    bool get_bAllowDistanceField();
    void set_bAllowDistanceField(bool value);
    bool get_bReuseMeshLightmapUVs();
    void set_bReuseMeshLightmapUVs(bool value);
    bool get_bCreateCollision();
    void set_bCreateCollision(bool value);
    bool get_bAllowVertexColors();
    void set_bAllowVertexColors(bool value);
    bool get_bGenerateLightmapUVs();
    void set_bGenerateLightmapUVs(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa8
#pragma pack(pop)
}
