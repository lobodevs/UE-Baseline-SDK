#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DynamicBlueprintBinding.hpp"
#include "WidgetAnimationDelegateBinding.hpp"
void* _Script_UMG::WidgetAnimationDelegateBinding::get_WidgetAnimationDelegateBindings() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_UMG::WidgetAnimationDelegateBinding::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.WidgetAnimationDelegateBinding");
    return result;
}
