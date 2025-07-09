#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneEvaluationFieldEntityTree.hpp"
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneEvaluationFieldEntityTree::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneEvaluationFieldEntityTree");
    return result;
}
