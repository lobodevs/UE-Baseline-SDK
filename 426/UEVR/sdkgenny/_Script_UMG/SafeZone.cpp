#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ContentWidget.hpp"
#include "SafeZone.hpp"
bool _Script_UMG::SafeZone::get_PadLeft() {
    return (*(uint8_t*)((uintptr_t)this + 0x120 + 0)) & 1 != 0;
}
void _Script_UMG::SafeZone::set_PadTop(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x122 + 0);
    *(uint8_t*)((uintptr_t)this + 0x122 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_UMG::SafeZone::set_PadLeft(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x120 + 0);
    *(uint8_t*)((uintptr_t)this + 0x120 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::SafeZone::get_PadRight() {
    return (*(uint8_t*)((uintptr_t)this + 0x121 + 0)) & 1 != 0;
}
bool _Script_UMG::SafeZone::get_PadTop() {
    return (*(uint8_t*)((uintptr_t)this + 0x122 + 0)) & 1 != 0;
}
void _Script_UMG::SafeZone::set_PadRight(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x121 + 0);
    *(uint8_t*)((uintptr_t)this + 0x121 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::SafeZone::get_PadBottom() {
    return (*(uint8_t*)((uintptr_t)this + 0x123 + 0)) & 1 != 0;
}
void _Script_UMG::SafeZone::set_PadBottom(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x123 + 0);
    *(uint8_t*)((uintptr_t)this + 0x123 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_UMG::SafeZone::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.SafeZone");
    return result;
}
void _Script_UMG::SafeZone::SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom) {
    return;
}
