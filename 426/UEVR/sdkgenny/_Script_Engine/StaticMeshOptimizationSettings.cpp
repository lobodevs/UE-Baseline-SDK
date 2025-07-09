#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "StaticMeshOptimizationSettings.hpp"
void* _Script_Engine::StaticMeshOptimizationSettings::get_ReductionMethod() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::StaticMeshOptimizationSettings::get_NormalsThreshold() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Script_Engine::StaticMeshOptimizationSettings::get_NumOfTrianglesPercentage() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_Engine::StaticMeshOptimizationSettings::get_MaxDeviationPercentage() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_Engine::StaticMeshOptimizationSettings::get_WeldingThreshold() {
    return *(float*)((uintptr_t)this + 0xc);
}
void* _Script_Engine::StaticMeshOptimizationSettings::get_SilhouetteImportance() {
    return (void*)((uintptr_t)this + 0x18);
}
bool _Script_Engine::StaticMeshOptimizationSettings::get_bRecalcNormals() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 1 != 0;
}
void _Script_Engine::StaticMeshOptimizationSettings::set_bRecalcNormals(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::StaticMeshOptimizationSettings::get_TextureImportance() {
    return (void*)((uintptr_t)this + 0x19);
}
void* _Script_Engine::StaticMeshOptimizationSettings::get_ShadingImportance() {
    return (void*)((uintptr_t)this + 0x1a);
}
_Script_CoreUObject::Class* _Script_Engine::StaticMeshOptimizationSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.StaticMeshOptimizationSettings");
    return result;
}
