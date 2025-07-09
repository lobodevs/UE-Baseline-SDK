#include "..\FUObjectArray.hpp"
#include "..\_Script_AudioExtensions\SoundfieldEncodingSettingsBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SoundSubmixWithParentBase.hpp"
#include "SoundfieldSubmix.hpp"
_Script_CoreUObject::Class* _Script_Engine::SoundfieldSubmix::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SoundfieldSubmix");
    return result;
}
void* _Script_Engine::SoundfieldSubmix::get_SoundfieldEncodingFormat() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_AudioExtensions::SoundfieldEncodingSettingsBase*& _Script_Engine::SoundfieldSubmix::get_EncodingSettings() {
    return *(_Script_AudioExtensions::SoundfieldEncodingSettingsBase**)((uintptr_t)this + 0x48);
}
void* _Script_Engine::SoundfieldSubmix::get_SoundfieldEffectChain() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_Engine::SoundfieldSubmix::get_EncodingSettingsClass() {
    return (void*)((uintptr_t)this + 0x60);
}
