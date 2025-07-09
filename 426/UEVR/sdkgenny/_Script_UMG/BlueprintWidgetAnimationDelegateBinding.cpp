#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BlueprintWidgetAnimationDelegateBinding.hpp"
void* _Script_UMG::BlueprintWidgetAnimationDelegateBinding::get_Action() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_UMG::BlueprintWidgetAnimationDelegateBinding::get_AnimationToBind() {
    return (void*)((uintptr_t)this + 0x4);
}
void* _Script_UMG::BlueprintWidgetAnimationDelegateBinding::get_FunctionNameToBind() {
    return (void*)((uintptr_t)this + 0xc);
}
void* _Script_UMG::BlueprintWidgetAnimationDelegateBinding::get_UserTag() {
    return (void*)((uintptr_t)this + 0x14);
}
_Script_CoreUObject::Class* _Script_UMG::BlueprintWidgetAnimationDelegateBinding::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/UMG.BlueprintWidgetAnimationDelegateBinding");
    return result;
}
