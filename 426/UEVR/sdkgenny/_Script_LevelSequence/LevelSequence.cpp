#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "LevelSequence.hpp"
#include "..\_Script_MovieScene\MovieScene.hpp"
#include "..\_Script_MovieScene\MovieSceneSequence.hpp"
_Script_MovieScene::MovieScene*& _Script_LevelSequence::LevelSequence::get_MovieScene() {
    return *(_Script_MovieScene::MovieScene**)((uintptr_t)this + 0x68);
}
_Script_CoreUObject::Class* _Script_LevelSequence::LevelSequence::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LevelSequence.LevelSequence");
    return result;
}
void* _Script_LevelSequence::LevelSequence::get_ObjectReferences() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_LevelSequence::LevelSequence::get_BindingReferences() {
    return (void*)((uintptr_t)this + 0xc0);
}
void* _Script_LevelSequence::LevelSequence::get_PossessedObjects() {
    return (void*)((uintptr_t)this + 0x160);
}
void* _Script_LevelSequence::LevelSequence::get_DirectorClass() {
    return (void*)((uintptr_t)this + 0x1b0);
}
void _Script_LevelSequence::LevelSequence::RemoveMetaDataByClass(void* InClass) {
    return;
}
void* _Script_LevelSequence::LevelSequence::get_AssetUserData() {
    return (void*)((uintptr_t)this + 0x1b8);
}
_Script_CoreUObject::Object* _Script_LevelSequence::LevelSequence::FindOrAddMetaDataByClass(void* InClass) {
    return;
}
_Script_CoreUObject::Object* _Script_LevelSequence::LevelSequence::FindMetaDataByClass(void* InClass) {
    return;
}
_Script_CoreUObject::Object* _Script_LevelSequence::LevelSequence::CopyMetaData(_Script_CoreUObject::Object* InMetaData) {
    return;
}
