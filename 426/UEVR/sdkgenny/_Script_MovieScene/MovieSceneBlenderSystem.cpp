#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneBlenderSystem.hpp"
#include "MovieSceneEntitySystem.hpp"
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneBlenderSystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieScene.MovieSceneBlenderSystem");
    return result;
}
