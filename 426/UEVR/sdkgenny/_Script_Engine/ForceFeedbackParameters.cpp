#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ForceFeedbackParameters.hpp"
_Script_CoreUObject::Class* _Script_Engine::ForceFeedbackParameters::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ForceFeedbackParameters");
    return result;
}
void* _Script_Engine::ForceFeedbackParameters::get_Tag() {
    return (void*)((uintptr_t)this + 0x0);
}
bool _Script_Engine::ForceFeedbackParameters::get_bLooping() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
void _Script_Engine::ForceFeedbackParameters::set_bLooping(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::ForceFeedbackParameters::get_bIgnoreTimeDilation() {
    return (*(uint8_t*)((uintptr_t)this + 0x9 + 0)) & 1 != 0;
}
bool _Script_Engine::ForceFeedbackParameters::get_bPlayWhilePaused() {
    return (*(uint8_t*)((uintptr_t)this + 0xa + 0)) & 1 != 0;
}
void _Script_Engine::ForceFeedbackParameters::set_bIgnoreTimeDilation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::ForceFeedbackParameters::set_bPlayWhilePaused(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa + 0);
    *(uint8_t*)((uintptr_t)this + 0xa + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
