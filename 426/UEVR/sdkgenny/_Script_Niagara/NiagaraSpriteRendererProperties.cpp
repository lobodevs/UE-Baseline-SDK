#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MaterialInterface.hpp"
#include "NiagaraRendererProperties.hpp"
#include "NiagaraSpriteRendererProperties.hpp"
void* _Script_Niagara::NiagaraSpriteRendererProperties::get_Alignment() {
    return (void*)((uintptr_t)this + 0xb0);
}
_Script_Engine::MaterialInterface*& _Script_Niagara::NiagaraSpriteRendererProperties::get_Material() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x80);
}
void* _Script_Niagara::NiagaraSpriteRendererProperties::get_RendererVisibilityTagBinding() {
    return (void*)((uintptr_t)this + 0x6c0);
}
void* _Script_Niagara::NiagaraSpriteRendererProperties::get_SourceMode() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_Niagara::NiagaraSpriteRendererProperties::get_SortMode() {
    return (void*)((uintptr_t)this + 0xbc);
}
void* _Script_Niagara::NiagaraSpriteRendererProperties::get_MaterialUserParamBinding() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_Niagara::NiagaraSpriteRendererProperties::get_FacingMode() {
    return (void*)((uintptr_t)this + 0xb1);
}
void* _Script_Niagara::NiagaraSpriteRendererProperties::get_PivotInUVSpace() {
    return (void*)((uintptr_t)this + 0xb4);
}
void* _Script_Niagara::NiagaraSpriteRendererProperties::get_SubImageSize() {
    return (void*)((uintptr_t)this + 0xc0);
}
bool _Script_Niagara::NiagaraSpriteRendererProperties::get_bSubImageBlend() {
    return (*(uint8_t*)((uintptr_t)this + 0xc8 + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraSpriteRendererProperties::set_bSubImageBlend(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Niagara::NiagaraSpriteRendererProperties::get_bRemoveHMDRollInVR() {
    return (*(uint8_t*)((uintptr_t)this + 0xc8 + 0)) & 2 != 0;
}
void _Script_Niagara::NiagaraSpriteRendererProperties::set_bRemoveHMDRollInVR(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc8 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Niagara::NiagaraSpriteRendererProperties::get_bSortOnlyWhenTranslucent() {
    return (*(uint8_t*)((uintptr_t)this + 0xc8 + 0)) & 4 != 0;
}
void _Script_Niagara::NiagaraSpriteRendererProperties::set_bSortOnlyWhenTranslucent(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc8 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Niagara::NiagaraSpriteRendererProperties::get_bGpuLowLatencyTranslucency() {
    return (*(uint8_t*)((uintptr_t)this + 0xc8 + 0)) & 8 != 0;
}
void _Script_Niagara::NiagaraSpriteRendererProperties::set_bGpuLowLatencyTranslucency(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc8 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
float& _Script_Niagara::NiagaraSpriteRendererProperties::get_MinFacingCameraBlendDistance() {
    return *(float*)((uintptr_t)this + 0xcc);
}
float& _Script_Niagara::NiagaraSpriteRendererProperties::get_MaxFacingCameraBlendDistance() {
    return *(float*)((uintptr_t)this + 0xd0);
}
bool _Script_Niagara::NiagaraSpriteRendererProperties::get_bEnableCameraDistanceCulling() {
    return (*(uint8_t*)((uintptr_t)this + 0xd4 + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraSpriteRendererProperties::set_bEnableCameraDistanceCulling(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Niagara::NiagaraSpriteRendererProperties::get_MinCameraDistance() {
    return *(float*)((uintptr_t)this + 0xd8);
}
float& _Script_Niagara::NiagaraSpriteRendererProperties::get_MaxCameraDistance() {
    return *(float*)((uintptr_t)this + 0xdc);
}
void* _Script_Niagara::NiagaraSpriteRendererProperties::get_RendererVisibility() {
    return (void*)((uintptr_t)this + 0xe0);
}
void* _Script_Niagara::NiagaraSpriteRendererProperties::get_PositionBinding() {
    return (void*)((uintptr_t)this + 0xe8);
}
void* _Script_Niagara::NiagaraSpriteRendererProperties::get_ColorBinding() {
    return (void*)((uintptr_t)this + 0x140);
}
void* _Script_Niagara::NiagaraSpriteRendererProperties::get_VelocityBinding() {
    return (void*)((uintptr_t)this + 0x198);
}
void* _Script_Niagara::NiagaraSpriteRendererProperties::get_SpriteRotationBinding() {
    return (void*)((uintptr_t)this + 0x1f0);
}
void* _Script_Niagara::NiagaraSpriteRendererProperties::get_SpriteSizeBinding() {
    return (void*)((uintptr_t)this + 0x248);
}
void* _Script_Niagara::NiagaraSpriteRendererProperties::get_SpriteFacingBinding() {
    return (void*)((uintptr_t)this + 0x2a0);
}
void* _Script_Niagara::NiagaraSpriteRendererProperties::get_SpriteAlignmentBinding() {
    return (void*)((uintptr_t)this + 0x2f8);
}
void* _Script_Niagara::NiagaraSpriteRendererProperties::get_SubImageIndexBinding() {
    return (void*)((uintptr_t)this + 0x350);
}
void* _Script_Niagara::NiagaraSpriteRendererProperties::get_DynamicMaterialBinding() {
    return (void*)((uintptr_t)this + 0x3a8);
}
void* _Script_Niagara::NiagaraSpriteRendererProperties::get_DynamicMaterial1Binding() {
    return (void*)((uintptr_t)this + 0x400);
}
void* _Script_Niagara::NiagaraSpriteRendererProperties::get_DynamicMaterial2Binding() {
    return (void*)((uintptr_t)this + 0x458);
}
void* _Script_Niagara::NiagaraSpriteRendererProperties::get_DynamicMaterial3Binding() {
    return (void*)((uintptr_t)this + 0x4b0);
}
void* _Script_Niagara::NiagaraSpriteRendererProperties::get_CameraOffsetBinding() {
    return (void*)((uintptr_t)this + 0x508);
}
void* _Script_Niagara::NiagaraSpriteRendererProperties::get_UVScaleBinding() {
    return (void*)((uintptr_t)this + 0x560);
}
void* _Script_Niagara::NiagaraSpriteRendererProperties::get_MaterialRandomBinding() {
    return (void*)((uintptr_t)this + 0x5b8);
}
void* _Script_Niagara::NiagaraSpriteRendererProperties::get_CustomSortingBinding() {
    return (void*)((uintptr_t)this + 0x610);
}
void* _Script_Niagara::NiagaraSpriteRendererProperties::get_NormalizedAgeBinding() {
    return (void*)((uintptr_t)this + 0x668);
}
void* _Script_Niagara::NiagaraSpriteRendererProperties::get_MaterialParameterBindings() {
    return (void*)((uintptr_t)this + 0x718);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraSpriteRendererProperties::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraSpriteRendererProperties");
    return result;
}
