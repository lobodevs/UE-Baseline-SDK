#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNode_Base.hpp"
#include "AnimNode_SteamVRInputAnimPose.hpp"
void* _Script_SteamVRInputDevice::AnimNode_SteamVRInputAnimPose::get_MotionRange() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_SteamVRInputDevice::AnimNode_SteamVRInputAnimPose::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamVRInputDevice.AnimNode_SteamVRInputAnimPose");
    return result;
}
void* _Script_SteamVRInputDevice::AnimNode_SteamVRInputAnimPose::get_hand() {
    return (void*)((uintptr_t)this + 0x11);
}
void* _Script_SteamVRInputDevice::AnimNode_SteamVRInputAnimPose::get_HandSkeleton() {
    return (void*)((uintptr_t)this + 0x12);
}
bool _Script_SteamVRInputDevice::AnimNode_SteamVRInputAnimPose::get_Mirror() {
    return (*(uint8_t*)((uintptr_t)this + 0x13 + 0)) & 1 != 0;
}
void* _Script_SteamVRInputDevice::AnimNode_SteamVRInputAnimPose::get_SteamVRSkeletalTransform() {
    return (void*)((uintptr_t)this + 0x20);
}
void _Script_SteamVRInputDevice::AnimNode_SteamVRInputAnimPose::set_Mirror(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x13 + 0);
    *(uint8_t*)((uintptr_t)this + 0x13 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SteamVRInputDevice::AnimNode_SteamVRInputAnimPose::get_UE4RetargettingRefs() {
    return (void*)((uintptr_t)this + 0x5f0);
}
