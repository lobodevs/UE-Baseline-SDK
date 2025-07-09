#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CheckBoxWidgetStyle.hpp"
#include "..\_Script_SlateCore\SlateWidgetStyleContainerBase.hpp"
_Script_CoreUObject::Class* _Script_Slate::CheckBoxWidgetStyle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Slate.CheckBoxWidgetStyle");
    return result;
}
void* _Script_Slate::CheckBoxWidgetStyle::get_CheckBoxStyle() {
    return (void*)((uintptr_t)this + 0x30);
}
