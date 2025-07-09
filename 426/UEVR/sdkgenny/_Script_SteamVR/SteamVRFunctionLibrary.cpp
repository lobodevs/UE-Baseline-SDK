#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "SteamVRFunctionLibrary.hpp"
bool _Script_SteamVR::SteamVRFunctionLibrary::GetTrackedDevicePositionAndOrientation(int32_t DeviceID, _Script_CoreUObject::Vector& OutPosition, _Script_CoreUObject::Rotator& OutOrientation) {
    return;
}
_Script_CoreUObject::Class* _Script_SteamVR::SteamVRFunctionLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamVR.SteamVRFunctionLibrary");
    return result;
}
void _Script_SteamVR::SteamVRFunctionLibrary::GetValidTrackedDeviceIds(void* DeviceType, void*& OutTrackedDeviceIds) {
    return;
}
bool _Script_SteamVR::SteamVRFunctionLibrary::GetHandPositionAndOrientation(int32_t ControllerIndex, void* hand, _Script_CoreUObject::Vector& OutPosition, _Script_CoreUObject::Rotator& OutOrientation) {
    return;
}
