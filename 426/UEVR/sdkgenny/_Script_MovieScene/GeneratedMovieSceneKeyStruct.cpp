#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GeneratedMovieSceneKeyStruct.hpp"
_Script_CoreUObject::Class* _Script_MovieScene::GeneratedMovieSceneKeyStruct::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.GeneratedMovieSceneKeyStruct");
    return result;
}
