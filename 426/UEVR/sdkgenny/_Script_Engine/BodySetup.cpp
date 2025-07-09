#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BodySetup.hpp"
#include "..\_Script_PhysicsCore\BodySetupCore.hpp"
#include "..\_Script_PhysicsCore\PhysicalMaterial.hpp"
void _Script_Engine::BodySetup::set_bConsiderForBounds(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_Engine::BodySetup::get_AggGeom() {
    return (void*)((uintptr_t)this + 0x48);
}
bool _Script_Engine::BodySetup::get_bAlwaysFullAnimWeight() {
    return (*(uint8_t*)((uintptr_t)this + 0xa0 + 0)) & 1 != 0;
}
void* _Script_Engine::BodySetup::get_DefaultInstance() {
    return (void*)((uintptr_t)this + 0x128);
}
bool _Script_Engine::BodySetup::get_bConsiderForBounds() {
    return (*(uint8_t*)((uintptr_t)this + 0xa0 + 0)) & 2 != 0;
}
void _Script_Engine::BodySetup::set_bAlwaysFullAnimWeight(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::BodySetup::get_bDoubleSidedGeometry() {
    return (*(uint8_t*)((uintptr_t)this + 0xa0 + 0)) & 8 != 0;
}
bool _Script_Engine::BodySetup::get_bMeshCollideAll() {
    return (*(uint8_t*)((uintptr_t)this + 0xa0 + 0)) & 4 != 0;
}
void _Script_Engine::BodySetup::set_bMeshCollideAll(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa0 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::BodySetup::set_bDoubleSidedGeometry(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa0 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
_Script_PhysicsCore::PhysicalMaterial*& _Script_Engine::BodySetup::get_PhysMaterial() {
    return *(_Script_PhysicsCore::PhysicalMaterial**)((uintptr_t)this + 0xa8);
}
bool _Script_Engine::BodySetup::get_bGenerateNonMirroredCollision() {
    return (*(uint8_t*)((uintptr_t)this + 0xa0 + 0)) & 16 != 0;
}
void _Script_Engine::BodySetup::set_bGenerateNonMirroredCollision(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa0 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::BodySetup::get_bSharedCookedData() {
    return (*(uint8_t*)((uintptr_t)this + 0xa0 + 0)) & 32 != 0;
}
void _Script_Engine::BodySetup::set_bSharedCookedData(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa0 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::BodySetup::get_bGenerateMirroredCollision() {
    return (*(uint8_t*)((uintptr_t)this + 0xa0 + 0)) & 64 != 0;
}
void _Script_Engine::BodySetup::set_bGenerateMirroredCollision(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa0 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::BodySetup::get_bSupportUVsAndFaceRemap() {
    return (*(uint8_t*)((uintptr_t)this + 0xa0 + 0)) & 128 != 0;
}
void _Script_Engine::BodySetup::set_bSupportUVsAndFaceRemap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa0 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
void* _Script_Engine::BodySetup::get_WalkableSlopeOverride() {
    return (void*)((uintptr_t)this + 0xb0);
}
void* _Script_Engine::BodySetup::get_BuildScale3D() {
    return (void*)((uintptr_t)this + 0x288);
}
_Script_CoreUObject::Class* _Script_Engine::BodySetup::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.BodySetup");
    return result;
}
