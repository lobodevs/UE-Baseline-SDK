#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
namespace _Script_Engine {
struct StaticMesh;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_HeadMountedDisplay {
#pragma pack(push, 1)
struct MotionControllerComponent : public _Script_Engine::PrimitiveComponent {
    private: char pad_440[0xc0]; public:
    int32_t& get_PlayerIndex();
    void* get_hand();
    void* get_MotionSource();
    bool get_bDisableLowLatencyUpdate();
    void set_bDisableLowLatencyUpdate(bool value);
    void* get_CurrentTrackingStatus();
    bool get_bDisplayDeviceModel();
    void set_bDisplayDeviceModel(bool value);
    void* get_DisplayModelSource();
    _Script_Engine::StaticMesh*& get_CustomDisplayMesh();
    void* get_DisplayMeshMaterialOverrides();
    _Script_Engine::PrimitiveComponent*& get_DisplayComponent();
    static _Script_CoreUObject::Class* static_class();
    void SetTrackingSource(void* NewSource);
    void SetTrackingMotionSource(void* NewSource);
    void SetShowDeviceModel(bool bShowControllerModel);
    void SetDisplayModelSource(void* NewDisplayModelSource);
    void SetCustomDisplayMesh(_Script_Engine::StaticMesh* NewDisplayMesh);
    void SetAssociatedPlayerIndex(int32_t NewPlayer);
    void OnMotionControllerUpdated();
    bool IsTracked();
    void* GetTrackingSource();
    float GetParameterValue(void* InName, bool& bValueFound);
    _Script_CoreUObject::Vector GetHandJointPosition(int32_t jointIndex, bool& bValueFound);
}; // Size: 0x500
#pragma pack(pop)
}
