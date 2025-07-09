#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "FoliageType.hpp"
#include "FoliageType_Actor.hpp"
void* _Script_Foliage::FoliageType_Actor::get_ActorClass() {
    return (void*)((uintptr_t)this + 0x3a8);
}
bool _Script_Foliage::FoliageType_Actor::get_bShouldAttachToBaseComponent() {
    return (*(uint8_t*)((uintptr_t)this + 0x3b0 + 0)) & 1 != 0;
}
void _Script_Foliage::FoliageType_Actor::set_bShouldAttachToBaseComponent(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3b0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3b0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Foliage::FoliageType_Actor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Foliage.FoliageType_Actor");
    return result;
}
