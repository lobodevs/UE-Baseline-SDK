#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ChannelDefinition.hpp"
void* _Script_Engine::ChannelDefinition::get_ChannelName() {
    return (void*)((uintptr_t)this + 0x0);
}
bool _Script_Engine::ChannelDefinition::get_bTickOnCreate() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c + 0)) & 1 != 0;
}
void* _Script_Engine::ChannelDefinition::get_ClassName() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::ChannelDefinition::get_ChannelClass() {
    return (void*)((uintptr_t)this + 0x10);
}
void _Script_Engine::ChannelDefinition::set_bTickOnCreate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Engine::ChannelDefinition::get_StaticChannelIndex() {
    return *(int32_t*)((uintptr_t)this + 0x18);
}
bool _Script_Engine::ChannelDefinition::get_bServerOpen() {
    return (*(uint8_t*)((uintptr_t)this + 0x1d + 0)) & 1 != 0;
}
void _Script_Engine::ChannelDefinition::set_bServerOpen(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1d + 0);
    *(uint8_t*)((uintptr_t)this + 0x1d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::ChannelDefinition::get_bClientOpen() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e + 0)) & 1 != 0;
}
void _Script_Engine::ChannelDefinition::set_bClientOpen(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::ChannelDefinition::get_bInitialServer() {
    return (*(uint8_t*)((uintptr_t)this + 0x1f + 0)) & 1 != 0;
}
void _Script_Engine::ChannelDefinition::set_bInitialServer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1f + 0);
    *(uint8_t*)((uintptr_t)this + 0x1f + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::ChannelDefinition::get_bInitialClient() {
    return (*(uint8_t*)((uintptr_t)this + 0x20 + 0)) & 1 != 0;
}
void _Script_Engine::ChannelDefinition::set_bInitialClient(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20 + 0);
    *(uint8_t*)((uintptr_t)this + 0x20 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::ChannelDefinition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ChannelDefinition");
    return result;
}
