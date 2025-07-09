#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "MovieSceneCompiledDataManager.hpp"
void* _Script_MovieScene::MovieSceneCompiledDataManager::get_EntityComponentFields() {
    return (void*)((uintptr_t)this + 0x1c8);
}
void* _Script_MovieScene::MovieSceneCompiledDataManager::get_Hierarchies() {
    return (void*)((uintptr_t)this + 0xd8);
}
void* _Script_MovieScene::MovieSceneCompiledDataManager::get_TrackTemplates() {
    return (void*)((uintptr_t)this + 0x128);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneCompiledDataManager::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieScene.MovieSceneCompiledDataManager");
    return result;
}
void* _Script_MovieScene::MovieSceneCompiledDataManager::get_TrackTemplateFields() {
    return (void*)((uintptr_t)this + 0x178);
}
