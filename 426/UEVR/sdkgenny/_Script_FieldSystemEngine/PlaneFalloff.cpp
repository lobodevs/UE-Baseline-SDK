#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "FieldNodeFloat.hpp"
#include "PlaneFalloff.hpp"
float& _Script_FieldSystemEngine::PlaneFalloff::get_Magnitude() {
    return *(float*)((uintptr_t)this + 0xb0);
}
float& _Script_FieldSystemEngine::PlaneFalloff::get_Distance() {
    return *(float*)((uintptr_t)this + 0xc0);
}
float& _Script_FieldSystemEngine::PlaneFalloff::get_MinRange() {
    return *(float*)((uintptr_t)this + 0xb4);
}
void* _Script_FieldSystemEngine::PlaneFalloff::get_Position() {
    return (void*)((uintptr_t)this + 0xc4);
}
float& _Script_FieldSystemEngine::PlaneFalloff::get_MaxRange() {
    return *(float*)((uintptr_t)this + 0xb8);
}
float& _Script_FieldSystemEngine::PlaneFalloff::get_Default() {
    return *(float*)((uintptr_t)this + 0xbc);
}
void* _Script_FieldSystemEngine::PlaneFalloff::get_Normal() {
    return (void*)((uintptr_t)this + 0xd0);
}
void* _Script_FieldSystemEngine::PlaneFalloff::get_Falloff() {
    return (void*)((uintptr_t)this + 0xdc);
}
_Script_CoreUObject::Class* _Script_FieldSystemEngine::PlaneFalloff::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/FieldSystemEngine.PlaneFalloff");
    return result;
}
_Script_FieldSystemEngine::PlaneFalloff* _Script_FieldSystemEngine::PlaneFalloff::SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, _Script_CoreUObject::Vector Position, _Script_CoreUObject::Vector Normal, void* Falloff) {
    return;
}
