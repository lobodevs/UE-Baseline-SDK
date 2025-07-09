#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MaterialExpressionCustomOutput.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct MaterialExpressionVolumetricAdvancedMaterialOutput : public MaterialExpressionCustomOutput {
    private: char pad_40[0xb0]; public:
    void* get_PhaseG();
    void* get_PhaseG2();
    void* get_PhaseBlend();
    void* get_MultiScatteringContribution();
    void* get_MultiScatteringOcclusion();
    void* get_MultiScatteringEccentricity();
    void* get_ConservativeDensity();
    float& get_ConstPhaseG();
    float& get_ConstPhaseG2();
    float& get_ConstPhaseBlend();
    bool get_PerSamplePhaseEvaluation();
    void set_PerSamplePhaseEvaluation(bool value);
    void* get_MultiScatteringApproximationOctaveCount();
    float& get_ConstMultiScatteringContribution();
    float& get_ConstMultiScatteringOcclusion();
    float& get_ConstMultiScatteringEccentricity();
    bool get_bGroundContribution();
    void set_bGroundContribution(bool value);
    bool get_bGrayScaleMaterial();
    void set_bGrayScaleMaterial(bool value);
    bool get_bRayMarchVolumeShadow();
    void set_bRayMarchVolumeShadow(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xf0
#pragma pack(pop)
}
