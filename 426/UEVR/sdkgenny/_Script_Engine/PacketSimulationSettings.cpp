#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PacketSimulationSettings.hpp"
int32_t& _Script_Engine::PacketSimulationSettings::get_PktIncomingLagMax() {
    return *(int32_t*)((uintptr_t)this + 0x28);
}
int32_t& _Script_Engine::PacketSimulationSettings::get_PktLoss() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
int32_t& _Script_Engine::PacketSimulationSettings::get_PktLagVariance() {
    return *(int32_t*)((uintptr_t)this + 0x18);
}
int32_t& _Script_Engine::PacketSimulationSettings::get_PktLossMaxSize() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
int32_t& _Script_Engine::PacketSimulationSettings::get_PktLossMinSize() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
int32_t& _Script_Engine::PacketSimulationSettings::get_PktOrder() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
int32_t& _Script_Engine::PacketSimulationSettings::get_PktLagMin() {
    return *(int32_t*)((uintptr_t)this + 0x1c);
}
int32_t& _Script_Engine::PacketSimulationSettings::get_PktDup() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
int32_t& _Script_Engine::PacketSimulationSettings::get_PktLag() {
    return *(int32_t*)((uintptr_t)this + 0x14);
}
int32_t& _Script_Engine::PacketSimulationSettings::get_PktLagMax() {
    return *(int32_t*)((uintptr_t)this + 0x20);
}
int32_t& _Script_Engine::PacketSimulationSettings::get_PktIncomingLagMin() {
    return *(int32_t*)((uintptr_t)this + 0x24);
}
int32_t& _Script_Engine::PacketSimulationSettings::get_PktIncomingLoss() {
    return *(int32_t*)((uintptr_t)this + 0x2c);
}
int32_t& _Script_Engine::PacketSimulationSettings::get_PktJitter() {
    return *(int32_t*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Engine::PacketSimulationSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.PacketSimulationSettings");
    return result;
}
