#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneFieldEntry_ChildTemplate.hpp"
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneFieldEntry_ChildTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneFieldEntry_ChildTemplate");
    return result;
}
void* _Script_MovieScene::MovieSceneFieldEntry_ChildTemplate::get_ChildIndex() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_MovieScene::MovieSceneFieldEntry_ChildTemplate::get_Flags() {
    return (void*)((uintptr_t)this + 0x2);
}
void* _Script_MovieScene::MovieSceneFieldEntry_ChildTemplate::get_ForcedTime() {
    return (void*)((uintptr_t)this + 0x4);
}
