#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "FXSystemAsset.hpp"
namespace _Script_Engine {
struct ParticleSystemComponent;
}
namespace _Script_Engine {
struct InterpCurveEdSetup;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleSystem : public FXSystemAsset {
    private: char pad_30[0xe0]; public:
    float& get_UpdateTime_FPS();
    float& get_UpdateTime_Delta();
    float& get_WarmupTime();
    float& get_WarmupTickRate();
    void* get_Emitters();
    _Script_Engine::ParticleSystemComponent*& get_PreviewComponent();
    _Script_Engine::InterpCurveEdSetup*& get_CurveEdSetup();
    float& get_LODDistanceCheckTime();
    float& get_MacroUVRadius();
    void* get_LODDistances();
    void* get_LODSettings();
    void* get_FixedRelativeBoundingBox();
    float& get_SecondsBeforeInactive();
    float& get_Delay();
    float& get_DelayLow();
    bool get_bOrientZAxisTowardCamera();
    void set_bOrientZAxisTowardCamera(bool value);
    bool get_bUseFixedRelativeBoundingBox();
    void set_bUseFixedRelativeBoundingBox(bool value);
    bool get_bShouldResetPeakCounts();
    void set_bShouldResetPeakCounts(bool value);
    bool get_bHasPhysics();
    void set_bHasPhysics(bool value);
    bool get_bUseRealtimeThumbnail();
    void set_bUseRealtimeThumbnail(bool value);
    bool get_ThumbnailImageOutOfDate();
    void set_ThumbnailImageOutOfDate(bool value);
    bool get_bUseDelayRange();
    void set_bUseDelayRange(bool value);
    bool get_bAllowManagedTicking();
    void set_bAllowManagedTicking(bool value);
    bool get_bAutoDeactivate();
    void set_bAutoDeactivate(bool value);
    bool get_bRegenerateLODDuplicate();
    void set_bRegenerateLODDuplicate(bool value);
    void* get_SystemUpdateMode();
    void* get_LODMethod();
    void* get_InsignificantReaction();
    void* get_OcclusionBoundsMethod();
    void* get_MaxSignificanceLevel();
    void* get_MinTimeBetweenTicks();
    float& get_InsignificanceDelay();
    void* get_MacroUVPosition();
    void* get_CustomOcclusionBounds();
    void* get_SoloTracking();
    void* get_NamedMaterialSlots();
    static _Script_CoreUObject::Class* static_class();
    bool ContainsEmitterType(void* TypeData);
}; // Size: 0x110
#pragma pack(pop)
}
