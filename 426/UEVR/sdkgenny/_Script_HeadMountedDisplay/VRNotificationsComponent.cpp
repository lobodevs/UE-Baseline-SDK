#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "VRNotificationsComponent.hpp"
void* _Script_HeadMountedDisplay::VRNotificationsComponent::get_HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate() {
    return (void*)((uintptr_t)this + 0xb0);
}
void* _Script_HeadMountedDisplay::VRNotificationsComponent::get_HMDConnectCanceledDelegate() {
    return (void*)((uintptr_t)this + 0x100);
}
void* _Script_HeadMountedDisplay::VRNotificationsComponent::get_HMDTrackingInitializedDelegate() {
    return (void*)((uintptr_t)this + 0xc0);
}
void* _Script_HeadMountedDisplay::VRNotificationsComponent::get_HMDReconnectedDelegate() {
    return (void*)((uintptr_t)this + 0xf0);
}
void* _Script_HeadMountedDisplay::VRNotificationsComponent::get_HMDRecenteredDelegate() {
    return (void*)((uintptr_t)this + 0xd0);
}
void* _Script_HeadMountedDisplay::VRNotificationsComponent::get_HMDRemovedFromHeadDelegate() {
    return (void*)((uintptr_t)this + 0x120);
}
void* _Script_HeadMountedDisplay::VRNotificationsComponent::get_HMDLostDelegate() {
    return (void*)((uintptr_t)this + 0xe0);
}
void* _Script_HeadMountedDisplay::VRNotificationsComponent::get_HMDPutOnHeadDelegate() {
    return (void*)((uintptr_t)this + 0x110);
}
void* _Script_HeadMountedDisplay::VRNotificationsComponent::get_VRControllerRecenteredDelegate() {
    return (void*)((uintptr_t)this + 0x130);
}
_Script_CoreUObject::Class* _Script_HeadMountedDisplay::VRNotificationsComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HeadMountedDisplay.VRNotificationsComponent");
    return result;
}
