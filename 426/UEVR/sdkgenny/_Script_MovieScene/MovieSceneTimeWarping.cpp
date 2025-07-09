#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneTimeWarping.hpp"
void* _Script_MovieScene::MovieSceneTimeWarping::get_Start() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneTimeWarping::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneTimeWarping");
    return result;
}
void* _Script_MovieScene::MovieSceneTimeWarping::get_End() {
    return (void*)((uintptr_t)this + 0x4);
}
