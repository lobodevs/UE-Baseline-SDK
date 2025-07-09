#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "NiagaraRendererProperties.hpp"
namespace _Script_Engine {
struct StaticMesh;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraMeshRendererProperties : public NiagaraRendererProperties {
    private: char pad_80[0x5f8]; public:
    _Script_Engine::StaticMesh*& get_ParticleMesh();
    void* get_SortMode();
    bool get_bOverrideMaterials();
    void set_bOverrideMaterials(bool value);
    bool get_bSortOnlyWhenTranslucent();
    void set_bSortOnlyWhenTranslucent(bool value);
    void* get_OverrideMaterials();
    void* get_SubImageSize();
    bool get_bSubImageBlend();
    void set_bSubImageBlend(bool value);
    void* get_FacingMode();
    bool get_bLockedAxisEnable();
    void set_bLockedAxisEnable(bool value);
    void* get_LockedAxis();
    void* get_LockedAxisSpace();
    void* get_PivotOffset();
    void* get_PivotOffsetSpace();
    bool get_bEnableFrustumCulling();
    void set_bEnableFrustumCulling(bool value);
    bool get_bEnableCameraDistanceCulling();
    void set_bEnableCameraDistanceCulling(bool value);
    float& get_MinCameraDistance();
    float& get_MaxCameraDistance();
    void* get_RendererVisibility();
    void* get_PositionBinding();
    void* get_ColorBinding();
    void* get_VelocityBinding();
    void* get_MeshOrientationBinding();
    void* get_ScaleBinding();
    void* get_SubImageIndexBinding();
    void* get_DynamicMaterialBinding();
    void* get_DynamicMaterial1Binding();
    void* get_DynamicMaterial2Binding();
    void* get_DynamicMaterial3Binding();
    void* get_MaterialRandomBinding();
    void* get_CustomSortingBinding();
    void* get_NormalizedAgeBinding();
    void* get_CameraOffsetBinding();
    void* get_RendererVisibilityTagBinding();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x678
#pragma pack(pop)
}
