#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimationEventBinding.hpp"
#include "WidgetAnimation.hpp"
void* _Script_UMG::AnimationEventBinding::get_UserTag() {
    return (void*)((uintptr_t)this + 0x1c);
}
_Script_UMG::WidgetAnimation*& _Script_UMG::AnimationEventBinding::get_Animation() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x0);
}
void* _Script_UMG::AnimationEventBinding::get_Delegate() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_UMG::AnimationEventBinding::get_AnimationEvent() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_UMG::AnimationEventBinding::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/UMG.AnimationEventBinding");
    return result;
}
