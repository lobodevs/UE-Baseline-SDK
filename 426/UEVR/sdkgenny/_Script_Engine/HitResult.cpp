#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HitResult.hpp"
float& _Script_Engine::HitResult::get_Time() {
    return *(float*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::HitResult::get_Actor() {
    return (void*)((uintptr_t)this + 0x6c);
}
void _Script_Engine::HitResult::set_bBlockingHit(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::HitResult::get_bBlockingHit() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void* _Script_Engine::HitResult::get_BoneName() {
    return (void*)((uintptr_t)this + 0x7c);
}
int32_t& _Script_Engine::HitResult::get_FaceIndex() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
void _Script_Engine::HitResult::set_bStartPenetrating(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::HitResult::get_bStartPenetrating() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 2 != 0;
}
float& _Script_Engine::HitResult::get_Distance() {
    return *(float*)((uintptr_t)this + 0xc);
}
void* _Script_Engine::HitResult::get_Location() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::HitResult::get_PhysMaterial() {
    return (void*)((uintptr_t)this + 0x64);
}
void* _Script_Engine::HitResult::get_ImpactPoint() {
    return (void*)((uintptr_t)this + 0x1c);
}
void* _Script_Engine::HitResult::get_Normal() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Engine::HitResult::get_ImpactNormal() {
    return (void*)((uintptr_t)this + 0x34);
}
void* _Script_Engine::HitResult::get_TraceStart() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::HitResult::get_TraceEnd() {
    return (void*)((uintptr_t)this + 0x4c);
}
float& _Script_Engine::HitResult::get_PenetrationDepth() {
    return *(float*)((uintptr_t)this + 0x58);
}
int32_t& _Script_Engine::HitResult::get_Item() {
    return *(int32_t*)((uintptr_t)this + 0x5c);
}
void* _Script_Engine::HitResult::get_ElementIndex() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_Engine::HitResult::get_Component() {
    return (void*)((uintptr_t)this + 0x74);
}
void* _Script_Engine::HitResult::get_MyBoneName() {
    return (void*)((uintptr_t)this + 0x84);
}
_Script_CoreUObject::Class* _Script_Engine::HitResult::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.HitResult");
    return result;
}
