#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ChaosBreakingEventData.hpp"
float& _Script_GeometryCollectionEngine::ChaosBreakingEventData::get_Mass() {
    return *(float*)((uintptr_t)this + 0x18);
}
void* _Script_GeometryCollectionEngine::ChaosBreakingEventData::get_Location() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_GeometryCollectionEngine::ChaosBreakingEventData::get_Velocity() {
    return (void*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_GeometryCollectionEngine::ChaosBreakingEventData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/GeometryCollectionEngine.ChaosBreakingEventData");
    return result;
}
