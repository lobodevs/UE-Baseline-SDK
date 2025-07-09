#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneEvaluationFieldEntityKey.hpp"
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneEvaluationFieldEntityKey::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneEvaluationFieldEntityKey");
    return result;
}
void* _Script_MovieScene::MovieSceneEvaluationFieldEntityKey::get_EntityOwner() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_MovieScene::MovieSceneEvaluationFieldEntityKey::get_EntityID() {
    return (void*)((uintptr_t)this + 0x8);
}
