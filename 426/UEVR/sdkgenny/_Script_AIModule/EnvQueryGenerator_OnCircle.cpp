#include "..\FUObjectArray.hpp"
#include "EnvQueryGenerator_OnCircle.hpp"
#include "EnvQueryGenerator_ProjectedPoints.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AIModule::EnvQueryGenerator_OnCircle::get_CircleCenter() {
    return (void*)((uintptr_t)this + 0x190);
}
void* _Script_AIModule::EnvQueryGenerator_OnCircle::get_ArcAngle() {
    return (void*)((uintptr_t)this + 0x150);
}
void* _Script_AIModule::EnvQueryGenerator_OnCircle::get_CircleRadius() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_AIModule::EnvQueryGenerator_OnCircle::get_SpaceBetween() {
    return (void*)((uintptr_t)this + 0xb8);
}
void* _Script_AIModule::EnvQueryGenerator_OnCircle::get_NumberOfPoints() {
    return (void*)((uintptr_t)this + 0xf0);
}
void* _Script_AIModule::EnvQueryGenerator_OnCircle::get_PointOnCircleSpacingMethod() {
    return (void*)((uintptr_t)this + 0x128);
}
void* _Script_AIModule::EnvQueryGenerator_OnCircle::get_ArcDirection() {
    return (void*)((uintptr_t)this + 0x130);
}
float& _Script_AIModule::EnvQueryGenerator_OnCircle::get_AngleRadians() {
    return *(float*)((uintptr_t)this + 0x188);
}
bool _Script_AIModule::EnvQueryGenerator_OnCircle::get_bIgnoreAnyContextActorsWhenGeneratingCircle() {
    return (*(uint8_t*)((uintptr_t)this + 0x198 + 0)) & 1 != 0;
}
void _Script_AIModule::EnvQueryGenerator_OnCircle::set_bIgnoreAnyContextActorsWhenGeneratingCircle(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x198 + 0);
    *(uint8_t*)((uintptr_t)this + 0x198 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AIModule::EnvQueryGenerator_OnCircle::get_CircleCenterZOffset() {
    return (void*)((uintptr_t)this + 0x1a0);
}
void* _Script_AIModule::EnvQueryGenerator_OnCircle::get_TraceData() {
    return (void*)((uintptr_t)this + 0x1d8);
}
bool _Script_AIModule::EnvQueryGenerator_OnCircle::get_bDefineArc() {
    return (*(uint8_t*)((uintptr_t)this + 0x208 + 0)) & 1 != 0;
}
void _Script_AIModule::EnvQueryGenerator_OnCircle::set_bDefineArc(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x208 + 0);
    *(uint8_t*)((uintptr_t)this + 0x208 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_AIModule::EnvQueryGenerator_OnCircle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.EnvQueryGenerator_OnCircle");
    return result;
}
