#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneChannel.hpp"
#include "MovieSceneObjectPathChannel.hpp"
void* _Script_MovieScene::MovieSceneObjectPathChannel::get_PropertyClass() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_MovieScene::MovieSceneObjectPathChannel::get_Times() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_MovieScene::MovieSceneObjectPathChannel::get_DefaultValue() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_MovieScene::MovieSceneObjectPathChannel::get_Values() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneObjectPathChannel::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneObjectPathChannel");
    return result;
}
