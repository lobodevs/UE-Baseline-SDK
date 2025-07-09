#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "OnlineBeaconHostObject.hpp"
void* _Script_OnlineSubsystemUtils::OnlineBeaconHostObject::get_BeaconTypeName() {
    return (void*)((uintptr_t)this + 0x220);
}
void* _Script_OnlineSubsystemUtils::OnlineBeaconHostObject::get_ClientBeaconActorClass() {
    return (void*)((uintptr_t)this + 0x230);
}
void* _Script_OnlineSubsystemUtils::OnlineBeaconHostObject::get_ClientActors() {
    return (void*)((uintptr_t)this + 0x238);
}
_Script_CoreUObject::Class* _Script_OnlineSubsystemUtils::OnlineBeaconHostObject::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/OnlineSubsystemUtils.OnlineBeaconHostObject");
    return result;
}
