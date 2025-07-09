#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "SteamVRAction.hpp"
#include "SteamVRActionSet.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SteamVRInputDevice {
struct SteamVRInputOriginInfo;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Script_SteamVRInputDevice {
struct SteamVRFingerSplays;
}
namespace _Script_CoreUObject {
struct Rotator;
}
namespace _Script_SteamVRInputDevice {
struct SteamVRSkeletonTransform;
}
namespace _Script_SteamVRInputDevice {
struct SteamVRFingerCurls;
}
namespace _Script_SteamVRInputDevice {
#pragma pack(push, 1)
struct SteamVRInputDeviceFunctionLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void ShowSteamVR_ActionOrigin(_Script_SteamVRInputDevice::SteamVRAction SteamVRAction, _Script_SteamVRInputDevice::SteamVRActionSet SteamVRActionSet);
    void ShowAllSteamVR_ActionOrigins();
    float SetSteamVR_GlobalPredictedSecondsFromNow(float NewValue);
    void SetPoseSource(bool bUseSkeletonPose);
    void SetCurlsAndSplaysState(bool NewLeftHandState, bool NewRightHandState);
    bool ResetSeatedPosition();
    void PlaySteamVR_HapticFeedback(void* hand, float StartSecondsFromNow, float DurationSeconds, float Frequency, float Amplitude);
    float GetUserIPD();
    bool GetSteamVR_OriginTrackedDeviceInfo(_Script_SteamVRInputDevice::SteamVRAction SteamVRAction, _Script_SteamVRInputDevice::SteamVRInputOriginInfo& InputOriginInfo);
    void GetSteamVR_OriginLocalizedName(_Script_SteamVRInputDevice::SteamVRAction SteamVRAction, void* LocalizedParts, void*& OriginLocalizedName);
    void* GetSteamVR_InputBindingInfo(_Script_SteamVRInputDevice::SteamVRAction SteamVRActionHandle);
    bool GetSteamVR_HandPoseRelativeToNow(_Script_CoreUObject::Vector& Position, _Script_CoreUObject::Rotator& Orientation, void* hand, float PredictedSecondsFromNow);
    float GetSteamVR_GlobalPredictedSecondsFromNow();
    void GetSteamVR_ActionSetArray(void*& SteamVRActionSets);
    void GetSteamVR_ActionArray(void*& SteamVRActions);
    void GetSkeletalTransform(_Script_SteamVRInputDevice::SteamVRSkeletonTransform& LeftHand, _Script_SteamVRInputDevice::SteamVRSkeletonTransform& RightHand, bool bWithController);
    void GetSkeletalState(bool& LeftHandState, bool& RightHandState);
    void GetRightHandPoseData(_Script_CoreUObject::Vector& Position, _Script_CoreUObject::Rotator& Orientation, _Script_CoreUObject::Vector& AngularVelocity, _Script_CoreUObject::Vector& Velocity);
    void GetPoseSource(bool& bUsingSkeletonPose);
    void GetLeftHandPoseData(_Script_CoreUObject::Vector& Position, _Script_CoreUObject::Rotator& Orientation, _Script_CoreUObject::Vector& AngularVelocity, _Script_CoreUObject::Vector& Velocity);
    void GetFingerCurlsAndSplays(void* hand, _Script_SteamVRInputDevice::SteamVRFingerCurls& FingerCurls, _Script_SteamVRInputDevice::SteamVRFingerSplays& FingerSplays, void* SummaryDataType);
    void GetCurlsAndSplaysState(bool& LeftHandState, bool& RightHandState);
    void GetControllerFidelity(void*& LeftControllerFidelity, void*& RightControllerFidelity);
    void FindSteamVR_OriginTrackedDeviceInfo(void* ActionName, bool& bResult, _Script_SteamVRInputDevice::SteamVRInputOriginInfo& InputOriginInfo, void* ActionSet);
    void* FindSteamVR_InputBindingInfo(void* ActionName, void* ActionSet);
    bool FindSteamVR_ActionOrigin(void* ActionName, void* ActionSet);
    void FindSteamVR_Action(void* ActionName, bool& bResult, _Script_SteamVRInputDevice::SteamVRAction& FoundAction, _Script_SteamVRInputDevice::SteamVRActionSet& FoundActionSet, void* ActionSet);
}; // Size: 0x28
#pragma pack(pop)
}
