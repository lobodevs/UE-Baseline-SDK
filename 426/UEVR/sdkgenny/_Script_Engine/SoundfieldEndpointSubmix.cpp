#include "..\FUObjectArray.hpp"
#include "..\_Script_AudioExtensions\SoundfieldEncodingSettingsBase.hpp"
#include "..\_Script_AudioExtensions\SoundfieldEndpointSettingsBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SoundSubmixBase.hpp"
#include "SoundfieldEndpointSubmix.hpp"
_Script_CoreUObject::Class* _Script_Engine::SoundfieldEndpointSubmix::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SoundfieldEndpointSubmix");
    return result;
}
void* _Script_Engine::SoundfieldEndpointSubmix::get_EncodingSettingsClass() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_Engine::SoundfieldEndpointSubmix::get_SoundfieldEndpointType() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Engine::SoundfieldEndpointSubmix::get_EndpointSettingsClass() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_AudioExtensions::SoundfieldEndpointSettingsBase*& _Script_Engine::SoundfieldEndpointSubmix::get_EndpointSettings() {
    return *(_Script_AudioExtensions::SoundfieldEndpointSettingsBase**)((uintptr_t)this + 0x48);
}
_Script_AudioExtensions::SoundfieldEncodingSettingsBase*& _Script_Engine::SoundfieldEndpointSubmix::get_EncodingSettings() {
    return *(_Script_AudioExtensions::SoundfieldEncodingSettingsBase**)((uintptr_t)this + 0x58);
}
void* _Script_Engine::SoundfieldEndpointSubmix::get_SoundfieldEffectChain() {
    return (void*)((uintptr_t)this + 0x60);
}
