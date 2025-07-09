#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneSequenceCompilerMaskStruct.hpp"
bool _Script_MovieScene::MovieSceneSequenceCompilerMaskStruct::get_bHierarchy() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_MovieScene::MovieSceneSequenceCompilerMaskStruct::set_bHierarchy(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_MovieScene::MovieSceneSequenceCompilerMaskStruct::set_bEvaluationTemplateField(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_MovieScene::MovieSceneSequenceCompilerMaskStruct::get_bEvaluationTemplate() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 2 != 0;
}
void _Script_MovieScene::MovieSceneSequenceCompilerMaskStruct::set_bEvaluationTemplate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_MovieScene::MovieSceneSequenceCompilerMaskStruct::get_bEvaluationTemplateField() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 4 != 0;
}
bool _Script_MovieScene::MovieSceneSequenceCompilerMaskStruct::get_bEntityComponentField() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 8 != 0;
}
void _Script_MovieScene::MovieSceneSequenceCompilerMaskStruct::set_bEntityComponentField(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneSequenceCompilerMaskStruct::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneSequenceCompilerMaskStruct");
    return result;
}
