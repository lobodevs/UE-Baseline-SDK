#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneEditorData.hpp"
double& _Script_MovieScene::MovieSceneEditorData::get_WorkStart() {
    return *(double*)((uintptr_t)this + 0x70);
}
double& _Script_MovieScene::MovieSceneEditorData::get_ViewEnd() {
    return *(double*)((uintptr_t)this + 0x68);
}
void* _Script_MovieScene::MovieSceneEditorData::get_ExpansionStates() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_MovieScene::MovieSceneEditorData::get_PinnedNodes() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_MovieScene::MovieSceneEditorData::get_MarkedFrames() {
    return (void*)((uintptr_t)this + 0x80);
}
double& _Script_MovieScene::MovieSceneEditorData::get_ViewStart() {
    return *(double*)((uintptr_t)this + 0x60);
}
void* _Script_MovieScene::MovieSceneEditorData::get_WorkingRange() {
    return (void*)((uintptr_t)this + 0xd0);
}
double& _Script_MovieScene::MovieSceneEditorData::get_WorkEnd() {
    return *(double*)((uintptr_t)this + 0x78);
}
void* _Script_MovieScene::MovieSceneEditorData::get_ViewRange() {
    return (void*)((uintptr_t)this + 0xe0);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneEditorData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneEditorData");
    return result;
}
