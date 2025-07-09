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
struct SkeletalMeshBuildSettings {
    private: char pad_0[0x14]; public:
    bool get_bRecomputeNormals();
    void set_bRecomputeNormals(bool value);
    bool get_bRecomputeTangents();
    void set_bRecomputeTangents(bool value);
    bool get_bUseMikkTSpace();
    void set_bUseMikkTSpace(bool value);
    bool get_bComputeWeightedNormals();
    void set_bComputeWeightedNormals(bool value);
    bool get_bRemoveDegenerates();
    void set_bRemoveDegenerates(bool value);
    bool get_bUseHighPrecisionTangentBasis();
    void set_bUseHighPrecisionTangentBasis(bool value);
    bool get_bUseFullPrecisionUVs();
    void set_bUseFullPrecisionUVs(bool value);
    bool get_bBuildAdjacencyBuffer();
    void set_bBuildAdjacencyBuffer(bool value);
    float& get_ThresholdPosition();
    float& get_ThresholdTangentNormal();
    float& get_ThresholdUV();
    float& get_MorphThresholdPosition();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x14
#pragma pack(pop)
}
