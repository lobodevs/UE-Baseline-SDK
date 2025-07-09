#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "MovieSceneSpawnable.hpp"
void* _Script_MovieScene::MovieSceneSpawnable::get_SpawnTransform() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_MovieScene::MovieSceneSpawnable::get_Tags() {
    return (void*)((uintptr_t)this + 0x30);
}
bool _Script_MovieScene::MovieSceneSpawnable::get_bContinuouslyRespawn() {
    return (*(uint8_t*)((uintptr_t)this + 0x40 + 0)) & 1 != 0;
}
void _Script_MovieScene::MovieSceneSpawnable::set_bContinuouslyRespawn(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x40 + 0);
    *(uint8_t*)((uintptr_t)this + 0x40 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MovieScene::MovieSceneSpawnable::get_bEvaluateTracksWhenNotSpawned() {
    return (*(uint8_t*)((uintptr_t)this + 0x41 + 0)) & 1 != 0;
}
void _Script_MovieScene::MovieSceneSpawnable::set_bEvaluateTracksWhenNotSpawned(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x41 + 0);
    *(uint8_t*)((uintptr_t)this + 0x41 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_MovieScene::MovieSceneSpawnable::get_Guid() {
    return (void*)((uintptr_t)this + 0x44);
}
_Script_CoreUObject::Object*& _Script_MovieScene::MovieSceneSpawnable::get_ObjectTemplate() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x68);
}
void* _Script_MovieScene::MovieSceneSpawnable::get_Name() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_MovieScene::MovieSceneSpawnable::get_ChildPossessables() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_MovieScene::MovieSceneSpawnable::get_Ownership() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_MovieScene::MovieSceneSpawnable::get_LevelName() {
    return (void*)((uintptr_t)this + 0x84);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneSpawnable::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneSpawnable");
    return result;
}
