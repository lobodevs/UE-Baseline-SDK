#include "..\FUObjectArray.hpp"
#include "..\_Script_AudioExtensions\AudioEndpointSettingsBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "EndpointSubmix.hpp"
#include "SoundSubmixBase.hpp"
void* _Script_Engine::EndpointSubmix::get_EndpointType() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Engine::EndpointSubmix::get_EndpointSettingsClass() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_Engine::EndpointSubmix::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.EndpointSubmix");
    return result;
}
_Script_AudioExtensions::AudioEndpointSettingsBase*& _Script_Engine::EndpointSubmix::get_EndpointSettings() {
    return *(_Script_AudioExtensions::AudioEndpointSettingsBase**)((uintptr_t)this + 0x48);
}
