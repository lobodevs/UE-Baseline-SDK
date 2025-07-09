#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieScene.hpp"
#include "..\_Script_MovieScene\MovieSceneSequence.hpp"
#include "UserWidget.hpp"
#include "WidgetAnimation.hpp"
_Script_MovieScene::MovieScene*& _Script_UMG::WidgetAnimation::get_MovieScene() {
    return *(_Script_MovieScene::MovieScene**)((uintptr_t)this + 0x60);
}
float _Script_UMG::WidgetAnimation::GetStartTime() {
    return;
}
_Script_CoreUObject::Class* _Script_UMG::WidgetAnimation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.WidgetAnimation");
    return result;
}
void* _Script_UMG::WidgetAnimation::get_AnimationBindings() {
    return (void*)((uintptr_t)this + 0x68);
}
bool _Script_UMG::WidgetAnimation::get_bLegacyFinishOnStop() {
    return (*(uint8_t*)((uintptr_t)this + 0x78 + 0)) & 1 != 0;
}
void _Script_UMG::WidgetAnimation::set_bLegacyFinishOnStop(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x78 + 0);
    *(uint8_t*)((uintptr_t)this + 0x78 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_UMG::WidgetAnimation::get_DisplayLabel() {
    return (void*)((uintptr_t)this + 0x80);
}
void _Script_UMG::WidgetAnimation::UnbindFromAnimationStarted(_Script_UMG::UserWidget* Widget, void* Delegate) {
    return;
}
void _Script_UMG::WidgetAnimation::UnbindFromAnimationFinished(_Script_UMG::UserWidget* Widget, void* Delegate) {
    return;
}
void _Script_UMG::WidgetAnimation::UnbindAllFromAnimationStarted(_Script_UMG::UserWidget* Widget) {
    return;
}
void _Script_UMG::WidgetAnimation::UnbindAllFromAnimationFinished(_Script_UMG::UserWidget* Widget) {
    return;
}
float _Script_UMG::WidgetAnimation::GetEndTime() {
    return;
}
void _Script_UMG::WidgetAnimation::BindToAnimationStarted(_Script_UMG::UserWidget* Widget, void* Delegate) {
    return;
}
void _Script_UMG::WidgetAnimation::BindToAnimationFinished(_Script_UMG::UserWidget* Widget, void* Delegate) {
    return;
}
