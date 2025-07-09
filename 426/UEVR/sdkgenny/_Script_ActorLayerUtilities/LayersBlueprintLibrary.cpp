#include "..\FUObjectArray.hpp"
#include "ActorLayer.hpp"
#include "LayersBlueprintLibrary.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
_Script_CoreUObject::Class* _Script_ActorLayerUtilities::LayersBlueprintLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ActorLayerUtilities.LayersBlueprintLibrary");
    return result;
}
void _Script_ActorLayerUtilities::LayersBlueprintLibrary::RemoveActorFromLayer(_Script_Engine::Actor* InActor, _Script_ActorLayerUtilities::ActorLayer& Layer) {
    return;
}
void* _Script_ActorLayerUtilities::LayersBlueprintLibrary::GetActors(_Script_CoreUObject::Object* WorldContextObject, _Script_ActorLayerUtilities::ActorLayer& ActorLayer) {
    return;
}
void _Script_ActorLayerUtilities::LayersBlueprintLibrary::AddActorToLayer(_Script_Engine::Actor* InActor, _Script_ActorLayerUtilities::ActorLayer& Layer) {
    return;
}
