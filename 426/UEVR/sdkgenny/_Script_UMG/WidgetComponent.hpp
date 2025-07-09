#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\MeshComponent.hpp"
namespace _Script_Engine {
struct LocalPlayer;
}
namespace _Script_Engine {
struct BodySetup;
}
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_Engine {
struct TextureRenderTarget2D;
}
namespace _Script_UMG {
struct UserWidget;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct WidgetComponent : public _Script_Engine::MeshComponent {
    private: char pad_470[0x120]; public:
    void* get_Space();
    void* get_TimingPolicy();
    void* get_WidgetClass();
    void* get_DrawSize();
    bool get_bManuallyRedraw();
    void set_bManuallyRedraw(bool value);
    bool get_bRedrawRequested();
    void set_bRedrawRequested(bool value);
    float& get_RedrawTime();
    void* get_CurrentDrawSize();
    bool get_bDrawAtDesiredSize();
    void set_bDrawAtDesiredSize(bool value);
    void* get_Pivot();
    bool get_bReceiveHardwareInput();
    void set_bReceiveHardwareInput(bool value);
    bool get_bWindowFocusable();
    void set_bWindowFocusable(bool value);
    void* get_WindowVisibility();
    bool get_bApplyGammaCorrection();
    void set_bApplyGammaCorrection(bool value);
    _Script_Engine::LocalPlayer*& get_OwnerPlayer();
    void* get_BackgroundColor();
    void* get_TintColorAndOpacity();
    float& get_OpacityFromTexture();
    void* get_BlendMode();
    bool get_bIsTwoSided();
    void set_bIsTwoSided(bool value);
    bool get_TickWhenOffscreen();
    void set_TickWhenOffscreen(bool value);
    _Script_Engine::BodySetup*& get_BodySetup();
    _Script_Engine::MaterialInterface*& get_TranslucentMaterial();
    _Script_Engine::MaterialInterface*& get_TranslucentMaterial_OneSided();
    _Script_Engine::MaterialInterface*& get_OpaqueMaterial();
    _Script_Engine::MaterialInterface*& get_OpaqueMaterial_OneSided();
    _Script_Engine::MaterialInterface*& get_MaskedMaterial();
    _Script_Engine::MaterialInterface*& get_MaskedMaterial_OneSided();
    _Script_Engine::TextureRenderTarget2D*& get_RenderTarget();
    _Script_Engine::MaterialInstanceDynamic*& get_MaterialInstance();
    bool get_bAddedToScreen();
    void set_bAddedToScreen(bool value);
    bool get_bEditTimeUsable();
    void set_bEditTimeUsable(bool value);
    void* get_SharedLayerName();
    int32_t& get_LayerZOrder();
    void* get_GeometryMode();
    float& get_CylinderArcAngle();
    void* get_TickMode();
    _Script_UMG::UserWidget*& get_Widget();
    static _Script_CoreUObject::Class* static_class();
    void SetWindowVisibility(void* InVisibility);
    void SetWindowFocusable(bool bInWindowFocusable);
    void SetWidgetSpace(void* NewSpace);
    void SetWidget(_Script_UMG::UserWidget* Widget);
    void SetTwoSided(bool bWantTwoSided);
    void SetTintColorAndOpacity(_Script_CoreUObject::LinearColor NewTintColorAndOpacity);
    void SetTickWhenOffscreen(bool bWantTickWhenOffscreen);
    void SetTickMode(void* InTickMode);
    void SetRedrawTime(float InRedrawTime);
    void SetPivot(_Script_CoreUObject::Vector2D& InPivot);
    void SetOwnerPlayer(_Script_Engine::LocalPlayer* LocalPlayer);
    void SetManuallyRedraw(bool bUseManualRedraw);
    void SetGeometryMode(void* InGeometryMode);
    void SetDrawSize(_Script_CoreUObject::Vector2D Size);
    void SetDrawAtDesiredSize(bool bInDrawAtDesiredSize);
    void SetCylinderArcAngle(float InCylinderArcAngle);
    void SetBackgroundColor(_Script_CoreUObject::LinearColor NewBackgroundColor);
    void RequestRedraw();
    bool IsWidgetVisible();
    void* GetWindowVisiblility();
    bool GetWindowFocusable();
    void* GetWidgetSpace();
    _Script_UMG::UserWidget* GetWidget();
    _Script_UMG::UserWidget* GetUserWidgetObject();
    bool GetTwoSided();
    bool GetTickWhenOffscreen();
    _Script_Engine::TextureRenderTarget2D* GetRenderTarget();
    float GetRedrawTime();
    _Script_CoreUObject::Vector2D GetPivot();
    _Script_Engine::LocalPlayer* GetOwnerPlayer();
    _Script_Engine::MaterialInstanceDynamic* GetMaterialInstance();
    bool GetManuallyRedraw();
    void* GetGeometryMode();
    _Script_CoreUObject::Vector2D GetDrawSize();
    bool GetDrawAtDesiredSize();
    float GetCylinderArcAngle();
    _Script_CoreUObject::Vector2D GetCurrentDrawSize();
}; // Size: 0x590
#pragma pack(pop)
}
