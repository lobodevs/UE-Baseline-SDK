#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneSequenceHierarchy.hpp"
void* _Script_MovieScene::MovieSceneSequenceHierarchy::get_RootNode() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_MovieScene::MovieSceneSequenceHierarchy::get_Tree() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_MovieScene::MovieSceneSequenceHierarchy::get_SubSequences() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_MovieScene::MovieSceneSequenceHierarchy::get_Hierarchy() {
    return (void*)((uintptr_t)this + 0xc8);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneSequenceHierarchy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneSequenceHierarchy");
    return result;
}
