#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneEntityInstantiatorSystem.hpp"
#include "MovieSceneTrackInstanceInstantiator.hpp"
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneTrackInstanceInstantiator::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieScene.MovieSceneTrackInstanceInstantiator");
    return result;
}
