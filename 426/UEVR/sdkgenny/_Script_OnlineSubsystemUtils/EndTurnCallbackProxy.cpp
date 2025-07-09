#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\OnlineBlueprintCallProxyBase.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
#include "EndTurnCallbackProxy.hpp"
void* _Script_OnlineSubsystemUtils::EndTurnCallbackProxy::get_OnSuccess() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_OnlineSubsystemUtils::EndTurnCallbackProxy* _Script_OnlineSubsystemUtils::EndTurnCallbackProxy::EndTurn(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::PlayerController* PlayerController, void* MatchID, void* TurnBasedMatchInterface) {
    return;
}
void* _Script_OnlineSubsystemUtils::EndTurnCallbackProxy::get_OnFailure() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_OnlineSubsystemUtils::EndTurnCallbackProxy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/OnlineSubsystemUtils.EndTurnCallbackProxy");
    return result;
}
