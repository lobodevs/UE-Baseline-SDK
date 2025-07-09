#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "MovieSceneCompiledData.hpp"
void* _Script_MovieScene::MovieSceneCompiledData::get_EvaluationTemplate() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_MovieScene::MovieSceneCompiledData::get_Hierarchy() {
    return (void*)((uintptr_t)this + 0x188);
}
void* _Script_MovieScene::MovieSceneCompiledData::get_EntityComponentField() {
    return (void*)((uintptr_t)this + 0x2a0);
}
void* _Script_MovieScene::MovieSceneCompiledData::get_TrackTemplateField() {
    return (void*)((uintptr_t)this + 0x390);
}
void* _Script_MovieScene::MovieSceneCompiledData::get_DeterminismFences() {
    return (void*)((uintptr_t)this + 0x3c0);
}
void* _Script_MovieScene::MovieSceneCompiledData::get_CompiledSignature() {
    return (void*)((uintptr_t)this + 0x3d0);
}
void* _Script_MovieScene::MovieSceneCompiledData::get_AccumulatedMask() {
    return (void*)((uintptr_t)this + 0x3f0);
}
void* _Script_MovieScene::MovieSceneCompiledData::get_CompilerVersion() {
    return (void*)((uintptr_t)this + 0x3e0);
}
void* _Script_MovieScene::MovieSceneCompiledData::get_AllocatedMask() {
    return (void*)((uintptr_t)this + 0x3f1);
}
void* _Script_MovieScene::MovieSceneCompiledData::get_AccumulatedFlags() {
    return (void*)((uintptr_t)this + 0x3f2);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneCompiledData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieScene.MovieSceneCompiledData");
    return result;
}
