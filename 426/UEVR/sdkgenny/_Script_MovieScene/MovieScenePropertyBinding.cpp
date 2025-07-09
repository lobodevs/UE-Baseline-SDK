#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieScenePropertyBinding.hpp"
void* _Script_MovieScene::MovieScenePropertyBinding::get_PropertyName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_MovieScene::MovieScenePropertyBinding::get_PropertyPath() {
    return (void*)((uintptr_t)this + 0x8);
}
bool _Script_MovieScene::MovieScenePropertyBinding::get_bCanUseClassLookup() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 1 != 0;
}
void _Script_MovieScene::MovieScenePropertyBinding::set_bCanUseClassLookup(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieScenePropertyBinding::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieScenePropertyBinding");
    return result;
}
