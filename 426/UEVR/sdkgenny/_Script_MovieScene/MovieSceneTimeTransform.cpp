#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneTimeTransform.hpp"
float& _Script_MovieScene::MovieSceneTimeTransform::get_TimeScale() {
    return *(float*)((uintptr_t)this + 0x0);
}
void* _Script_MovieScene::MovieSceneTimeTransform::get_Offset() {
    return (void*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneTimeTransform::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneTimeTransform");
    return result;
}
