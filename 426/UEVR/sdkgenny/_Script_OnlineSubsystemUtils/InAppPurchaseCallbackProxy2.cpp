#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
#include "InAppPurchaseCallbackProxy2.hpp"
#include "InAppPurchaseProductRequest2.hpp"
void* _Script_OnlineSubsystemUtils::InAppPurchaseCallbackProxy2::get_OnSuccess() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_OnlineSubsystemUtils::InAppPurchaseCallbackProxy2* _Script_OnlineSubsystemUtils::InAppPurchaseCallbackProxy2::CreateProxyObjectForInAppPurchaseQueryOwned(_Script_Engine::PlayerController* PlayerController) {
    return;
}
void* _Script_OnlineSubsystemUtils::InAppPurchaseCallbackProxy2::get_OnFailure() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_OnlineSubsystemUtils::InAppPurchaseCallbackProxy2::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy2");
    return result;
}
_Script_OnlineSubsystemUtils::InAppPurchaseCallbackProxy2* _Script_OnlineSubsystemUtils::InAppPurchaseCallbackProxy2::CreateProxyObjectForInAppPurchaseUnprocessedPurchases(_Script_Engine::PlayerController* PlayerController) {
    return;
}
_Script_OnlineSubsystemUtils::InAppPurchaseCallbackProxy2* _Script_OnlineSubsystemUtils::InAppPurchaseCallbackProxy2::CreateProxyObjectForInAppPurchase(_Script_Engine::PlayerController* PlayerController, _Script_OnlineSubsystemUtils::InAppPurchaseProductRequest2& ProductRequest) {
    return;
}
