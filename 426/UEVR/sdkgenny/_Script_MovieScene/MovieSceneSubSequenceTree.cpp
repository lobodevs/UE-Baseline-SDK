#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneSubSequenceTree.hpp"
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneSubSequenceTree::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneSubSequenceTree");
    return result;
}
