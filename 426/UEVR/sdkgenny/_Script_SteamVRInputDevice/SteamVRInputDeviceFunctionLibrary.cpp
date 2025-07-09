#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "SteamVRAction.hpp"
#include "SteamVRActionSet.hpp"
#include "SteamVRFingerCurls.hpp"
#include "SteamVRFingerSplays.hpp"
#include "SteamVRInputDeviceFunctionLibrary.hpp"
#include "SteamVRInputOriginInfo.hpp"
#include "SteamVRSkeletonTransform.hpp"
_Script_CoreUObject::Class* _Script_SteamVRInputDevice::SteamVRInputDeviceFunctionLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary");
    return result;
}
bool _Script_SteamVRInputDevice::SteamVRInputDeviceFunctionLibrary::ResetSeatedPosition() {
    return;
}
void _Script_SteamVRInputDevice::SteamVRInputDeviceFunctionLibrary::ShowSteamVR_ActionOrigin(_Script_SteamVRInputDevice::SteamVRAction SteamVRAction, _Script_SteamVRInputDevice::SteamVRActionSet SteamVRActionSet) {
    return;
}
void _Script_SteamVRInputDevice::SteamVRInputDeviceFunctionLibrary::SetPoseSource(bool bUseSkeletonPose) {
    return;
}
void _Script_SteamVRInputDevice::SteamVRInputDeviceFunctionLibrary::FindSteamVR_Action(void* ActionName, bool& bResult, _Script_SteamVRInputDevice::SteamVRAction& FoundAction, _Script_SteamVRInputDevice::SteamVRActionSet& FoundActionSet, void* ActionSet) {
    return;
}
void _Script_SteamVRInputDevice::SteamVRInputDeviceFunctionLibrary::ShowAllSteamVR_ActionOrigins() {
    return;
}
void _Script_SteamVRInputDevice::SteamVRInputDeviceFunctionLibrary::PlaySteamVR_HapticFeedback(void* hand, float StartSecondsFromNow, float DurationSeconds, float Frequency, float Amplitude) {
    return;
}
float _Script_SteamVRInputDevice::SteamVRInputDeviceFunctionLibrary::SetSteamVR_GlobalPredictedSecondsFromNow(float NewValue) {
    return;
}
void _Script_SteamVRInputDevice::SteamVRInputDeviceFunctionLibrary::SetCurlsAndSplaysState(bool NewLeftHandState, bool NewRightHandState) {
    return;
}
float _Script_SteamVRInputDevice::SteamVRInputDeviceFunctionLibrary::GetUserIPD() {
    return;
}
bool _Script_SteamVRInputDevice::SteamVRInputDeviceFunctionLibrary::GetSteamVR_OriginTrackedDeviceInfo(_Script_SteamVRInputDevice::SteamVRAction SteamVRAction, _Script_SteamVRInputDevice::SteamVRInputOriginInfo& InputOriginInfo) {
    return;
}
void _Script_SteamVRInputDevice::SteamVRInputDeviceFunctionLibrary::GetSteamVR_OriginLocalizedName(_Script_SteamVRInputDevice::SteamVRAction SteamVRAction, void* LocalizedParts, void*& OriginLocalizedName) {
    return;
}
void* _Script_SteamVRInputDevice::SteamVRInputDeviceFunctionLibrary::GetSteamVR_InputBindingInfo(_Script_SteamVRInputDevice::SteamVRAction SteamVRActionHandle) {
    return;
}
bool _Script_SteamVRInputDevice::SteamVRInputDeviceFunctionLibrary::GetSteamVR_HandPoseRelativeToNow(_Script_CoreUObject::Vector& Position, _Script_CoreUObject::Rotator& Orientation, void* hand, float PredictedSecondsFromNow) {
    return;
}
float _Script_SteamVRInputDevice::SteamVRInputDeviceFunctionLibrary::GetSteamVR_GlobalPredictedSecondsFromNow() {
    return;
}
void _Script_SteamVRInputDevice::SteamVRInputDeviceFunctionLibrary::GetSteamVR_ActionSetArray(void*& SteamVRActionSets) {
    return;
}
void _Script_SteamVRInputDevice::SteamVRInputDeviceFunctionLibrary::GetSteamVR_ActionArray(void*& SteamVRActions) {
    return;
}
void _Script_SteamVRInputDevice::SteamVRInputDeviceFunctionLibrary::GetSkeletalTransform(_Script_SteamVRInputDevice::SteamVRSkeletonTransform& LeftHand, _Script_SteamVRInputDevice::SteamVRSkeletonTransform& RightHand, bool bWithController) {
    return;
}
void _Script_SteamVRInputDevice::SteamVRInputDeviceFunctionLibrary::GetSkeletalState(bool& LeftHandState, bool& RightHandState) {
    return;
}
void _Script_SteamVRInputDevice::SteamVRInputDeviceFunctionLibrary::GetRightHandPoseData(_Script_CoreUObject::Vector& Position, _Script_CoreUObject::Rotator& Orientation, _Script_CoreUObject::Vector& AngularVelocity, _Script_CoreUObject::Vector& Velocity) {
    return;
}
void _Script_SteamVRInputDevice::SteamVRInputDeviceFunctionLibrary::GetPoseSource(bool& bUsingSkeletonPose) {
    return;
}
void _Script_SteamVRInputDevice::SteamVRInputDeviceFunctionLibrary::GetLeftHandPoseData(_Script_CoreUObject::Vector& Position, _Script_CoreUObject::Rotator& Orientation, _Script_CoreUObject::Vector& AngularVelocity, _Script_CoreUObject::Vector& Velocity) {
    return;
}
void _Script_SteamVRInputDevice::SteamVRInputDeviceFunctionLibrary::GetFingerCurlsAndSplays(void* hand, _Script_SteamVRInputDevice::SteamVRFingerCurls& FingerCurls, _Script_SteamVRInputDevice::SteamVRFingerSplays& FingerSplays, void* SummaryDataType) {
    return;
}
void _Script_SteamVRInputDevice::SteamVRInputDeviceFunctionLibrary::GetCurlsAndSplaysState(bool& LeftHandState, bool& RightHandState) {
    return;
}
void _Script_SteamVRInputDevice::SteamVRInputDeviceFunctionLibrary::GetControllerFidelity(void*& LeftControllerFidelity, void*& RightControllerFidelity) {
    return;
}
bool _Script_SteamVRInputDevice::SteamVRInputDeviceFunctionLibrary::FindSteamVR_ActionOrigin(void* ActionName, void* ActionSet) {
    return;
}
void _Script_SteamVRInputDevice::SteamVRInputDeviceFunctionLibrary::FindSteamVR_OriginTrackedDeviceInfo(void* ActionName, bool& bResult, _Script_SteamVRInputDevice::SteamVRInputOriginInfo& InputOriginInfo, void* ActionSet) {
    return;
}
void* _Script_SteamVRInputDevice::SteamVRInputDeviceFunctionLibrary::FindSteamVR_InputBindingInfo(void* ActionName, void* ActionSet) {
    return;
}
