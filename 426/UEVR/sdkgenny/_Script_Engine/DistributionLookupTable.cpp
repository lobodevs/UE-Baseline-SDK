#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DistributionLookupTable.hpp"
void* _Script_Engine::DistributionLookupTable::get_Op() {
    return (void*)((uintptr_t)this + 0x18);
}
float& _Script_Engine::DistributionLookupTable::get_TimeScale() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::DistributionLookupTable::get_TimeBias() {
    return *(float*)((uintptr_t)this + 0x4);
}
void* _Script_Engine::DistributionLookupTable::get_Values() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::DistributionLookupTable::get_LockFlag() {
    return (void*)((uintptr_t)this + 0x1c);
}
void* _Script_Engine::DistributionLookupTable::get_EntryCount() {
    return (void*)((uintptr_t)this + 0x19);
}
void* _Script_Engine::DistributionLookupTable::get_EntryStride() {
    return (void*)((uintptr_t)this + 0x1a);
}
void* _Script_Engine::DistributionLookupTable::get_SubEntryStride() {
    return (void*)((uintptr_t)this + 0x1b);
}
_Script_CoreUObject::Class* _Script_Engine::DistributionLookupTable::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.DistributionLookupTable");
    return result;
}
