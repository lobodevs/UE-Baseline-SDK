#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GameInstance.hpp"
#include "GameViewportClient.hpp"
#include "PendingNetGame.hpp"
#include "WorldContext.hpp"
void* _Script_Engine::WorldContext::get_LastURL() {
    return (void*)((uintptr_t)this + 0xd0);
}
void* _Script_Engine::WorldContext::get_LastRemoteURL() {
    return (void*)((uintptr_t)this + 0x138);
}
_Script_Engine::PendingNetGame*& _Script_Engine::WorldContext::get_PendingNetGame() {
    return *(_Script_Engine::PendingNetGame**)((uintptr_t)this + 0x1a0);
}
_Script_Engine::GameViewportClient*& _Script_Engine::WorldContext::get_GameViewport() {
    return *(_Script_Engine::GameViewportClient**)((uintptr_t)this + 0x210);
}
void* _Script_Engine::WorldContext::get_PackagesToFullyLoad() {
    return (void*)((uintptr_t)this + 0x1a8);
}
void* _Script_Engine::WorldContext::get_LoadedLevelsForPendingMapChange() {
    return (void*)((uintptr_t)this + 0x1c8);
}
void* _Script_Engine::WorldContext::get_ObjectReferencers() {
    return (void*)((uintptr_t)this + 0x1f0);
}
void* _Script_Engine::WorldContext::get_PendingLevelStreamingStatusUpdates() {
    return (void*)((uintptr_t)this + 0x200);
}
_Script_Engine::GameInstance*& _Script_Engine::WorldContext::get_OwningGameInstance() {
    return *(_Script_Engine::GameInstance**)((uintptr_t)this + 0x218);
}
void* _Script_Engine::WorldContext::get_ActiveNetDrivers() {
    return (void*)((uintptr_t)this + 0x220);
}
_Script_CoreUObject::Class* _Script_Engine::WorldContext::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.WorldContext");
    return result;
}
