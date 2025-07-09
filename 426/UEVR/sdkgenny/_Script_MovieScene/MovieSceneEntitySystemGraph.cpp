#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneEntitySystemGraph.hpp"
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneEntitySystemGraph::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneEntitySystemGraph");
    return result;
}
void* _Script_MovieScene::MovieSceneEntitySystemGraph::get_Nodes() {
    return (void*)((uintptr_t)this + 0x80);
}
