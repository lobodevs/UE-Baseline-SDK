#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ContentWidget.hpp"
#include "InvalidationBox.hpp"
bool _Script_UMG::InvalidationBox::GetCanCache() {
    return;
}
bool _Script_UMG::InvalidationBox::get_bCanCache() {
    return (*(uint8_t*)((uintptr_t)this + 0x120 + 0)) & 1 != 0;
}
void _Script_UMG::InvalidationBox::InvalidateCache() {
    return;
}
void _Script_UMG::InvalidationBox::SetCanCache(bool CanCache) {
    return;
}
void _Script_UMG::InvalidationBox::set_bCanCache(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x120 + 0);
    *(uint8_t*)((uintptr_t)this + 0x120 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::InvalidationBox::get_CacheRelativeTransforms() {
    return (*(uint8_t*)((uintptr_t)this + 0x121 + 0)) & 1 != 0;
}
void _Script_UMG::InvalidationBox::set_CacheRelativeTransforms(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x121 + 0);
    *(uint8_t*)((uintptr_t)this + 0x121 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_UMG::InvalidationBox::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.InvalidationBox");
    return result;
}
