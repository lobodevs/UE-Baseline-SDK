#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "UMGSequencePlayer.hpp"
#include "UserWidget.hpp"
#include "WidgetAnimation.hpp"
#include "WidgetAnimationPlayCallbackProxy.hpp"
void* _Script_UMG::WidgetAnimationPlayCallbackProxy::get_Finished() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_UMG::WidgetAnimationPlayCallbackProxy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.WidgetAnimationPlayCallbackProxy");
    return result;
}
_Script_UMG::WidgetAnimationPlayCallbackProxy* _Script_UMG::WidgetAnimationPlayCallbackProxy::CreatePlayAnimationTimeRangeProxyObject(_Script_UMG::UMGSequencePlayer*& Result, _Script_UMG::UserWidget* Widget, _Script_UMG::WidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, void* PlayMode, float PlaybackSpeed) {
    return;
}
_Script_UMG::WidgetAnimationPlayCallbackProxy* _Script_UMG::WidgetAnimationPlayCallbackProxy::CreatePlayAnimationProxyObject(_Script_UMG::UMGSequencePlayer*& Result, _Script_UMG::UserWidget* Widget, _Script_UMG::WidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, void* PlayMode, float PlaybackSpeed) {
    return;
}
