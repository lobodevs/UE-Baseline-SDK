#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneSubSequenceData.hpp"
void* _Script_MovieScene::MovieSceneSubSequenceData::get_UnwarpedPlayRange() {
    return (void*)((uintptr_t)this + 0x64);
}
void* _Script_MovieScene::MovieSceneSubSequenceData::get_Sequence() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_MovieScene::MovieSceneSubSequenceData::get_RootToSequenceTransform() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_MovieScene::MovieSceneSubSequenceData::get_TickResolution() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_MovieScene::MovieSceneSubSequenceData::get_PlayRange() {
    return (void*)((uintptr_t)this + 0x44);
}
void* _Script_MovieScene::MovieSceneSubSequenceData::get_DeterministicSequenceID() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_MovieScene::MovieSceneSubSequenceData::get_FullPlayRange() {
    return (void*)((uintptr_t)this + 0x54);
}
void* _Script_MovieScene::MovieSceneSubSequenceData::get_PreRollRange() {
    return (void*)((uintptr_t)this + 0x74);
}
void* _Script_MovieScene::MovieSceneSubSequenceData::get_PostRollRange() {
    return (void*)((uintptr_t)this + 0x84);
}
void* _Script_MovieScene::MovieSceneSubSequenceData::get_HierarchicalBias() {
    return (void*)((uintptr_t)this + 0x94);
}
bool _Script_MovieScene::MovieSceneSubSequenceData::get_bHasHierarchicalEasing() {
    return (*(uint8_t*)((uintptr_t)this + 0x96 + 0)) & 1 != 0;
}
void _Script_MovieScene::MovieSceneSubSequenceData::set_bHasHierarchicalEasing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x96 + 0);
    *(uint8_t*)((uintptr_t)this + 0x96 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_MovieScene::MovieSceneSubSequenceData::get_InstanceData() {
    return (void*)((uintptr_t)this + 0x98);
}
void* _Script_MovieScene::MovieSceneSubSequenceData::get_SubSectionSignature() {
    return (void*)((uintptr_t)this + 0xb8);
}
void* _Script_MovieScene::MovieSceneSubSequenceData::get_OuterToInnerTransform() {
    return (void*)((uintptr_t)this + 0xc8);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneSubSequenceData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneSubSequenceData");
    return result;
}
