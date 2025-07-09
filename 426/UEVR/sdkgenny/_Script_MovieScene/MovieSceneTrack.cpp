#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneSignedObject.hpp"
#include "MovieSceneTrack.hpp"
void* _Script_MovieScene::MovieSceneTrack::get_EvaluationField() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_MovieScene::MovieSceneTrack::get_EvalOptions() {
    return (void*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieScene.MovieSceneTrack");
    return result;
}
bool _Script_MovieScene::MovieSceneTrack::get_bIsEvalDisabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x55 + 0)) & 1 != 0;
}
void _Script_MovieScene::MovieSceneTrack::set_bIsEvalDisabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x55 + 0);
    *(uint8_t*)((uintptr_t)this + 0x55 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_MovieScene::MovieSceneTrack::get_EvaluationFieldGuid() {
    return (void*)((uintptr_t)this + 0x58);
}
