#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneSubTrack.hpp"
#include "TestMovieSceneSubTrack.hpp"
void* _Script_MovieScene::TestMovieSceneSubTrack::get_SectionArray() {
    return (void*)((uintptr_t)this + 0x88);
}
_Script_CoreUObject::Class* _Script_MovieScene::TestMovieSceneSubTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieScene.TestMovieSceneSubTrack");
    return result;
}
