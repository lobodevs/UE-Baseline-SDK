#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\OnlineBlueprintCallProxyBase.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
#include "ConnectionCallbackProxy.hpp"
void* _Script_OnlineSubsystemUtils::ConnectionCallbackProxy::get_OnFailure() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_OnlineSubsystemUtils::ConnectionCallbackProxy::get_OnSuccess() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_OnlineSubsystemUtils::ConnectionCallbackProxy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/OnlineSubsystemUtils.ConnectionCallbackProxy");
    return result;
}
_Script_OnlineSubsystemUtils::ConnectionCallbackProxy* _Script_OnlineSubsystemUtils::ConnectionCallbackProxy::ConnectToService(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::PlayerController* PlayerController) {
    return;
}
