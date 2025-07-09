#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SystemTimeTimecodeProvider.hpp"
#include "TimecodeProvider.hpp"
void* _Script_Engine::SystemTimeTimecodeProvider::get_FrameRate() {
    return (void*)((uintptr_t)this + 0x30);
}
bool _Script_Engine::SystemTimeTimecodeProvider::get_bGenerateFullFrame() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
void _Script_Engine::SystemTimeTimecodeProvider::set_bUseHighPerformanceClock(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x39 + 0);
    *(uint8_t*)((uintptr_t)this + 0x39 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::SystemTimeTimecodeProvider::set_bGenerateFullFrame(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::SystemTimeTimecodeProvider::get_bUseHighPerformanceClock() {
    return (*(uint8_t*)((uintptr_t)this + 0x39 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Engine::SystemTimeTimecodeProvider::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SystemTimeTimecodeProvider");
    return result;
}
