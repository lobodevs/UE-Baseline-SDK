#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
#include "InAppPurchaseQueryCallbackProxy2.hpp"
void* _Script_OnlineSubsystemUtils::InAppPurchaseQueryCallbackProxy2::get_OnSuccess() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_OnlineSubsystemUtils::InAppPurchaseQueryCallbackProxy2::get_OnFailure() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_OnlineSubsystemUtils::InAppPurchaseQueryCallbackProxy2::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2");
    return result;
}
_Script_OnlineSubsystemUtils::InAppPurchaseQueryCallbackProxy2* _Script_OnlineSubsystemUtils::InAppPurchaseQueryCallbackProxy2::CreateProxyObjectForInAppPurchaseQuery(_Script_Engine::PlayerController* PlayerController, void*& ProductIdentifiers) {
    return;
}
