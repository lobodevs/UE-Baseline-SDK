#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpressionCustomOutput.hpp"
#include "MaterialExpressionVolumetricAdvancedMaterialOutput.hpp"
void* _Script_Engine::MaterialExpressionVolumetricAdvancedMaterialOutput::get_MultiScatteringContribution() {
    return (void*)((uintptr_t)this + 0x7c);
}
void* _Script_Engine::MaterialExpressionVolumetricAdvancedMaterialOutput::get_PhaseG() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::MaterialExpressionVolumetricAdvancedMaterialOutput::get_PhaseG2() {
    return (void*)((uintptr_t)this + 0x54);
}
void* _Script_Engine::MaterialExpressionVolumetricAdvancedMaterialOutput::get_PhaseBlend() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_Engine::MaterialExpressionVolumetricAdvancedMaterialOutput::get_MultiScatteringOcclusion() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_Engine::MaterialExpressionVolumetricAdvancedMaterialOutput::get_MultiScatteringEccentricity() {
    return (void*)((uintptr_t)this + 0xa4);
}
float& _Script_Engine::MaterialExpressionVolumetricAdvancedMaterialOutput::get_ConstPhaseG() {
    return *(float*)((uintptr_t)this + 0xcc);
}
void* _Script_Engine::MaterialExpressionVolumetricAdvancedMaterialOutput::get_ConservativeDensity() {
    return (void*)((uintptr_t)this + 0xb8);
}
float& _Script_Engine::MaterialExpressionVolumetricAdvancedMaterialOutput::get_ConstPhaseG2() {
    return *(float*)((uintptr_t)this + 0xd0);
}
float& _Script_Engine::MaterialExpressionVolumetricAdvancedMaterialOutput::get_ConstPhaseBlend() {
    return *(float*)((uintptr_t)this + 0xd4);
}
bool _Script_Engine::MaterialExpressionVolumetricAdvancedMaterialOutput::get_PerSamplePhaseEvaluation() {
    return (*(uint8_t*)((uintptr_t)this + 0xd8 + 0)) & 1 != 0;
}
void _Script_Engine::MaterialExpressionVolumetricAdvancedMaterialOutput::set_PerSamplePhaseEvaluation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::MaterialExpressionVolumetricAdvancedMaterialOutput::get_MultiScatteringApproximationOctaveCount() {
    return (void*)((uintptr_t)this + 0xdc);
}
float& _Script_Engine::MaterialExpressionVolumetricAdvancedMaterialOutput::get_ConstMultiScatteringContribution() {
    return *(float*)((uintptr_t)this + 0xe0);
}
float& _Script_Engine::MaterialExpressionVolumetricAdvancedMaterialOutput::get_ConstMultiScatteringOcclusion() {
    return *(float*)((uintptr_t)this + 0xe4);
}
float& _Script_Engine::MaterialExpressionVolumetricAdvancedMaterialOutput::get_ConstMultiScatteringEccentricity() {
    return *(float*)((uintptr_t)this + 0xe8);
}
bool _Script_Engine::MaterialExpressionVolumetricAdvancedMaterialOutput::get_bGroundContribution() {
    return (*(uint8_t*)((uintptr_t)this + 0xec + 0)) & 1 != 0;
}
void _Script_Engine::MaterialExpressionVolumetricAdvancedMaterialOutput::set_bGroundContribution(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xec + 0);
    *(uint8_t*)((uintptr_t)this + 0xec + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::MaterialExpressionVolumetricAdvancedMaterialOutput::get_bGrayScaleMaterial() {
    return (*(uint8_t*)((uintptr_t)this + 0xed + 0)) & 1 != 0;
}
void _Script_Engine::MaterialExpressionVolumetricAdvancedMaterialOutput::set_bGrayScaleMaterial(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xed + 0);
    *(uint8_t*)((uintptr_t)this + 0xed + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::MaterialExpressionVolumetricAdvancedMaterialOutput::get_bRayMarchVolumeShadow() {
    return (*(uint8_t*)((uintptr_t)this + 0xee + 0)) & 1 != 0;
}
void _Script_Engine::MaterialExpressionVolumetricAdvancedMaterialOutput::set_bRayMarchVolumeShadow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xee + 0);
    *(uint8_t*)((uintptr_t)this + 0xee + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionVolumetricAdvancedMaterialOutput::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionVolumetricAdvancedMaterialOutput");
    return result;
}
