#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "MovieSceneEntitySystemLinker.hpp"
#include "MovieSceneSequenceTickManager.hpp"
void* _Script_MovieScene::MovieSceneSequenceTickManager::get_SequenceActors() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_MovieScene::MovieSceneEntitySystemLinker*& _Script_MovieScene::MovieSceneSequenceTickManager::get_Linker() {
    return *(_Script_MovieScene::MovieSceneEntitySystemLinker**)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneSequenceTickManager::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieScene.MovieSceneSequenceTickManager");
    return result;
}
