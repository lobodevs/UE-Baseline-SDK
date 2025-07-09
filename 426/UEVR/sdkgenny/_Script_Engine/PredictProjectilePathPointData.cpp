#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PredictProjectilePathPointData.hpp"
float& _Script_Engine::PredictProjectilePathPointData::get_Time() {
    return *(float*)((uintptr_t)this + 0x18);
}
void* _Script_Engine::PredictProjectilePathPointData::get_Location() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::PredictProjectilePathPointData::get_Velocity() {
    return (void*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_Engine::PredictProjectilePathPointData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.PredictProjectilePathPointData");
    return result;
}
