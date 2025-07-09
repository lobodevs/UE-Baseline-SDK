#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneEvaluationFieldEntityMetaData.hpp"
void* _Script_MovieScene::MovieSceneEvaluationFieldEntityMetaData::get_ForcedTime() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_MovieScene::MovieSceneEvaluationFieldEntityMetaData::get_Flags() {
    return (void*)((uintptr_t)this + 0x8);
}
bool _Script_MovieScene::MovieSceneEvaluationFieldEntityMetaData::get_bEvaluateInSequencePreRoll() {
    return (*(uint8_t*)((uintptr_t)this + 0x9 + 0)) & 1 != 0;
}
void _Script_MovieScene::MovieSceneEvaluationFieldEntityMetaData::set_bEvaluateInSequencePreRoll(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MovieScene::MovieSceneEvaluationFieldEntityMetaData::get_bEvaluateInSequencePostRoll() {
    return (*(uint8_t*)((uintptr_t)this + 0x9 + 0)) & 2 != 0;
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneEvaluationFieldEntityMetaData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneEvaluationFieldEntityMetaData");
    return result;
}
void _Script_MovieScene::MovieSceneEvaluationFieldEntityMetaData::set_bEvaluateInSequencePostRoll(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
