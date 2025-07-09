#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ChaosTrailingEventRequestSettings.hpp"
float& _Script_GeometryCollectionEngine::ChaosTrailingEventRequestSettings::get_MaxDistance() {
    return *(float*)((uintptr_t)this + 0x10);
}
int32_t& _Script_GeometryCollectionEngine::ChaosTrailingEventRequestSettings::get_MaxNumberOfResults() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
float& _Script_GeometryCollectionEngine::ChaosTrailingEventRequestSettings::get_MinMass() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_GeometryCollectionEngine::ChaosTrailingEventRequestSettings::get_MinSpeed() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_GeometryCollectionEngine::ChaosTrailingEventRequestSettings::get_MinAngularSpeed() {
    return *(float*)((uintptr_t)this + 0xc);
}
void* _Script_GeometryCollectionEngine::ChaosTrailingEventRequestSettings::get_SortMethod() {
    return (void*)((uintptr_t)this + 0x14);
}
_Script_CoreUObject::Class* _Script_GeometryCollectionEngine::ChaosTrailingEventRequestSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/GeometryCollectionEngine.ChaosTrailingEventRequestSettings");
    return result;
}
