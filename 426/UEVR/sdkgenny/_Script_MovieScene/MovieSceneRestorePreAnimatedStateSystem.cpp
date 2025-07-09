#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneEntityInstantiatorSystem.hpp"
#include "MovieSceneRestorePreAnimatedStateSystem.hpp"
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneRestorePreAnimatedStateSystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieScene.MovieSceneRestorePreAnimatedStateSystem");
    return result;
}
