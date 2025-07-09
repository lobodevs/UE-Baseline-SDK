#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\StaticMesh.hpp"
#include "NiagaraMeshRendererProperties.hpp"
#include "NiagaraRendererProperties.hpp"
void* _Script_Niagara::NiagaraMeshRendererProperties::get_PositionBinding() {
    return (void*)((uintptr_t)this + 0xe8);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_OverrideMaterials() {
    return (void*)((uintptr_t)this + 0x90);
}
_Script_Engine::StaticMesh*& _Script_Niagara::NiagaraMeshRendererProperties::get_ParticleMesh() {
    return *(_Script_Engine::StaticMesh**)((uintptr_t)this + 0x80);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_NormalizedAgeBinding() {
    return (void*)((uintptr_t)this + 0x508);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_SortMode() {
    return (void*)((uintptr_t)this + 0x88);
}
bool _Script_Niagara::NiagaraMeshRendererProperties::get_bOverrideMaterials() {
    return (*(uint8_t*)((uintptr_t)this + 0x8c + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraMeshRendererProperties::set_bOverrideMaterials(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8c + 0);
    *(uint8_t*)((uintptr_t)this + 0x8c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_SubImageSize() {
    return (void*)((uintptr_t)this + 0xa0);
}
bool _Script_Niagara::NiagaraMeshRendererProperties::get_bSortOnlyWhenTranslucent() {
    return (*(uint8_t*)((uintptr_t)this + 0x8c + 0)) & 2 != 0;
}
void _Script_Niagara::NiagaraMeshRendererProperties::set_bSortOnlyWhenTranslucent(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8c + 0);
    *(uint8_t*)((uintptr_t)this + 0x8c + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Niagara::NiagaraMeshRendererProperties::get_bSubImageBlend() {
    return (*(uint8_t*)((uintptr_t)this + 0xa8 + 0)) & 1 != 0;
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_CustomSortingBinding() {
    return (void*)((uintptr_t)this + 0x4b0);
}
void _Script_Niagara::NiagaraMeshRendererProperties::set_bSubImageBlend(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_FacingMode() {
    return (void*)((uintptr_t)this + 0xac);
}
bool _Script_Niagara::NiagaraMeshRendererProperties::get_bLockedAxisEnable() {
    return (*(uint8_t*)((uintptr_t)this + 0xb0 + 0)) & 1 != 0;
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_DynamicMaterialBinding() {
    return (void*)((uintptr_t)this + 0x2f8);
}
void _Script_Niagara::NiagaraMeshRendererProperties::set_bLockedAxisEnable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_LockedAxis() {
    return (void*)((uintptr_t)this + 0xb4);
}
float& _Script_Niagara::NiagaraMeshRendererProperties::get_MinCameraDistance() {
    return *(float*)((uintptr_t)this + 0xd8);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_LockedAxisSpace() {
    return (void*)((uintptr_t)this + 0xc0);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_PivotOffset() {
    return (void*)((uintptr_t)this + 0xc4);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_PivotOffsetSpace() {
    return (void*)((uintptr_t)this + 0xd0);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_ScaleBinding() {
    return (void*)((uintptr_t)this + 0x248);
}
bool _Script_Niagara::NiagaraMeshRendererProperties::get_bEnableFrustumCulling() {
    return (*(uint8_t*)((uintptr_t)this + 0xd4 + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraMeshRendererProperties::set_bEnableFrustumCulling(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Niagara::NiagaraMeshRendererProperties::get_bEnableCameraDistanceCulling() {
    return (*(uint8_t*)((uintptr_t)this + 0xd4 + 0)) & 2 != 0;
}
void _Script_Niagara::NiagaraMeshRendererProperties::set_bEnableCameraDistanceCulling(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd4 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
float& _Script_Niagara::NiagaraMeshRendererProperties::get_MaxCameraDistance() {
    return *(float*)((uintptr_t)this + 0xdc);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_RendererVisibility() {
    return (void*)((uintptr_t)this + 0xe0);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_ColorBinding() {
    return (void*)((uintptr_t)this + 0x140);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_VelocityBinding() {
    return (void*)((uintptr_t)this + 0x198);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_MeshOrientationBinding() {
    return (void*)((uintptr_t)this + 0x1f0);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_SubImageIndexBinding() {
    return (void*)((uintptr_t)this + 0x2a0);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_DynamicMaterial1Binding() {
    return (void*)((uintptr_t)this + 0x350);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_DynamicMaterial2Binding() {
    return (void*)((uintptr_t)this + 0x3a8);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_DynamicMaterial3Binding() {
    return (void*)((uintptr_t)this + 0x400);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_MaterialRandomBinding() {
    return (void*)((uintptr_t)this + 0x458);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_CameraOffsetBinding() {
    return (void*)((uintptr_t)this + 0x560);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_RendererVisibilityTagBinding() {
    return (void*)((uintptr_t)this + 0x5b8);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraMeshRendererProperties::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraMeshRendererProperties");
    return result;
}
