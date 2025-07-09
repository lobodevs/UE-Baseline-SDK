#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneEvaluationTemplate.hpp"
void* _Script_MovieScene::MovieSceneEvaluationTemplate::get_Tracks() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneEvaluationTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneEvaluationTemplate");
    return result;
}
void* _Script_MovieScene::MovieSceneEvaluationTemplate::get_SequenceSignature() {
    return (void*)((uintptr_t)this + 0xa0);
}
void* _Script_MovieScene::MovieSceneEvaluationTemplate::get_TemplateSerialNumber() {
    return (void*)((uintptr_t)this + 0xb0);
}
void* _Script_MovieScene::MovieSceneEvaluationTemplate::get_TemplateLedger() {
    return (void*)((uintptr_t)this + 0xb8);
}
