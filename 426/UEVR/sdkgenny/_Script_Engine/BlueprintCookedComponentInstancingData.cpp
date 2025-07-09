#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BlueprintCookedComponentInstancingData.hpp"
bool _Script_Engine::BlueprintCookedComponentInstancingData::get_bHasValidCookedData() {
    return (*(uint8_t*)((uintptr_t)this + 0x21 + 0)) & 1 != 0;
}
void* _Script_Engine::BlueprintCookedComponentInstancingData::get_ChangedPropertyList() {
    return (void*)((uintptr_t)this + 0x0);
}
void _Script_Engine::BlueprintCookedComponentInstancingData::set_bHasValidCookedData(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x21 + 0);
    *(uint8_t*)((uintptr_t)this + 0x21 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::BlueprintCookedComponentInstancingData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.BlueprintCookedComponentInstancingData");
    return result;
}
