#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNode_Base.hpp"
#include "AnimNode_SteamVRSetWristTransform.hpp"
void* _Script_SteamVRInputDevice::AnimNode_SteamVRSetWristTransform::get_HandSkeleton() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_SteamVRInputDevice::AnimNode_SteamVRSetWristTransform::get_ReferencePose() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_SteamVRInputDevice::AnimNode_SteamVRSetWristTransform::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamVRInputDevice.AnimNode_SteamVRSetWristTransform");
    return result;
}
void* _Script_SteamVRInputDevice::AnimNode_SteamVRSetWristTransform::get_TargetPose() {
    return (void*)((uintptr_t)this + 0x28);
}
