#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneFieldEntry_EvaluationTrack.hpp"
void* _Script_MovieScene::MovieSceneFieldEntry_EvaluationTrack::get_TrackPtr() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_MovieScene::MovieSceneFieldEntry_EvaluationTrack::get_NumChildren() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneFieldEntry_EvaluationTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneFieldEntry_EvaluationTrack");
    return result;
}
