#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "GameInstance.hpp"
#include "OnlineSession.hpp"
void _Script_Engine::GameInstance::ReceiveInit() {
    return;
}
void* _Script_Engine::GameInstance::get_LocalPlayers() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_Engine::GameInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.GameInstance");
    return result;
}
_Script_Engine::OnlineSession*& _Script_Engine::GameInstance::get_OnlineSession() {
    return *(_Script_Engine::OnlineSession**)((uintptr_t)this + 0x48);
}
void _Script_Engine::GameInstance::ReceiveShutdown() {
    return;
}
void* _Script_Engine::GameInstance::get_OnPawnControllerChangedDelegates() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_Engine::GameInstance::get_ReferencedObjects() {
    return (void*)((uintptr_t)this + 0x50);
}
void _Script_Engine::GameInstance::HandleTravelError(void* FailureType) {
    return;
}
void _Script_Engine::GameInstance::HandleNetworkError(void* FailureType, bool bIsServer) {
    return;
}
void _Script_Engine::GameInstance::DebugRemovePlayer(int32_t ControllerId) {
    return;
}
void _Script_Engine::GameInstance::DebugCreatePlayer(int32_t ControllerId) {
    return;
}
