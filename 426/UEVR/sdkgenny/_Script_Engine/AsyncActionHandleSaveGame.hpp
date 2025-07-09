#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "BlueprintAsyncActionBase.hpp"
namespace _Script_Engine {
struct SaveGame;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AsyncActionHandleSaveGame : public BlueprintAsyncActionBase {
    private: char pad_30[0x38]; public:
    void* get_Completed();
    _Script_Engine::SaveGame*& get_SaveGameObject();
    static _Script_CoreUObject::Class* static_class();
    _Script_Engine::AsyncActionHandleSaveGame* AsyncSaveGameToSlot(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SaveGame* SaveGameObject, void* SlotName, int32_t UserIndex);
    _Script_Engine::AsyncActionHandleSaveGame* AsyncLoadGameFromSlot(_Script_CoreUObject::Object* WorldContextObject, void* SlotName, int32_t UserIndex);
}; // Size: 0x68
#pragma pack(pop)
}
