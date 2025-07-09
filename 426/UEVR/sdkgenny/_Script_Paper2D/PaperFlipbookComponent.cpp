#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_Engine\BodySetup.hpp"
#include "..\_Script_Engine\MaterialInterface.hpp"
#include "..\_Script_Engine\MeshComponent.hpp"
#include "PaperFlipbook.hpp"
#include "PaperFlipbookComponent.hpp"
_Script_Paper2D::PaperFlipbook*& _Script_Paper2D::PaperFlipbookComponent::get_SourceFlipbook() {
    return *(_Script_Paper2D::PaperFlipbook**)((uintptr_t)this + 0x468);
}
_Script_Engine::MaterialInterface*& _Script_Paper2D::PaperFlipbookComponent::get_Material() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x470);
}
_Script_Paper2D::PaperFlipbook* _Script_Paper2D::PaperFlipbookComponent::GetFlipbook() {
    return;
}
int32_t& _Script_Paper2D::PaperFlipbookComponent::get_CachedFrameIndex() {
    return *(int32_t*)((uintptr_t)this + 0x484);
}
void _Script_Paper2D::PaperFlipbookComponent::set_bReversePlayback(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x47c + 0);
    *(uint8_t*)((uintptr_t)this + 0x47c + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
float& _Script_Paper2D::PaperFlipbookComponent::get_PlayRate() {
    return *(float*)((uintptr_t)this + 0x478);
}
bool _Script_Paper2D::PaperFlipbookComponent::get_bReversePlayback() {
    return (*(uint8_t*)((uintptr_t)this + 0x47c + 0)) & 2 != 0;
}
void _Script_Paper2D::PaperFlipbookComponent::ReverseFromEnd() {
    return;
}
bool _Script_Paper2D::PaperFlipbookComponent::get_bLooping() {
    return (*(uint8_t*)((uintptr_t)this + 0x47c + 0)) & 1 != 0;
}
float _Script_Paper2D::PaperFlipbookComponent::GetPlaybackPosition() {
    return;
}
void _Script_Paper2D::PaperFlipbookComponent::set_bLooping(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x47c + 0);
    *(uint8_t*)((uintptr_t)this + 0x47c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Paper2D::PaperFlipbookComponent::PlayFromStart() {
    return;
}
bool _Script_Paper2D::PaperFlipbookComponent::get_bPlaying() {
    return (*(uint8_t*)((uintptr_t)this + 0x47c + 0)) & 4 != 0;
}
void _Script_Paper2D::PaperFlipbookComponent::set_bPlaying(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x47c + 0);
    *(uint8_t*)((uintptr_t)this + 0x47c + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
_Script_CoreUObject::LinearColor _Script_Paper2D::PaperFlipbookComponent::GetSpriteColor() {
    return;
}
float& _Script_Paper2D::PaperFlipbookComponent::get_AccumulatedTime() {
    return *(float*)((uintptr_t)this + 0x480);
}
void* _Script_Paper2D::PaperFlipbookComponent::get_SpriteColor() {
    return (void*)((uintptr_t)this + 0x488);
}
_Script_Engine::BodySetup*& _Script_Paper2D::PaperFlipbookComponent::get_CachedBodySetup() {
    return *(_Script_Engine::BodySetup**)((uintptr_t)this + 0x498);
}
void* _Script_Paper2D::PaperFlipbookComponent::get_OnFinishedPlaying() {
    return (void*)((uintptr_t)this + 0x4a0);
}
_Script_CoreUObject::Class* _Script_Paper2D::PaperFlipbookComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Paper2D.PaperFlipbookComponent");
    return result;
}
void _Script_Paper2D::PaperFlipbookComponent::Stop() {
    return;
}
void _Script_Paper2D::PaperFlipbookComponent::SetSpriteColor(_Script_CoreUObject::LinearColor NewColor) {
    return;
}
void _Script_Paper2D::PaperFlipbookComponent::SetPlayRate(float NewRate) {
    return;
}
void _Script_Paper2D::PaperFlipbookComponent::SetPlaybackPositionInFrames(int32_t NewFramePosition, bool bFireEvents) {
    return;
}
int32_t _Script_Paper2D::PaperFlipbookComponent::GetFlipbookLengthInFrames() {
    return;
}
void _Script_Paper2D::PaperFlipbookComponent::SetPlaybackPosition(float NewPosition, bool bFireEvents) {
    return;
}
void _Script_Paper2D::PaperFlipbookComponent::SetNewTime(float NewTime) {
    return;
}
void _Script_Paper2D::PaperFlipbookComponent::SetLooping(bool bNewLooping) {
    return;
}
bool _Script_Paper2D::PaperFlipbookComponent::SetFlipbook(_Script_Paper2D::PaperFlipbook* NewFlipbook) {
    return;
}
void _Script_Paper2D::PaperFlipbookComponent::Reverse() {
    return;
}
void _Script_Paper2D::PaperFlipbookComponent::Play() {
    return;
}
void _Script_Paper2D::PaperFlipbookComponent::OnRep_SourceFlipbook(_Script_Paper2D::PaperFlipbook* OldFlipbook) {
    return;
}
bool _Script_Paper2D::PaperFlipbookComponent::IsReversing() {
    return;
}
bool _Script_Paper2D::PaperFlipbookComponent::IsPlaying() {
    return;
}
bool _Script_Paper2D::PaperFlipbookComponent::IsLooping() {
    return;
}
float _Script_Paper2D::PaperFlipbookComponent::GetPlayRate() {
    return;
}
int32_t _Script_Paper2D::PaperFlipbookComponent::GetPlaybackPositionInFrames() {
    return;
}
float _Script_Paper2D::PaperFlipbookComponent::GetFlipbookLength() {
    return;
}
float _Script_Paper2D::PaperFlipbookComponent::GetFlipbookFramerate() {
    return;
}
