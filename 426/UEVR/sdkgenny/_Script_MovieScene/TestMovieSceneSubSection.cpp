#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneSubSection.hpp"
#include "TestMovieSceneSubSection.hpp"
_Script_CoreUObject::Class* _Script_MovieScene::TestMovieSceneSubSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieScene.TestMovieSceneSubSection");
    return result;
}
