#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneSequenceReplProperties.hpp"
int32_t& _Script_MovieScene::MovieSceneSequenceReplProperties::get_LastKnownNumLoops() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
void* _Script_MovieScene::MovieSceneSequenceReplProperties::get_LastKnownPosition() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_MovieScene::MovieSceneSequenceReplProperties::get_LastKnownStatus() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneSequenceReplProperties::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneSequenceReplProperties");
    return result;
}
