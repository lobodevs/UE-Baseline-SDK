#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "MovieSceneBindingOverrides.hpp"
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneBindingOverrides::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieScene.MovieSceneBindingOverrides");
    return result;
}
void* _Script_MovieScene::MovieSceneBindingOverrides::get_BindingData() {
    return (void*)((uintptr_t)this + 0x28);
}
