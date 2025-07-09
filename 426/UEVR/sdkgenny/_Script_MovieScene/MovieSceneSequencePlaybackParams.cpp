#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneSequencePlaybackParams.hpp"
void* _Script_MovieScene::MovieSceneSequencePlaybackParams::get_Frame() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_MovieScene::MovieSceneSequencePlaybackParams::get_UpdateMethod() {
    return (void*)((uintptr_t)this + 0x21);
}
void* _Script_MovieScene::MovieSceneSequencePlaybackParams::get_MarkedFrame() {
    return (void*)((uintptr_t)this + 0x10);
}
float& _Script_MovieScene::MovieSceneSequencePlaybackParams::get_Time() {
    return *(float*)((uintptr_t)this + 0x8);
}
void* _Script_MovieScene::MovieSceneSequencePlaybackParams::get_PositionType() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneSequencePlaybackParams::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneSequencePlaybackParams");
    return result;
}
