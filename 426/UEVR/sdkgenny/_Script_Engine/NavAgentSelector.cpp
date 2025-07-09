#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NavAgentSelector.hpp"
bool _Script_Engine::NavAgentSelector::get_bSupportsAgent0() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_Engine::NavAgentSelector::set_bSupportsAgent0(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::NavAgentSelector::set_bSupportsAgent1(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::NavAgentSelector::get_bSupportsAgent1() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 2 != 0;
}
void _Script_Engine::NavAgentSelector::set_bSupportsAgent3(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::NavAgentSelector::get_bSupportsAgent2() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 4 != 0;
}
void _Script_Engine::NavAgentSelector::set_bSupportsAgent2(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::NavAgentSelector::get_bSupportsAgent3() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 8 != 0;
}
bool _Script_Engine::NavAgentSelector::get_bSupportsAgent4() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 16 != 0;
}
void _Script_Engine::NavAgentSelector::set_bSupportsAgent4(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::NavAgentSelector::get_bSupportsAgent5() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 32 != 0;
}
void _Script_Engine::NavAgentSelector::set_bSupportsAgent5(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::NavAgentSelector::get_bSupportsAgent6() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 64 != 0;
}
void _Script_Engine::NavAgentSelector::set_bSupportsAgent6(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::NavAgentSelector::get_bSupportsAgent7() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 128 != 0;
}
void _Script_Engine::NavAgentSelector::set_bSupportsAgent7(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::NavAgentSelector::get_bSupportsAgent8() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 1 != 0;
}
void _Script_Engine::NavAgentSelector::set_bSupportsAgent8(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::NavAgentSelector::get_bSupportsAgent9() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 2 != 0;
}
void _Script_Engine::NavAgentSelector::set_bSupportsAgent9(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::NavAgentSelector::get_bSupportsAgent10() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 4 != 0;
}
void _Script_Engine::NavAgentSelector::set_bSupportsAgent10(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::NavAgentSelector::get_bSupportsAgent11() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 8 != 0;
}
void _Script_Engine::NavAgentSelector::set_bSupportsAgent11(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::NavAgentSelector::get_bSupportsAgent12() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 16 != 0;
}
void _Script_Engine::NavAgentSelector::set_bSupportsAgent12(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::NavAgentSelector::get_bSupportsAgent13() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 32 != 0;
}
void _Script_Engine::NavAgentSelector::set_bSupportsAgent13(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::NavAgentSelector::get_bSupportsAgent14() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 64 != 0;
}
void _Script_Engine::NavAgentSelector::set_bSupportsAgent14(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::NavAgentSelector::get_bSupportsAgent15() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 128 != 0;
}
void _Script_Engine::NavAgentSelector::set_bSupportsAgent15(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::NavAgentSelector::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.NavAgentSelector");
    return result;
}
