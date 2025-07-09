#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Timespan.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Rotator;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Engine {
struct Texture;
}
namespace _Script_HeadMountedDisplay {
struct XRMotionControllerData;
}
namespace _Script_HeadMountedDisplay {
struct XRDeviceId;
}
namespace _Script_HeadMountedDisplay {
struct XRHMDData;
}
namespace _Script_HeadMountedDisplay {
struct XRGestureConfig;
}
namespace _Script_HeadMountedDisplay {
#pragma pack(push, 1)
struct HeadMountedDisplayFunctionLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void UpdateExternalTrackingHMDPosition(_Script_CoreUObject::Transform& ExternalTrackingTransform);
    void SetXRTimedInputActionDelegate(void*& ActionName, void*& InDelegate);
    void SetXRDisconnectDelegate(void*& InDisconnectedDelegate);
    void SetWorldToMetersScale(_Script_CoreUObject::Object* WorldContext, float NewScale);
    void SetTrackingOrigin(void* Origin);
    void SetSpectatorScreenTexture(_Script_Engine::Texture* InTexture);
    void SetSpectatorScreenModeTexturePlusEyeLayout(_Script_CoreUObject::Vector2D EyeRectMin, _Script_CoreUObject::Vector2D EyeRectMax, _Script_CoreUObject::Vector2D TextureRectMin, _Script_CoreUObject::Vector2D TextureRectMax, bool bDrawEyeFirst, bool bClearBlack, bool bUseAlpha);
    void SetSpectatorScreenMode(void* Mode);
    void SetClippingPlanes(float Near, float Far);
    void ResetOrientationAndPosition(float Yaw, void* Options);
    bool IsSpectatorScreenModeControllable();
    bool IsInLowPersistenceMode();
    bool IsHeadMountedDisplayEnabled();
    bool IsHeadMountedDisplayConnected();
    bool IsDeviceTracking(_Script_HeadMountedDisplay::XRDeviceId& XRDeviceId);
    bool HasValidTrackingPosition();
    int32_t GetXRSystemFlags();
    float GetWorldToMetersScale(_Script_CoreUObject::Object* WorldContext);
    void GetVRFocusState(bool& bUseFocus, bool& bHasFocus);
    void* GetVersionString();
    _Script_CoreUObject::Transform GetTrackingToWorldTransform(_Script_CoreUObject::Object* WorldContext);
    void GetTrackingSensorParameters(_Script_CoreUObject::Vector& Origin, _Script_CoreUObject::Rotator& Rotation, float& LeftFOV, float& RightFOV, float& TopFOV, float& BottomFOV, float& Distance, float& NearPlane, float& FarPlane, bool& IsActive, int32_t Index);
    void* GetTrackingOrigin();
    float GetScreenPercentage();
    void GetPositionalTrackingCameraParameters(_Script_CoreUObject::Vector& CameraOrigin, _Script_CoreUObject::Rotator& CameraRotation, float& HFOV, float& VFOV, float& CameraDistance, float& NearPlane, float& FarPlane);
    float GetPixelDensity();
    void GetOrientationAndPosition(_Script_CoreUObject::Rotator& DeviceRotation, _Script_CoreUObject::Vector& DevicePosition);
    int32_t GetNumOfTrackingSensors();
    void GetMotionControllerData(_Script_CoreUObject::Object* WorldContext, void* hand, _Script_HeadMountedDisplay::XRMotionControllerData& MotionControllerData);
    void* GetHMDWornState();
    void* GetHMDDeviceName();
    void GetHMDData(_Script_CoreUObject::Object* WorldContext, _Script_HeadMountedDisplay::XRHMDData& HMDData);
    void GetDeviceWorldPose(_Script_CoreUObject::Object* WorldContext, _Script_HeadMountedDisplay::XRDeviceId& XRDeviceId, bool& bIsTracked, _Script_CoreUObject::Rotator& Orientation, bool& bHasPositionalTracking, _Script_CoreUObject::Vector& Position);
    void GetDevicePose(_Script_HeadMountedDisplay::XRDeviceId& XRDeviceId, bool& bIsTracked, _Script_CoreUObject::Rotator& Orientation, bool& bHasPositionalTracking, _Script_CoreUObject::Vector& Position);
    bool GetControllerTransformForTime(_Script_CoreUObject::Object* WorldContext, int32_t ControllerIndex, void* MotionSource, _Script_CoreUObject::Timespan Time, bool& bTimeWasUsed, _Script_CoreUObject::Rotator& Orientation, _Script_CoreUObject::Vector& Position, bool& bProvidedLinearVelocity, _Script_CoreUObject::Vector& LinearVelocity, bool& bProvidedAngularVelocity, _Script_CoreUObject::Vector& AngularVelocityRadPerSec);
    void* EnumerateTrackedDevices(void* SystemId, void* DeviceType);
    void EnableLowPersistenceMode(bool bEnable);
    bool EnableHMD(bool bEnable);
    void DisconnectRemoteXRDevice();
    void* ConnectRemoteXRDevice(void* IpAddress, int32_t BitRate);
    bool ConfigureGestures(_Script_HeadMountedDisplay::XRGestureConfig& GestureConfig);
    void ClearXRTimedInputActionDelegate(void*& ActionPath);
    void CalibrateExternalTrackingToHMD(_Script_CoreUObject::Transform& ExternalTrackingTransform);
}; // Size: 0x28
#pragma pack(pop)
}
