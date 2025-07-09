#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PlayerController.hpp"
namespace _Script_Engine {
struct DrawFrustumComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_Engine {
struct Player;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct DebugCameraController : public PlayerController {
    private: char pad_570[0x108]; public:
    bool get_bShowSelectedInfo();
    void set_bShowSelectedInfo(bool value);
    bool get_bIsFrozenRendering();
    void set_bIsFrozenRendering(bool value);
    bool get_bIsOrbitingSelectedActor();
    void set_bIsOrbitingSelectedActor(bool value);
    bool get_bOrbitPivotUseCenter();
    void set_bOrbitPivotUseCenter(bool value);
    bool get_bEnableBufferVisualization();
    void set_bEnableBufferVisualization(bool value);
    bool get_bEnableBufferVisualizationFullMode();
    void set_bEnableBufferVisualizationFullMode(bool value);
    bool get_bIsBufferVisualizationInputSetup();
    void set_bIsBufferVisualizationInputSetup(bool value);
    bool get_bLastDisplayEnabled();
    void set_bLastDisplayEnabled(bool value);
    _Script_Engine::DrawFrustumComponent*& get_DrawFrustum();
    _Script_Engine::Actor*& get_SelectedActor();
    _Script_Engine::PrimitiveComponent*& get_SelectedComponent();
    void* get_SelectedHitPoint();
    _Script_Engine::PlayerController*& get_OriginalControllerRef();
    _Script_Engine::Player*& get_OriginalPlayer();
    float& get_SpeedScale();
    float& get_InitialMaxSpeed();
    float& get_InitialAccel();
    float& get_InitialDecel();
    static _Script_CoreUObject::Class* static_class();
    void ToggleDisplay();
    void ShowDebugSelectedInfo();
    void SetPawnMovementSpeedScale(float NewSpeedScale);
    void ReceiveOnDeactivate(_Script_Engine::PlayerController* RestoredPC);
    void ReceiveOnActorSelected(_Script_Engine::Actor* NewSelectedActor, _Script_CoreUObject::Vector& SelectHitLocation, _Script_CoreUObject::Vector& SelectHitNormal, _Script_Engine::HitResult& Hit);
    void ReceiveOnActivate(_Script_Engine::PlayerController* OriginalPC);
    _Script_Engine::Actor* GetSelectedActor();
}; // Size: 0x678
#pragma pack(pop)
}
