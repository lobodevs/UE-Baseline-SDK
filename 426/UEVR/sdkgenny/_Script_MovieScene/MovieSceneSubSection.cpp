#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneSection.hpp"
#include "MovieSceneSequence.hpp"
#include "MovieSceneSubSection.hpp"
void* _Script_MovieScene::MovieSceneSubSection::get_Parameters() {
    return (void*)((uintptr_t)this + 0xe8);
}
float& _Script_MovieScene::MovieSceneSubSection::get_StartOffset() {
    return *(float*)((uintptr_t)this + 0x10c);
}
float& _Script_MovieScene::MovieSceneSubSection::get_TimeScale() {
    return *(float*)((uintptr_t)this + 0x110);
}
void* _Script_MovieScene::MovieSceneSubSection::get_TargetPathToRecordTo() {
    return (void*)((uintptr_t)this + 0x150);
}
float& _Script_MovieScene::MovieSceneSubSection::get_PrerollTime0() {
    return *(float*)((uintptr_t)this + 0x114);
}
void* _Script_MovieScene::MovieSceneSubSection::get_TargetSequenceName() {
    return (void*)((uintptr_t)this + 0x140);
}
_Script_MovieScene::MovieSceneSequence*& _Script_MovieScene::MovieSceneSubSection::get_SubSequence() {
    return *(_Script_MovieScene::MovieSceneSequence**)((uintptr_t)this + 0x118);
}
void* _Script_MovieScene::MovieSceneSubSection::get_ActorToRecord() {
    return (void*)((uintptr_t)this + 0x120);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneSubSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieScene.MovieSceneSubSection");
    return result;
}
void _Script_MovieScene::MovieSceneSubSection::SetSequence(_Script_MovieScene::MovieSceneSequence* Sequence) {
    return;
}
_Script_MovieScene::MovieSceneSequence* _Script_MovieScene::MovieSceneSubSection::GetSequence() {
    return;
}
