#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\InputComponent.hpp"
#include "..\_Script_Engine\Pawn.hpp"
#include "..\_Script_Engine\PlayerCameraManager.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
#include "..\_Script_Engine\SoundBase.hpp"
#include "..\_Script_Slate\Anchors.hpp"
#include "..\_Script_SlateCore\AnalogInputEvent.hpp"
#include "..\_Script_SlateCore\CharacterEvent.hpp"
#include "..\_Script_SlateCore\FocusEvent.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_SlateCore\KeyEvent.hpp"
#include "..\_Script_SlateCore\Margin.hpp"
#include "..\_Script_SlateCore\MotionEvent.hpp"
#include "..\_Script_SlateCore\PointerEvent.hpp"
#include "..\_Script_SlateCore\SlateColor.hpp"
#include "DragDropOperation.hpp"
#include "EventReply.hpp"
#include "PaintContext.hpp"
#include "UMGSequencePlayer.hpp"
#include "UMGSequenceTickManager.hpp"
#include "UserWidget.hpp"
#include "Widget.hpp"
#include "WidgetAnimation.hpp"
#include "WidgetTree.hpp"
void* _Script_UMG::UserWidget::get_ColorAndOpacity() {
    return (void*)((uintptr_t)this + 0x110);
}
void _Script_UMG::UserWidget::SetAnchorsInViewport(_Script_Slate::Anchors Anchors) {
    return;
}
_Script_UMG::EventReply _Script_UMG::UserWidget::OnTouchStarted(_Script_SlateCore::Geometry MyGeometry, _Script_SlateCore::PointerEvent& InTouchEvent) {
    return;
}
void* _Script_UMG::UserWidget::get_ForegroundColor() {
    return (void*)((uintptr_t)this + 0x130);
}
void* _Script_UMG::UserWidget::get_ColorAndOpacityDelegate() {
    return (void*)((uintptr_t)this + 0x120);
}
void* _Script_UMG::UserWidget::get_ForegroundColorDelegate() {
    return (void*)((uintptr_t)this + 0x158);
}
bool _Script_UMG::UserWidget::IsInViewport() {
    return;
}
_Script_UMG::EventReply _Script_UMG::UserWidget::OnMotionDetected(_Script_SlateCore::Geometry MyGeometry, _Script_SlateCore::MotionEvent InMotionEvent) {
    return;
}
_Script_UMG::UMGSequenceTickManager*& _Script_UMG::UserWidget::get_AnimationTickManager() {
    return *(_Script_UMG::UMGSequenceTickManager**)((uintptr_t)this + 0x1b0);
}
void* _Script_UMG::UserWidget::get_OnVisibilityChanged() {
    return (void*)((uintptr_t)this + 0x168);
}
bool _Script_UMG::UserWidget::IsListeningForInputAction(void* ActionName) {
    return;
}
void* _Script_UMG::UserWidget::get_Padding() {
    return (void*)((uintptr_t)this + 0x190);
}
void _Script_UMG::UserWidget::SetPadding(_Script_SlateCore::Margin InPadding) {
    return;
}
float _Script_UMG::UserWidget::PauseAnimation(_Script_UMG::WidgetAnimation* InAnimation) {
    return;
}
void* _Script_UMG::UserWidget::get_ActiveSequencePlayers() {
    return (void*)((uintptr_t)this + 0x1a0);
}
void* _Script_UMG::UserWidget::get_StoppedSequencePlayers() {
    return (void*)((uintptr_t)this + 0x1b8);
}
_Script_UMG::UMGSequencePlayer* _Script_UMG::UserWidget::PlayAnimation(_Script_UMG::WidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, void* PlayMode, float PlaybackSpeed, bool bRestoreState) {
    return;
}
void* _Script_UMG::UserWidget::get_NamedSlotBindings() {
    return (void*)((uintptr_t)this + 0x1c8);
}
void _Script_UMG::UserWidget::RemoveFromViewport() {
    return;
}
_Script_UMG::WidgetTree*& _Script_UMG::UserWidget::get_WidgetTree() {
    return *(_Script_UMG::WidgetTree**)((uintptr_t)this + 0x1d8);
}
int32_t& _Script_UMG::UserWidget::get_Priority() {
    return *(int32_t*)((uintptr_t)this + 0x1e0);
}
bool _Script_UMG::UserWidget::get_bSupportsKeyboardFocus() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e4 + 0)) & 1 != 0;
}
void _Script_UMG::UserWidget::set_bSupportsKeyboardFocus(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::UserWidget::get_bIsFocusable() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e4 + 0)) & 2 != 0;
}
void _Script_UMG::UserWidget::set_bIsFocusable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e4 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_UMG::UserWidget::get_bStopAction() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e4 + 0)) & 4 != 0;
}
void _Script_UMG::UserWidget::StopAllAnimations() {
    return;
}
void _Script_UMG::UserWidget::set_bStopAction(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e4 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_UMG::UserWidget::get_bHasScriptImplementedTick() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e4 + 0)) & 8 != 0;
}
_Script_UMG::EventReply _Script_UMG::UserWidget::OnAnalogValueChanged(_Script_SlateCore::Geometry MyGeometry, _Script_SlateCore::AnalogInputEvent InAnalogInputEvent) {
    return;
}
void _Script_UMG::UserWidget::set_bHasScriptImplementedTick(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e4 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void _Script_UMG::UserWidget::OnMouseCaptureLost() {
    return;
}
bool _Script_UMG::UserWidget::get_bHasScriptImplementedPaint() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e4 + 0)) & 16 != 0;
}
void _Script_UMG::UserWidget::SetInputActionPriority(int32_t NewPriority) {
    return;
}
void _Script_UMG::UserWidget::StopAnimationsAndLatentActions() {
    return;
}
bool _Script_UMG::UserWidget::IsInteractable() {
    return;
}
void _Script_UMG::UserWidget::set_bHasScriptImplementedPaint(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e4 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
void* _Script_UMG::UserWidget::get_TickFrequency() {
    return (void*)((uintptr_t)this + 0x1f0);
}
void _Script_UMG::UserWidget::FlushAnimations() {
    return;
}
void _Script_UMG::UserWidget::ReverseAnimation(_Script_UMG::WidgetAnimation* InAnimation) {
    return;
}
_Script_Engine::InputComponent*& _Script_UMG::UserWidget::get_InputComponent() {
    return *(_Script_Engine::InputComponent**)((uintptr_t)this + 0x1f8);
}
void _Script_UMG::UserWidget::Tick(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime) {
    return;
}
void* _Script_UMG::UserWidget::get_AnimationCallbacks() {
    return (void*)((uintptr_t)this + 0x200);
}
void _Script_UMG::UserWidget::SetAlignmentInViewport(_Script_CoreUObject::Vector2D Alignment) {
    return;
}
void _Script_UMG::UserWidget::Construct() {
    return;
}
_Script_CoreUObject::Class* _Script_UMG::UserWidget::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.UserWidget");
    return result;
}
void _Script_UMG::UserWidget::UnregisterInputComponent() {
    return;
}
void _Script_UMG::UserWidget::OnAddedToFocusPath(_Script_SlateCore::FocusEvent InFocusEvent) {
    return;
}
void _Script_UMG::UserWidget::PlaySound(_Script_Engine::SoundBase* SoundToPlay) {
    return;
}
void _Script_UMG::UserWidget::UnbindFromAnimationStarted(_Script_UMG::WidgetAnimation* Animation, void* Delegate) {
    return;
}
void _Script_UMG::UserWidget::SetAnimationCurrentTime(_Script_UMG::WidgetAnimation* InAnimation, float InTime) {
    return;
}
void _Script_UMG::UserWidget::UnbindFromAnimationFinished(_Script_UMG::WidgetAnimation* Animation, void* Delegate) {
    return;
}
void _Script_UMG::UserWidget::UnbindAllFromAnimationStarted(_Script_UMG::WidgetAnimation* Animation) {
    return;
}
void _Script_UMG::UserWidget::SetNumLoopsToPlay(_Script_UMG::WidgetAnimation* InAnimation, int32_t NumLoopsToPlay) {
    return;
}
void _Script_UMG::UserWidget::UnbindAllFromAnimationFinished(_Script_UMG::WidgetAnimation* Animation) {
    return;
}
bool _Script_UMG::UserWidget::IsAnimationPlaying(_Script_UMG::WidgetAnimation* InAnimation) {
    return;
}
_Script_UMG::UMGSequencePlayer* _Script_UMG::UserWidget::PlayAnimationForward(_Script_UMG::WidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState) {
    return;
}
void _Script_UMG::UserWidget::StopListeningForInputAction(void* ActionName, void* EventType) {
    return;
}
void _Script_UMG::UserWidget::StopListeningForAllInputActions() {
    return;
}
_Script_UMG::EventReply _Script_UMG::UserWidget::OnTouchGesture(_Script_SlateCore::Geometry MyGeometry, _Script_SlateCore::PointerEvent& GestureEvent) {
    return;
}
void _Script_UMG::UserWidget::StopAnimation(_Script_UMG::WidgetAnimation* InAnimation) {
    return;
}
void _Script_UMG::UserWidget::AddToViewport(int32_t ZOrder) {
    return;
}
_Script_UMG::EventReply _Script_UMG::UserWidget::OnTouchForceChanged(_Script_SlateCore::Geometry MyGeometry, _Script_SlateCore::PointerEvent& InTouchEvent) {
    return;
}
void _Script_UMG::UserWidget::SetPositionInViewport(_Script_CoreUObject::Vector2D Position, bool bRemoveDPIScale) {
    return;
}
void _Script_UMG::UserWidget::SetPlaybackSpeed(_Script_UMG::WidgetAnimation* InAnimation, float PlaybackSpeed) {
    return;
}
_Script_UMG::UMGSequencePlayer* _Script_UMG::UserWidget::PlayAnimationTimeRange(_Script_UMG::WidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, void* PlayMode, float PlaybackSpeed, bool bRestoreState) {
    return;
}
void _Script_UMG::UserWidget::SetOwningPlayer(_Script_Engine::PlayerController* LocalPlayerController) {
    return;
}
void _Script_UMG::UserWidget::SetInputActionBlocking(bool bShouldBlock) {
    return;
}
bool _Script_UMG::UserWidget::AddToPlayerScreen(int32_t ZOrder) {
    return;
}
void _Script_UMG::UserWidget::SetForegroundColor(_Script_SlateCore::SlateColor InForegroundColor) {
    return;
}
void _Script_UMG::UserWidget::OnRemovedFromFocusPath(_Script_SlateCore::FocusEvent InFocusEvent) {
    return;
}
void _Script_UMG::UserWidget::SetDesiredSizeInViewport(_Script_CoreUObject::Vector2D Size) {
    return;
}
void _Script_UMG::UserWidget::SetColorAndOpacity(_Script_CoreUObject::LinearColor InColorAndOpacity) {
    return;
}
void _Script_UMG::UserWidget::RegisterInputComponent() {
    return;
}
_Script_UMG::EventReply _Script_UMG::UserWidget::OnTouchMoved(_Script_SlateCore::Geometry MyGeometry, _Script_SlateCore::PointerEvent& InTouchEvent) {
    return;
}
void _Script_UMG::UserWidget::PreConstruct(bool IsDesignTime) {
    return;
}
_Script_UMG::UMGSequencePlayer* _Script_UMG::UserWidget::PlayAnimationReverse(_Script_UMG::WidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState) {
    return;
}
_Script_UMG::EventReply _Script_UMG::UserWidget::OnTouchEnded(_Script_SlateCore::Geometry MyGeometry, _Script_SlateCore::PointerEvent& InTouchEvent) {
    return;
}
_Script_UMG::EventReply _Script_UMG::UserWidget::OnPreviewMouseButtonDown(_Script_SlateCore::Geometry MyGeometry, _Script_SlateCore::PointerEvent& MouseEvent) {
    return;
}
_Script_UMG::EventReply _Script_UMG::UserWidget::OnPreviewKeyDown(_Script_SlateCore::Geometry MyGeometry, _Script_SlateCore::KeyEvent InKeyEvent) {
    return;
}
void _Script_UMG::UserWidget::OnPaint(_Script_UMG::PaintContext& Context) {
    return;
}
_Script_UMG::EventReply _Script_UMG::UserWidget::OnMouseWheel(_Script_SlateCore::Geometry MyGeometry, _Script_SlateCore::PointerEvent& MouseEvent) {
    return;
}
bool _Script_UMG::UserWidget::IsAnimationPlayingForward(_Script_UMG::WidgetAnimation* InAnimation) {
    return;
}
_Script_UMG::EventReply _Script_UMG::UserWidget::OnMouseMove(_Script_SlateCore::Geometry MyGeometry, _Script_SlateCore::PointerEvent& MouseEvent) {
    return;
}
void _Script_UMG::UserWidget::OnMouseLeave(_Script_SlateCore::PointerEvent& MouseEvent) {
    return;
}
void _Script_UMG::UserWidget::OnMouseEnter(_Script_SlateCore::Geometry MyGeometry, _Script_SlateCore::PointerEvent& MouseEvent) {
    return;
}
float _Script_UMG::UserWidget::GetAnimationCurrentTime(_Script_UMG::WidgetAnimation* InAnimation) {
    return;
}
_Script_UMG::EventReply _Script_UMG::UserWidget::OnMouseButtonUp(_Script_SlateCore::Geometry MyGeometry, _Script_SlateCore::PointerEvent& MouseEvent) {
    return;
}
_Script_UMG::EventReply _Script_UMG::UserWidget::OnMouseButtonDown(_Script_SlateCore::Geometry MyGeometry, _Script_SlateCore::PointerEvent& MouseEvent) {
    return;
}
_Script_UMG::EventReply _Script_UMG::UserWidget::OnMouseButtonDoubleClick(_Script_SlateCore::Geometry InMyGeometry, _Script_SlateCore::PointerEvent& InMouseEvent) {
    return;
}
_Script_UMG::EventReply _Script_UMG::UserWidget::OnKeyUp(_Script_SlateCore::Geometry MyGeometry, _Script_SlateCore::KeyEvent InKeyEvent) {
    return;
}
_Script_UMG::EventReply _Script_UMG::UserWidget::OnKeyDown(_Script_SlateCore::Geometry MyGeometry, _Script_SlateCore::KeyEvent InKeyEvent) {
    return;
}
void _Script_UMG::UserWidget::OnAnimationFinished(_Script_UMG::WidgetAnimation* Animation) {
    return;
}
_Script_UMG::EventReply _Script_UMG::UserWidget::OnKeyChar(_Script_SlateCore::Geometry MyGeometry, _Script_SlateCore::CharacterEvent InCharacterEvent) {
    return;
}
_Script_Engine::Pawn* _Script_UMG::UserWidget::GetOwningPlayerPawn() {
    return;
}
void _Script_UMG::UserWidget::OnInitialized() {
    return;
}
_Script_UMG::EventReply _Script_UMG::UserWidget::OnFocusReceived(_Script_SlateCore::Geometry MyGeometry, _Script_SlateCore::FocusEvent InFocusEvent) {
    return;
}
void _Script_UMG::UserWidget::OnFocusLost(_Script_SlateCore::FocusEvent InFocusEvent) {
    return;
}
bool _Script_UMG::UserWidget::OnDrop(_Script_SlateCore::Geometry MyGeometry, _Script_SlateCore::PointerEvent PointerEvent, _Script_UMG::DragDropOperation* Operation) {
    return;
}
bool _Script_UMG::UserWidget::OnDragOver(_Script_SlateCore::Geometry MyGeometry, _Script_SlateCore::PointerEvent PointerEvent, _Script_UMG::DragDropOperation* Operation) {
    return;
}
void _Script_UMG::UserWidget::OnDragLeave(_Script_SlateCore::PointerEvent PointerEvent, _Script_UMG::DragDropOperation* Operation) {
    return;
}
void _Script_UMG::UserWidget::OnDragEnter(_Script_SlateCore::Geometry MyGeometry, _Script_SlateCore::PointerEvent PointerEvent, _Script_UMG::DragDropOperation* Operation) {
    return;
}
void _Script_UMG::UserWidget::OnDragDetected(_Script_SlateCore::Geometry MyGeometry, _Script_SlateCore::PointerEvent& PointerEvent, _Script_UMG::DragDropOperation*& Operation) {
    return;
}
void _Script_UMG::UserWidget::OnDragCancelled(_Script_SlateCore::PointerEvent& PointerEvent, _Script_UMG::DragDropOperation* Operation) {
    return;
}
void _Script_UMG::UserWidget::OnAnimationStarted(_Script_UMG::WidgetAnimation* Animation) {
    return;
}
void _Script_UMG::UserWidget::ListenForInputAction(void* ActionName, void* EventType, bool bConsume, void* Callback) {
    return;
}
bool _Script_UMG::UserWidget::IsPlayingAnimation() {
    return;
}
bool _Script_UMG::UserWidget::IsAnyAnimationPlaying() {
    return;
}
_Script_Engine::PlayerCameraManager* _Script_UMG::UserWidget::GetOwningPlayerCameraManager() {
    return;
}
bool _Script_UMG::UserWidget::GetIsVisible() {
    return;
}
_Script_Slate::Anchors _Script_UMG::UserWidget::GetAnchorsInViewport() {
    return;
}
_Script_CoreUObject::Vector2D _Script_UMG::UserWidget::GetAlignmentInViewport() {
    return;
}
void _Script_UMG::UserWidget::Destruct() {
    return;
}
void _Script_UMG::UserWidget::CancelLatentActions() {
    return;
}
void _Script_UMG::UserWidget::BindToAnimationStarted(_Script_UMG::WidgetAnimation* Animation, void* Delegate) {
    return;
}
void _Script_UMG::UserWidget::BindToAnimationFinished(_Script_UMG::WidgetAnimation* Animation, void* Delegate) {
    return;
}
void _Script_UMG::UserWidget::BindToAnimationEvent(_Script_UMG::WidgetAnimation* Animation, void* Delegate, void* AnimationEvent, void* UserTag) {
    return;
}
