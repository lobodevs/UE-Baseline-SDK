#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneNestedSequenceTransform.hpp"
void* _Script_MovieScene::MovieSceneNestedSequenceTransform::get_LinearTransform() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_MovieScene::MovieSceneNestedSequenceTransform::get_Warping() {
    return (void*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneNestedSequenceTransform::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneNestedSequenceTransform");
    return result;
}
