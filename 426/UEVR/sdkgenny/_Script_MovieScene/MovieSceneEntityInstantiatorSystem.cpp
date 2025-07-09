#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneEntityInstantiatorSystem.hpp"
#include "MovieSceneEntitySystem.hpp"
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneEntityInstantiatorSystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieScene.MovieSceneEntityInstantiatorSystem");
    return result;
}
