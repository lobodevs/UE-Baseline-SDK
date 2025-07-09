#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Volume.hpp"
#include "NavModifierVolume.hpp"
void* _Script_NavigationSystem::NavModifierVolume::get_AreaClass() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_CoreUObject::Class* _Script_NavigationSystem::NavModifierVolume::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/NavigationSystem.NavModifierVolume");
    return result;
}
bool _Script_NavigationSystem::NavModifierVolume::get_bMaskFillCollisionUnderneathForNavmesh() {
    return (*(uint8_t*)((uintptr_t)this + 0x268 + 0)) & 1 != 0;
}
void _Script_NavigationSystem::NavModifierVolume::SetAreaClass(void* NewAreaClass) {
    return;
}
void _Script_NavigationSystem::NavModifierVolume::set_bMaskFillCollisionUnderneathForNavmesh(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x268 + 0);
    *(uint8_t*)((uintptr_t)this + 0x268 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
