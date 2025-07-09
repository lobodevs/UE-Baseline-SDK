#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneSpawnTrack.hpp"
#include "MovieSceneTrack.hpp"
void* _Script_MovieScene::MovieSceneSpawnTrack::get_Sections() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_MovieScene::MovieSceneSpawnTrack::get_ObjectGuid() {
    return (void*)((uintptr_t)this + 0x88);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneSpawnTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieScene.MovieSceneSpawnTrack");
    return result;
}
