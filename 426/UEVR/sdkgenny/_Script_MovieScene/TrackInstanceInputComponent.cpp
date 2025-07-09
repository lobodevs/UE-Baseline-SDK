#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneSection.hpp"
#include "TrackInstanceInputComponent.hpp"
int32_t& _Script_MovieScene::TrackInstanceInputComponent::get_OutputIndex() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
_Script_MovieScene::MovieSceneSection*& _Script_MovieScene::TrackInstanceInputComponent::get_Section() {
    return *(_Script_MovieScene::MovieSceneSection**)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_MovieScene::TrackInstanceInputComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.TrackInstanceInputComponent");
    return result;
}
