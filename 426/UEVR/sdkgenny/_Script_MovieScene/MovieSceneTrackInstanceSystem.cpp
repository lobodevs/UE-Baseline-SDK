#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneEntitySystem.hpp"
#include "MovieSceneTrackInstanceInstantiator.hpp"
#include "MovieSceneTrackInstanceSystem.hpp"
_Script_MovieScene::MovieSceneTrackInstanceInstantiator*& _Script_MovieScene::MovieSceneTrackInstanceSystem::get_Instantiator() {
    return *(_Script_MovieScene::MovieSceneTrackInstanceInstantiator**)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneTrackInstanceSystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieScene.MovieSceneTrackInstanceSystem");
    return result;
}
