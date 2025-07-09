#include "..\FUObjectArray.hpp"
#include "AINoiseEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
void* _Script_AIModule::AINoiseEvent::get_NoiseLocation() {
    return (void*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_AIModule::AINoiseEvent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AIModule.AINoiseEvent");
    return result;
}
float& _Script_AIModule::AINoiseEvent::get_MaxRange() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Script_AIModule::AINoiseEvent::get_Loudness() {
    return *(float*)((uintptr_t)this + 0x10);
}
_Script_Engine::Actor*& _Script_AIModule::AINoiseEvent::get_Instigator() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x18);
}
void* _Script_AIModule::AINoiseEvent::get_Tag() {
    return (void*)((uintptr_t)this + 0x20);
}
