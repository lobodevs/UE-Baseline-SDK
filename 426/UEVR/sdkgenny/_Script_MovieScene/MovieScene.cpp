#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieScene.hpp"
#include "MovieSceneSignedObject.hpp"
#include "MovieSceneTrack.hpp"
void* _Script_MovieScene::MovieScene::get_Spawnables() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_MovieScene::MovieScene::get_Possessables() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_MovieScene::MovieScene::get_PlaybackRange() {
    return (void*)((uintptr_t)this + 0xf8);
}
void* _Script_MovieScene::MovieScene::get_MasterTracks() {
    return (void*)((uintptr_t)this + 0xd0);
}
void* _Script_MovieScene::MovieScene::get_ObjectBindings() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_MovieScene::MovieScene::get_BindingGroups() {
    return (void*)((uintptr_t)this + 0x80);
}
_Script_MovieScene::MovieSceneTrack*& _Script_MovieScene::MovieScene::get_CameraCutTrack() {
    return *(_Script_MovieScene::MovieSceneTrack**)((uintptr_t)this + 0xe0);
}
void* _Script_MovieScene::MovieScene::get_SelectionRange() {
    return (void*)((uintptr_t)this + 0xe8);
}
void* _Script_MovieScene::MovieScene::get_TickResolution() {
    return (void*)((uintptr_t)this + 0x108);
}
void* _Script_MovieScene::MovieScene::get_DisplayRate() {
    return (void*)((uintptr_t)this + 0x110);
}
void* _Script_MovieScene::MovieScene::get_EvaluationType() {
    return (void*)((uintptr_t)this + 0x118);
}
void* _Script_MovieScene::MovieScene::get_ClockSource() {
    return (void*)((uintptr_t)this + 0x119);
}
void* _Script_MovieScene::MovieScene::get_CustomClockSourcePath() {
    return (void*)((uintptr_t)this + 0x120);
}
void* _Script_MovieScene::MovieScene::get_MarkedFrames() {
    return (void*)((uintptr_t)this + 0x138);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieScene::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieScene.MovieScene");
    return result;
}
