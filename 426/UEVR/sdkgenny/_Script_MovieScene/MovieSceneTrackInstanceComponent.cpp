#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneSection.hpp"
#include "MovieSceneTrackInstanceComponent.hpp"
_Script_MovieScene::MovieSceneSection*& _Script_MovieScene::MovieSceneTrackInstanceComponent::get_Owner() {
    return *(_Script_MovieScene::MovieSceneSection**)((uintptr_t)this + 0x0);
}
void* _Script_MovieScene::MovieSceneTrackInstanceComponent::get_TrackInstanceClass() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneTrackInstanceComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneTrackInstanceComponent");
    return result;
}
