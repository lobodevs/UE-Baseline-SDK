#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneEvaluationFieldEntity.hpp"
void* _Script_MovieScene::MovieSceneEvaluationFieldEntity::get_Key() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_MovieScene::MovieSceneEvaluationFieldEntity::get_SharedMetaDataIndex() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneEvaluationFieldEntity::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneEvaluationFieldEntity");
    return result;
}
