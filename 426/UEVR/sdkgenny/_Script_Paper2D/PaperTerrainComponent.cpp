#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_Engine\BodySetup.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "PaperTerrainComponent.hpp"
#include "PaperTerrainMaterial.hpp"
#include "PaperTerrainSplineComponent.hpp"
void _Script_Paper2D::PaperTerrainComponent::set_bClosedSpline(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x448 + 0);
    *(uint8_t*)((uintptr_t)this + 0x448 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Paper2D::PaperTerrainMaterial*& _Script_Paper2D::PaperTerrainComponent::get_TerrainMaterial() {
    return *(_Script_Paper2D::PaperTerrainMaterial**)((uintptr_t)this + 0x440);
}
float& _Script_Paper2D::PaperTerrainComponent::get_SegmentOverlapAmount() {
    return *(float*)((uintptr_t)this + 0x45c);
}
bool _Script_Paper2D::PaperTerrainComponent::get_bClosedSpline() {
    return (*(uint8_t*)((uintptr_t)this + 0x448 + 0)) & 1 != 0;
}
bool _Script_Paper2D::PaperTerrainComponent::get_bFilledSpline() {
    return (*(uint8_t*)((uintptr_t)this + 0x449 + 0)) & 1 != 0;
}
int32_t& _Script_Paper2D::PaperTerrainComponent::get_RandomSeed() {
    return *(int32_t*)((uintptr_t)this + 0x458);
}
void _Script_Paper2D::PaperTerrainComponent::set_bFilledSpline(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x449 + 0);
    *(uint8_t*)((uintptr_t)this + 0x449 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Paper2D::PaperTerrainSplineComponent*& _Script_Paper2D::PaperTerrainComponent::get_AssociatedSpline() {
    return *(_Script_Paper2D::PaperTerrainSplineComponent**)((uintptr_t)this + 0x450);
}
void* _Script_Paper2D::PaperTerrainComponent::get_TerrainColor() {
    return (void*)((uintptr_t)this + 0x460);
}
int32_t& _Script_Paper2D::PaperTerrainComponent::get_ReparamStepsPerSegment() {
    return *(int32_t*)((uintptr_t)this + 0x470);
}
void* _Script_Paper2D::PaperTerrainComponent::get_SpriteCollisionDomain() {
    return (void*)((uintptr_t)this + 0x474);
}
float& _Script_Paper2D::PaperTerrainComponent::get_CollisionThickness() {
    return *(float*)((uintptr_t)this + 0x478);
}
_Script_Engine::BodySetup*& _Script_Paper2D::PaperTerrainComponent::get_CachedBodySetup() {
    return *(_Script_Engine::BodySetup**)((uintptr_t)this + 0x480);
}
_Script_CoreUObject::Class* _Script_Paper2D::PaperTerrainComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Paper2D.PaperTerrainComponent");
    return result;
}
void _Script_Paper2D::PaperTerrainComponent::SetTerrainColor(_Script_CoreUObject::LinearColor NewColor) {
    return;
}
