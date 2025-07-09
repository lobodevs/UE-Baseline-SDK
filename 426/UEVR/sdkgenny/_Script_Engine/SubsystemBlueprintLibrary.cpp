#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "BlueprintFunctionLibrary.hpp"
#include "EngineSubsystem.hpp"
#include "GameInstanceSubsystem.hpp"
#include "LocalPlayerSubsystem.hpp"
#include "PlayerController.hpp"
#include "SubsystemBlueprintLibrary.hpp"
#include "WorldSubsystem.hpp"
_Script_CoreUObject::Class* _Script_Engine::SubsystemBlueprintLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SubsystemBlueprintLibrary");
    return result;
}
_Script_Engine::WorldSubsystem* _Script_Engine::SubsystemBlueprintLibrary::GetWorldSubsystem(_Script_CoreUObject::Object* ContextObject, void* Class) {
    return;
}
_Script_Engine::LocalPlayerSubsystem* _Script_Engine::SubsystemBlueprintLibrary::GetLocalPlayerSubSystemFromPlayerController(_Script_Engine::PlayerController* PlayerController, void* Class) {
    return;
}
_Script_Engine::LocalPlayerSubsystem* _Script_Engine::SubsystemBlueprintLibrary::GetLocalPlayerSubsystem(_Script_CoreUObject::Object* ContextObject, void* Class) {
    return;
}
_Script_Engine::GameInstanceSubsystem* _Script_Engine::SubsystemBlueprintLibrary::GetGameInstanceSubsystem(_Script_CoreUObject::Object* ContextObject, void* Class) {
    return;
}
_Script_Engine::EngineSubsystem* _Script_Engine::SubsystemBlueprintLibrary::GetEngineSubsystem(void* Class) {
    return;
}
