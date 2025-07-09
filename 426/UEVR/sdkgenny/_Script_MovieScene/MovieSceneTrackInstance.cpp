#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "MovieSceneEntitySystemLinker.hpp"
#include "MovieSceneTrackInstance.hpp"
_Script_CoreUObject::Object*& _Script_MovieScene::MovieSceneTrackInstance::get_AnimatedObject() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x28);
}
bool _Script_MovieScene::MovieSceneTrackInstance::get_bIsMasterTrackInstance() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
_Script_MovieScene::MovieSceneEntitySystemLinker*& _Script_MovieScene::MovieSceneTrackInstance::get_Linker() {
    return *(_Script_MovieScene::MovieSceneEntitySystemLinker**)((uintptr_t)this + 0x38);
}
void _Script_MovieScene::MovieSceneTrackInstance::set_bIsMasterTrackInstance(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneTrackInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieScene.MovieSceneTrackInstance");
    return result;
}
void* _Script_MovieScene::MovieSceneTrackInstance::get_Inputs() {
    return (void*)((uintptr_t)this + 0x40);
}
