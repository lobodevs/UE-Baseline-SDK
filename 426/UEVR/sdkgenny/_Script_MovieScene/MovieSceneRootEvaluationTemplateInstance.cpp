#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneCompiledDataManager.hpp"
#include "MovieSceneEntitySystemLinker.hpp"
#include "MovieSceneRootEvaluationTemplateInstance.hpp"
_Script_MovieScene::MovieSceneCompiledDataManager*& _Script_MovieScene::MovieSceneRootEvaluationTemplateInstance::get_CompiledDataManager() {
    return *(_Script_MovieScene::MovieSceneCompiledDataManager**)((uintptr_t)this + 0x8);
}
void* _Script_MovieScene::MovieSceneRootEvaluationTemplateInstance::get_WeakRootSequence() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_MovieScene::MovieSceneEntitySystemLinker*& _Script_MovieScene::MovieSceneRootEvaluationTemplateInstance::get_EntitySystemLinker() {
    return *(_Script_MovieScene::MovieSceneEntitySystemLinker**)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneRootEvaluationTemplateInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneRootEvaluationTemplateInstance");
    return result;
}
void* _Script_MovieScene::MovieSceneRootEvaluationTemplateInstance::get_DirectorInstances() {
    return (void*)((uintptr_t)this + 0x90);
}
