#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneEntitySystem.hpp"
#include "MovieSceneEntitySystemGraphNode.hpp"
_Script_MovieScene::MovieSceneEntitySystem*& _Script_MovieScene::MovieSceneEntitySystemGraphNode::get_System() {
    return *(_Script_MovieScene::MovieSceneEntitySystem**)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneEntitySystemGraphNode::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneEntitySystemGraphNode");
    return result;
}
