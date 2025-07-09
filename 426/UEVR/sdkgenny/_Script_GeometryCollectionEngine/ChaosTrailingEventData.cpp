#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ChaosTrailingEventData.hpp"
_Script_CoreUObject::Class* _Script_GeometryCollectionEngine::ChaosTrailingEventData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/GeometryCollectionEngine.ChaosTrailingEventData");
    return result;
}
void* _Script_GeometryCollectionEngine::ChaosTrailingEventData::get_Velocity() {
    return (void*)((uintptr_t)this + 0xc);
}
void* _Script_GeometryCollectionEngine::ChaosTrailingEventData::get_Location() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_GeometryCollectionEngine::ChaosTrailingEventData::get_AngularVelocity() {
    return (void*)((uintptr_t)this + 0x18);
}
float& _Script_GeometryCollectionEngine::ChaosTrailingEventData::get_Mass() {
    return *(float*)((uintptr_t)this + 0x24);
}
int32_t& _Script_GeometryCollectionEngine::ChaosTrailingEventData::get_ParticleIndex() {
    return *(int32_t*)((uintptr_t)this + 0x28);
}
