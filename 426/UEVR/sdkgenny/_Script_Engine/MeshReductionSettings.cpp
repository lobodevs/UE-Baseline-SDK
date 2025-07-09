#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MeshReductionSettings.hpp"
float& _Script_Engine::MeshReductionSettings::get_PercentTriangles() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::MeshReductionSettings::get_HardAngleThreshold() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Script_Engine::MeshReductionSettings::get_PercentVertices() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_Engine::MeshReductionSettings::get_WeldingThreshold() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_Engine::MeshReductionSettings::get_MaxDeviation() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_Engine::MeshReductionSettings::get_PixelError() {
    return *(float*)((uintptr_t)this + 0xc);
}
int32_t& _Script_Engine::MeshReductionSettings::get_BaseLODModel() {
    return *(int32_t*)((uintptr_t)this + 0x18);
}
void* _Script_Engine::MeshReductionSettings::get_SilhouetteImportance() {
    return (void*)((uintptr_t)this + 0x1c);
}
void* _Script_Engine::MeshReductionSettings::get_TerminationCriterion() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Engine::MeshReductionSettings::get_TextureImportance() {
    return (void*)((uintptr_t)this + 0x1d);
}
void* _Script_Engine::MeshReductionSettings::get_ShadingImportance() {
    return (void*)((uintptr_t)this + 0x1e);
}
bool _Script_Engine::MeshReductionSettings::get_bRecalculateNormals() {
    return (*(uint8_t*)((uintptr_t)this + 0x1f + 0)) & 1 != 0;
}
void _Script_Engine::MeshReductionSettings::set_bRecalculateNormals(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1f + 0);
    *(uint8_t*)((uintptr_t)this + 0x1f + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::MeshReductionSettings::get_bGenerateUniqueLightmapUVs() {
    return (*(uint8_t*)((uintptr_t)this + 0x1f + 0)) & 2 != 0;
}
void _Script_Engine::MeshReductionSettings::set_bGenerateUniqueLightmapUVs(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1f + 0);
    *(uint8_t*)((uintptr_t)this + 0x1f + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::MeshReductionSettings::get_bKeepSymmetry() {
    return (*(uint8_t*)((uintptr_t)this + 0x1f + 0)) & 4 != 0;
}
void _Script_Engine::MeshReductionSettings::set_bKeepSymmetry(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1f + 0);
    *(uint8_t*)((uintptr_t)this + 0x1f + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::MeshReductionSettings::get_bVisibilityAided() {
    return (*(uint8_t*)((uintptr_t)this + 0x1f + 0)) & 8 != 0;
}
void _Script_Engine::MeshReductionSettings::set_bVisibilityAided(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1f + 0);
    *(uint8_t*)((uintptr_t)this + 0x1f + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::MeshReductionSettings::get_bCullOccluded() {
    return (*(uint8_t*)((uintptr_t)this + 0x1f + 0)) & 16 != 0;
}
void _Script_Engine::MeshReductionSettings::set_bCullOccluded(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1f + 0);
    *(uint8_t*)((uintptr_t)this + 0x1f + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
void* _Script_Engine::MeshReductionSettings::get_VisibilityAggressiveness() {
    return (void*)((uintptr_t)this + 0x21);
}
void* _Script_Engine::MeshReductionSettings::get_VertexColorImportance() {
    return (void*)((uintptr_t)this + 0x22);
}
_Script_CoreUObject::Class* _Script_Engine::MeshReductionSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.MeshReductionSettings");
    return result;
}
