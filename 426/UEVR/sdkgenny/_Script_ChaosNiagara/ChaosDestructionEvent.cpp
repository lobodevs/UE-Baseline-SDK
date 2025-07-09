#include "..\FUObjectArray.hpp"
#include "ChaosDestructionEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_ChaosNiagara::ChaosDestructionEvent::get_ExtentMin() {
    return *(float*)((uintptr_t)this + 0x30);
}
void* _Script_ChaosNiagara::ChaosDestructionEvent::get_Position() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_ChaosNiagara::ChaosDestructionEvent::get_Normal() {
    return (void*)((uintptr_t)this + 0xc);
}
void* _Script_ChaosNiagara::ChaosDestructionEvent::get_Velocity() {
    return (void*)((uintptr_t)this + 0x18);
}
float& _Script_ChaosNiagara::ChaosDestructionEvent::get_Time() {
    return *(float*)((uintptr_t)this + 0x3c);
}
void* _Script_ChaosNiagara::ChaosDestructionEvent::get_AngularVelocity() {
    return (void*)((uintptr_t)this + 0x24);
}
float& _Script_ChaosNiagara::ChaosDestructionEvent::get_ExtentMax() {
    return *(float*)((uintptr_t)this + 0x34);
}
int32_t& _Script_ChaosNiagara::ChaosDestructionEvent::get_ParticleID() {
    return *(int32_t*)((uintptr_t)this + 0x38);
}
int32_t& _Script_ChaosNiagara::ChaosDestructionEvent::get_Type() {
    return *(int32_t*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_ChaosNiagara::ChaosDestructionEvent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ChaosNiagara.ChaosDestructionEvent");
    return result;
}
