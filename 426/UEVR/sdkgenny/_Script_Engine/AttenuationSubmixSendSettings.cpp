#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AttenuationSubmixSendSettings.hpp"
#include "SoundSubmixBase.hpp"
float& _Script_Engine::AttenuationSubmixSendSettings::get_ManualSubmixSendLevel() {
    return *(float*)((uintptr_t)this + 0x1c);
}
_Script_Engine::SoundSubmixBase*& _Script_Engine::AttenuationSubmixSendSettings::get_Submix() {
    return *(_Script_Engine::SoundSubmixBase**)((uintptr_t)this + 0x0);
}
void* _Script_Engine::AttenuationSubmixSendSettings::get_SubmixSendMethod() {
    return (void*)((uintptr_t)this + 0x8);
}
float& _Script_Engine::AttenuationSubmixSendSettings::get_SubmixSendLevelMax() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_Engine::AttenuationSubmixSendSettings::get_SubmixSendLevelMin() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_Engine::AttenuationSubmixSendSettings::get_SubmixSendDistanceMin() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Script_Engine::AttenuationSubmixSendSettings::get_SubmixSendDistanceMax() {
    return *(float*)((uintptr_t)this + 0x18);
}
void* _Script_Engine::AttenuationSubmixSendSettings::get_CustomSubmixSendCurve() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_Engine::AttenuationSubmixSendSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AttenuationSubmixSendSettings");
    return result;
}
