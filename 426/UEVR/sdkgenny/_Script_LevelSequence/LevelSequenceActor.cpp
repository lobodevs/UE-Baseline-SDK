#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "LevelSequence.hpp"
#include "LevelSequenceActor.hpp"
#include "LevelSequenceBurnIn.hpp"
#include "LevelSequenceBurnInOptions.hpp"
#include "LevelSequencePlayer.hpp"
#include "..\_Script_MovieScene\MovieSceneBindingOverrides.hpp"
#include "..\_Script_MovieScene\MovieSceneObjectBindingID.hpp"
void _Script_LevelSequence::LevelSequenceActor::set_bOverrideInstanceData(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x280 + 0);
    *(uint8_t*)((uintptr_t)this + 0x280 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_LevelSequence::LevelSequenceActor::get_PlaybackSettings() {
    return (void*)((uintptr_t)this + 0x230);
}
void _Script_LevelSequence::LevelSequenceActor::set_bAutoPlay(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x280 + 0);
    *(uint8_t*)((uintptr_t)this + 0x280 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_LevelSequence::LevelSequenceActor::SetBindingByTag(void* BindingTag, void*& Actors, bool bAllowBindingsFromAsset) {
    return;
}
_Script_LevelSequence::LevelSequencePlayer*& _Script_LevelSequence::LevelSequenceActor::get_SequencePlayer() {
    return *(_Script_LevelSequence::LevelSequencePlayer**)((uintptr_t)this + 0x248);
}
void _Script_LevelSequence::LevelSequenceActor::HideBurnin() {
    return;
}
void* _Script_LevelSequence::LevelSequenceActor::get_LevelSequence() {
    return (void*)((uintptr_t)this + 0x250);
}
void _Script_LevelSequence::LevelSequenceActor::AddBinding(_Script_MovieScene::MovieSceneObjectBindingID Binding, _Script_Engine::Actor* Actor, bool bAllowBindingsFromAsset) {
    return;
}
bool _Script_LevelSequence::LevelSequenceActor::get_bAutoPlay() {
    return (*(uint8_t*)((uintptr_t)this + 0x280 + 0)) & 1 != 0;
}
void* _Script_LevelSequence::LevelSequenceActor::get_CameraSettings() {
    return (void*)((uintptr_t)this + 0x268);
}
bool _Script_LevelSequence::LevelSequenceActor::get_bShowBurnin() {
    return (*(uint8_t*)((uintptr_t)this + 0x298 + 0)) & 1 != 0;
}
_Script_LevelSequence::LevelSequenceBurnInOptions*& _Script_LevelSequence::LevelSequenceActor::get_BurnInOptions() {
    return *(_Script_LevelSequence::LevelSequenceBurnInOptions**)((uintptr_t)this + 0x270);
}
_Script_MovieScene::MovieSceneBindingOverrides*& _Script_LevelSequence::LevelSequenceActor::get_BindingOverrides() {
    return *(_Script_MovieScene::MovieSceneBindingOverrides**)((uintptr_t)this + 0x278);
}
bool _Script_LevelSequence::LevelSequenceActor::get_bOverrideInstanceData() {
    return (*(uint8_t*)((uintptr_t)this + 0x280 + 0)) & 2 != 0;
}
bool _Script_LevelSequence::LevelSequenceActor::get_bReplicatePlayback() {
    return (*(uint8_t*)((uintptr_t)this + 0x280 + 0)) & 4 != 0;
}
void _Script_LevelSequence::LevelSequenceActor::set_bReplicatePlayback(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x280 + 0);
    *(uint8_t*)((uintptr_t)this + 0x280 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
_Script_CoreUObject::Object*& _Script_LevelSequence::LevelSequenceActor::get_DefaultInstanceData() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x288);
}
_Script_LevelSequence::LevelSequenceBurnIn*& _Script_LevelSequence::LevelSequenceActor::get_BurnInInstance() {
    return *(_Script_LevelSequence::LevelSequenceBurnIn**)((uintptr_t)this + 0x290);
}
void _Script_LevelSequence::LevelSequenceActor::set_bShowBurnin(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x298 + 0);
    *(uint8_t*)((uintptr_t)this + 0x298 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_LevelSequence::LevelSequenceActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LevelSequence.LevelSequenceActor");
    return result;
}
void _Script_LevelSequence::LevelSequenceActor::ShowBurnin() {
    return;
}
void _Script_LevelSequence::LevelSequenceActor::SetSequence(_Script_LevelSequence::LevelSequence* InSequence) {
    return;
}
void _Script_LevelSequence::LevelSequenceActor::SetReplicatePlayback(bool ReplicatePlayback) {
    return;
}
void _Script_LevelSequence::LevelSequenceActor::SetBinding(_Script_MovieScene::MovieSceneObjectBindingID Binding, void*& Actors, bool bAllowBindingsFromAsset) {
    return;
}
void _Script_LevelSequence::LevelSequenceActor::ResetBindings() {
    return;
}
void _Script_LevelSequence::LevelSequenceActor::ResetBinding(_Script_MovieScene::MovieSceneObjectBindingID Binding) {
    return;
}
void _Script_LevelSequence::LevelSequenceActor::RemoveBindingByTag(void* Tag, _Script_Engine::Actor* Actor) {
    return;
}
void _Script_LevelSequence::LevelSequenceActor::RemoveBinding(_Script_MovieScene::MovieSceneObjectBindingID Binding, _Script_Engine::Actor* Actor) {
    return;
}
_Script_LevelSequence::LevelSequence* _Script_LevelSequence::LevelSequenceActor::LoadSequence() {
    return;
}
_Script_LevelSequence::LevelSequencePlayer* _Script_LevelSequence::LevelSequenceActor::GetSequencePlayer() {
    return;
}
_Script_LevelSequence::LevelSequence* _Script_LevelSequence::LevelSequenceActor::GetSequence() {
    return;
}
void* _Script_LevelSequence::LevelSequenceActor::FindNamedBindings(void* Tag) {
    return;
}
_Script_MovieScene::MovieSceneObjectBindingID _Script_LevelSequence::LevelSequenceActor::FindNamedBinding(void* Tag) {
    return;
}
void _Script_LevelSequence::LevelSequenceActor::AddBindingByTag(void* BindingTag, _Script_Engine::Actor* Actor, bool bAllowBindingsFromAsset) {
    return;
}
