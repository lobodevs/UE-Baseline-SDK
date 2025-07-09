#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneCompiledData.hpp"
#include "MovieSceneObjectBindingID.hpp"
#include "MovieSceneSequence.hpp"
#include "MovieSceneSignedObject.hpp"
_Script_MovieScene::MovieSceneCompiledData*& _Script_MovieScene::MovieSceneSequence::get_CompiledData() {
    return *(_Script_MovieScene::MovieSceneCompiledData**)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneSequence::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieScene.MovieSceneSequence");
    return result;
}
bool _Script_MovieScene::MovieSceneSequence::get_bParentContextsAreSignificant() {
    return (*(uint8_t*)((uintptr_t)this + 0x59 + 0)) & 1 != 0;
}
void* _Script_MovieScene::MovieSceneSequence::get_DefaultCompletionMode() {
    return (void*)((uintptr_t)this + 0x58);
}
void _Script_MovieScene::MovieSceneSequence::set_bParentContextsAreSignificant(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x59 + 0);
    *(uint8_t*)((uintptr_t)this + 0x59 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MovieScene::MovieSceneSequence::get_bPlayableDirectly() {
    return (*(uint8_t*)((uintptr_t)this + 0x5a + 0)) & 1 != 0;
}
void _Script_MovieScene::MovieSceneSequence::set_bPlayableDirectly(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5a + 0);
    *(uint8_t*)((uintptr_t)this + 0x5a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_MovieScene::MovieSceneSequence::get_SequenceFlags() {
    return (void*)((uintptr_t)this + 0x5b);
}
void* _Script_MovieScene::MovieSceneSequence::FindBindingsByTag(void* InBindingName) {
    return;
}
_Script_MovieScene::MovieSceneObjectBindingID _Script_MovieScene::MovieSceneSequence::FindBindingByTag(void* InBindingName) {
    return;
}
