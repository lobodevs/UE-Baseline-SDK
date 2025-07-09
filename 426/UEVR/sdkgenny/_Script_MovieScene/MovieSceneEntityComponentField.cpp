#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneEntityComponentField.hpp"
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneEntityComponentField::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneEntityComponentField");
    return result;
}
void* _Script_MovieScene::MovieSceneEntityComponentField::get_PersistentEntityTree() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_MovieScene::MovieSceneEntityComponentField::get_EntityMetaData() {
    return (void*)((uintptr_t)this + 0xd0);
}
void* _Script_MovieScene::MovieSceneEntityComponentField::get_Entities() {
    return (void*)((uintptr_t)this + 0xc0);
}
void* _Script_MovieScene::MovieSceneEntityComponentField::get_OneShotEntityTree() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_MovieScene::MovieSceneEntityComponentField::get_SharedMetaData() {
    return (void*)((uintptr_t)this + 0xe0);
}
