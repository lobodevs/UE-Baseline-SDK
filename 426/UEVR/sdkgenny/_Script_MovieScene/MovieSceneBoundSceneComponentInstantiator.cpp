#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneBoundSceneComponentInstantiator.hpp"
#include "MovieSceneEntityInstantiatorSystem.hpp"
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneBoundSceneComponentInstantiator::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieScene.MovieSceneBoundSceneComponentInstantiator");
    return result;
}
