#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ContentWidget.hpp"
#include "ScaleBox.hpp"
void _Script_UMG::ScaleBox::SetUserSpecifiedScale(float InUserSpecifiedScale) {
    return;
}
void* _Script_UMG::ScaleBox::get_Stretch() {
    return (void*)((uintptr_t)this + 0x120);
}
_Script_CoreUObject::Class* _Script_UMG::ScaleBox::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.ScaleBox");
    return result;
}
void* _Script_UMG::ScaleBox::get_StretchDirection() {
    return (void*)((uintptr_t)this + 0x121);
}
float& _Script_UMG::ScaleBox::get_UserSpecifiedScale() {
    return *(float*)((uintptr_t)this + 0x124);
}
bool _Script_UMG::ScaleBox::get_IgnoreInheritedScale() {
    return (*(uint8_t*)((uintptr_t)this + 0x128 + 0)) & 1 != 0;
}
void _Script_UMG::ScaleBox::set_IgnoreInheritedScale(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x128 + 0);
    *(uint8_t*)((uintptr_t)this + 0x128 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_UMG::ScaleBox::SetStretchDirection(void* InStretchDirection) {
    return;
}
void _Script_UMG::ScaleBox::SetStretch(void* InStretch) {
    return;
}
void _Script_UMG::ScaleBox::SetIgnoreInheritedScale(bool bInIgnoreInheritedScale) {
    return;
}
