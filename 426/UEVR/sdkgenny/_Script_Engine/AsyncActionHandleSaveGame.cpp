#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "AsyncActionHandleSaveGame.hpp"
#include "BlueprintAsyncActionBase.hpp"
#include "SaveGame.hpp"
void* _Script_Engine::AsyncActionHandleSaveGame::get_Completed() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_Engine::SaveGame*& _Script_Engine::AsyncActionHandleSaveGame::get_SaveGameObject() {
    return *(_Script_Engine::SaveGame**)((uintptr_t)this + 0x60);
}
_Script_CoreUObject::Class* _Script_Engine::AsyncActionHandleSaveGame::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AsyncActionHandleSaveGame");
    return result;
}
_Script_Engine::AsyncActionHandleSaveGame* _Script_Engine::AsyncActionHandleSaveGame::AsyncSaveGameToSlot(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SaveGame* SaveGameObject, void* SlotName, int32_t UserIndex) {
    return;
}
_Script_Engine::AsyncActionHandleSaveGame* _Script_Engine::AsyncActionHandleSaveGame::AsyncLoadGameFromSlot(_Script_CoreUObject::Object* WorldContextObject, void* SlotName, int32_t UserIndex) {
    return;
}
