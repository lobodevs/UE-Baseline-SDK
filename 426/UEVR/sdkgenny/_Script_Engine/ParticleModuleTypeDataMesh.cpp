#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleTypeDataBase.hpp"
#include "ParticleModuleTypeDataMesh.hpp"
#include "StaticMesh.hpp"
void _Script_Engine::ParticleModuleTypeDataMesh::set_CastShadows(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x44 + 0);
    *(uint8_t*)((uintptr_t)this + 0x44 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
_Script_Engine::StaticMesh*& _Script_Engine::ParticleModuleTypeDataMesh::get_Mesh() {
    return *(_Script_Engine::StaticMesh**)((uintptr_t)this + 0x30);
}
void _Script_Engine::ParticleModuleTypeDataMesh::set_DoCollisions(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x44 + 0);
    *(uint8_t*)((uintptr_t)this + 0x44 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::ParticleModuleTypeDataMesh::set_bUseStaticMeshLODs(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x44 + 0);
    *(uint8_t*)((uintptr_t)this + 0x44 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::ParticleModuleTypeDataMesh::get_LODSizeScale() {
    return *(float*)((uintptr_t)this + 0x40);
}
bool _Script_Engine::ParticleModuleTypeDataMesh::get_bUseStaticMeshLODs() {
    return (*(uint8_t*)((uintptr_t)this + 0x44 + 0)) & 1 != 0;
}
bool _Script_Engine::ParticleModuleTypeDataMesh::get_CastShadows() {
    return (*(uint8_t*)((uintptr_t)this + 0x44 + 0)) & 2 != 0;
}
bool _Script_Engine::ParticleModuleTypeDataMesh::get_DoCollisions() {
    return (*(uint8_t*)((uintptr_t)this + 0x44 + 0)) & 4 != 0;
}
void* _Script_Engine::ParticleModuleTypeDataMesh::get_MeshAlignment() {
    return (void*)((uintptr_t)this + 0x45);
}
bool _Script_Engine::ParticleModuleTypeDataMesh::get_bOverrideMaterial() {
    return (*(uint8_t*)((uintptr_t)this + 0x46 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleTypeDataMesh::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleTypeDataMesh");
    return result;
}
void _Script_Engine::ParticleModuleTypeDataMesh::set_bOverrideMaterial(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x46 + 0);
    *(uint8_t*)((uintptr_t)this + 0x46 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::ParticleModuleTypeDataMesh::get_bOverrideDefaultMotionBlurSettings() {
    return (*(uint8_t*)((uintptr_t)this + 0x46 + 0)) & 2 != 0;
}
void _Script_Engine::ParticleModuleTypeDataMesh::set_bOverrideDefaultMotionBlurSettings(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x46 + 0);
    *(uint8_t*)((uintptr_t)this + 0x46 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::ParticleModuleTypeDataMesh::get_bCameraFacing() {
    return (*(uint8_t*)((uintptr_t)this + 0x91 + 0)) & 1 != 0;
}
bool _Script_Engine::ParticleModuleTypeDataMesh::get_bEnableMotionBlur() {
    return (*(uint8_t*)((uintptr_t)this + 0x46 + 0)) & 4 != 0;
}
void _Script_Engine::ParticleModuleTypeDataMesh::set_bEnableMotionBlur(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x46 + 0);
    *(uint8_t*)((uintptr_t)this + 0x46 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void* _Script_Engine::ParticleModuleTypeDataMesh::get_RollPitchYawRange() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_Engine::ParticleModuleTypeDataMesh::get_AxisLockOption() {
    return (void*)((uintptr_t)this + 0x90);
}
void _Script_Engine::ParticleModuleTypeDataMesh::set_bCameraFacing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x91 + 0);
    *(uint8_t*)((uintptr_t)this + 0x91 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::ParticleModuleTypeDataMesh::get_CameraFacingUpAxisOption() {
    return (void*)((uintptr_t)this + 0x92);
}
void* _Script_Engine::ParticleModuleTypeDataMesh::get_CameraFacingOption() {
    return (void*)((uintptr_t)this + 0x93);
}
bool _Script_Engine::ParticleModuleTypeDataMesh::get_bApplyParticleRotationAsSpin() {
    return (*(uint8_t*)((uintptr_t)this + 0x94 + 0)) & 1 != 0;
}
bool _Script_Engine::ParticleModuleTypeDataMesh::get_bCollisionsConsiderPartilceSize() {
    return (*(uint8_t*)((uintptr_t)this + 0x94 + 0)) & 4 != 0;
}
void _Script_Engine::ParticleModuleTypeDataMesh::set_bApplyParticleRotationAsSpin(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x94 + 0);
    *(uint8_t*)((uintptr_t)this + 0x94 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::ParticleModuleTypeDataMesh::get_bFaceCameraDirectionRatherThanPosition() {
    return (*(uint8_t*)((uintptr_t)this + 0x94 + 0)) & 2 != 0;
}
void _Script_Engine::ParticleModuleTypeDataMesh::set_bFaceCameraDirectionRatherThanPosition(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x94 + 0);
    *(uint8_t*)((uintptr_t)this + 0x94 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::ParticleModuleTypeDataMesh::set_bCollisionsConsiderPartilceSize(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x94 + 0);
    *(uint8_t*)((uintptr_t)this + 0x94 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
