#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "SteamVRChaperoneComponent.hpp"
void* _Script_SteamVR::SteamVRChaperoneComponent::GetBounds() {
    return;
}
void* _Script_SteamVR::SteamVRChaperoneComponent::get_OnLeaveBounds() {
    return (void*)((uintptr_t)this + 0xb0);
}
void* _Script_SteamVR::SteamVRChaperoneComponent::get_OnReturnToBounds() {
    return (void*)((uintptr_t)this + 0xc0);
}
_Script_CoreUObject::Class* _Script_SteamVR::SteamVRChaperoneComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamVR.SteamVRChaperoneComponent");
    return result;
}
