#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneEvaluationFieldSharedEntityMetaData.hpp"
void* _Script_MovieScene::MovieSceneEvaluationFieldSharedEntityMetaData::get_ObjectBindingId() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneEvaluationFieldSharedEntityMetaData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneEvaluationFieldSharedEntityMetaData");
    return result;
}
