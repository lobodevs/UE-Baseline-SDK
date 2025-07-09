#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "MovieSceneObjectPathChannelKeyValue.hpp"
void* _Script_MovieScene::MovieSceneObjectPathChannelKeyValue::get_SoftPtr() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Object*& _Script_MovieScene::MovieSceneObjectPathChannelKeyValue::get_HardPtr() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneObjectPathChannelKeyValue::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneObjectPathChannelKeyValue");
    return result;
}
