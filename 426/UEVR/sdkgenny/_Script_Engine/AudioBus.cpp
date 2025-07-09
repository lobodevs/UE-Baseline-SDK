#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "AudioBus.hpp"
_Script_CoreUObject::Class* _Script_Engine::AudioBus::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AudioBus");
    return result;
}
void* _Script_Engine::AudioBus::get_AudioBusChannels() {
    return (void*)((uintptr_t)this + 0x28);
}
bool _Script_Engine::AudioBus::get_bIsAutomatic() {
    return (*(uint8_t*)((uintptr_t)this + 0x29 + 0)) & 1 != 0;
}
void _Script_Engine::AudioBus::set_bIsAutomatic(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x29 + 0);
    *(uint8_t*)((uintptr_t)this + 0x29 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
