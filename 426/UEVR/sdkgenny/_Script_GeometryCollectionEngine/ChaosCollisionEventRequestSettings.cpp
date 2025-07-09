#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ChaosCollisionEventRequestSettings.hpp"
int32_t& _Script_GeometryCollectionEngine::ChaosCollisionEventRequestSettings::get_MaxNumberResults() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
float& _Script_GeometryCollectionEngine::ChaosCollisionEventRequestSettings::get_MinMass() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_GeometryCollectionEngine::ChaosCollisionEventRequestSettings::get_MinSpeed() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_GeometryCollectionEngine::ChaosCollisionEventRequestSettings::get_MinImpulse() {
    return *(float*)((uintptr_t)this + 0xc);
}
void* _Script_GeometryCollectionEngine::ChaosCollisionEventRequestSettings::get_SortMethod() {
    return (void*)((uintptr_t)this + 0x14);
}
float& _Script_GeometryCollectionEngine::ChaosCollisionEventRequestSettings::get_MaxDistance() {
    return *(float*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_GeometryCollectionEngine::ChaosCollisionEventRequestSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/GeometryCollectionEngine.ChaosCollisionEventRequestSettings");
    return result;
}
