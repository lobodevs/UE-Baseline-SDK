#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "MovieSceneTrackInstance.hpp"
#include "MovieSceneTrackInstanceEntry.hpp"
_Script_CoreUObject::Object*& _Script_MovieScene::MovieSceneTrackInstanceEntry::get_BoundObject() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x0);
}
_Script_MovieScene::MovieSceneTrackInstance*& _Script_MovieScene::MovieSceneTrackInstanceEntry::get_TrackInstance() {
    return *(_Script_MovieScene::MovieSceneTrackInstance**)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneTrackInstanceEntry::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneTrackInstanceEntry");
    return result;
}
