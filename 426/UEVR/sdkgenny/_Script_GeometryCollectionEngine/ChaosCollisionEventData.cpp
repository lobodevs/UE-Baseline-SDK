#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ChaosCollisionEventData.hpp"
_Script_CoreUObject::Class* _Script_GeometryCollectionEngine::ChaosCollisionEventData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/GeometryCollectionEngine.ChaosCollisionEventData");
    return result;
}
void* _Script_GeometryCollectionEngine::ChaosCollisionEventData::get_Location() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_GeometryCollectionEngine::ChaosCollisionEventData::get_Mass2() {
    return *(float*)((uintptr_t)this + 0x34);
}
void* _Script_GeometryCollectionEngine::ChaosCollisionEventData::get_Normal() {
    return (void*)((uintptr_t)this + 0xc);
}
void* _Script_GeometryCollectionEngine::ChaosCollisionEventData::get_Velocity1() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_GeometryCollectionEngine::ChaosCollisionEventData::get_Velocity2() {
    return (void*)((uintptr_t)this + 0x24);
}
float& _Script_GeometryCollectionEngine::ChaosCollisionEventData::get_Mass1() {
    return *(float*)((uintptr_t)this + 0x30);
}
void* _Script_GeometryCollectionEngine::ChaosCollisionEventData::get_Impulse() {
    return (void*)((uintptr_t)this + 0x38);
}
