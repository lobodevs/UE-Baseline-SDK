#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneFloatValue.hpp"
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneFloatValue::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneFloatValue");
    return result;
}
float& _Script_MovieScene::MovieSceneFloatValue::get_Value() {
    return *(float*)((uintptr_t)this + 0x0);
}
void* _Script_MovieScene::MovieSceneFloatValue::get_Tangent() {
    return (void*)((uintptr_t)this + 0x4);
}
void* _Script_MovieScene::MovieSceneFloatValue::get_PaddingByte() {
    return (void*)((uintptr_t)this + 0x1a);
}
void* _Script_MovieScene::MovieSceneFloatValue::get_InterpMode() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_MovieScene::MovieSceneFloatValue::get_TangentMode() {
    return (void*)((uintptr_t)this + 0x19);
}
