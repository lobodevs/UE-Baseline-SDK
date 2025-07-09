#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneEntitySystem.hpp"
#include "MovieSceneSpawnablesSystem.hpp"
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneSpawnablesSystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieScene.MovieSceneSpawnablesSystem");
    return result;
}
