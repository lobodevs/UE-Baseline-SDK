#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "MovieSceneEntitySystemLinker.hpp"
void* _Script_MovieScene::MovieSceneEntitySystemLinker::get_SystemGraph() {
    return (void*)((uintptr_t)this + 0x238);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneEntitySystemLinker::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieScene.MovieSceneEntitySystemLinker");
    return result;
}
