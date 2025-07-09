#include "..\FUObjectArray.hpp"
#include "EnvQueryGenerator_Donut.hpp"
#include "EnvQueryGenerator_ProjectedPoints.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AIModule::EnvQueryGenerator_Donut::get_ArcAngle() {
    return (void*)((uintptr_t)this + 0x180);
}
void* _Script_AIModule::EnvQueryGenerator_Donut::get_ArcDirection() {
    return (void*)((uintptr_t)this + 0x160);
}
void* _Script_AIModule::EnvQueryGenerator_Donut::get_InnerRadius() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_AIModule::EnvQueryGenerator_Donut::get_OuterRadius() {
    return (void*)((uintptr_t)this + 0xb8);
}
void _Script_AIModule::EnvQueryGenerator_Donut::set_bUseSpiralPattern(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1b8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1b8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AIModule::EnvQueryGenerator_Donut::get_NumberOfRings() {
    return (void*)((uintptr_t)this + 0xf0);
}
bool _Script_AIModule::EnvQueryGenerator_Donut::get_bUseSpiralPattern() {
    return (*(uint8_t*)((uintptr_t)this + 0x1b8 + 0)) & 1 != 0;
}
void* _Script_AIModule::EnvQueryGenerator_Donut::get_PointsPerRing() {
    return (void*)((uintptr_t)this + 0x128);
}
void* _Script_AIModule::EnvQueryGenerator_Donut::get_Center() {
    return (void*)((uintptr_t)this + 0x1c0);
}
bool _Script_AIModule::EnvQueryGenerator_Donut::get_bDefineArc() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c8 + 0)) & 1 != 0;
}
void _Script_AIModule::EnvQueryGenerator_Donut::set_bDefineArc(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_AIModule::EnvQueryGenerator_Donut::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.EnvQueryGenerator_Donut");
    return result;
}
