#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SoundSubmixBase.hpp"
#include "SoundSubmixSendInfo.hpp"
float& _Script_Engine::SoundSubmixSendInfo::get_MinSendDistance() {
    return *(float*)((uintptr_t)this + 0x1c);
}
float& _Script_Engine::SoundSubmixSendInfo::get_SendLevel() {
    return *(float*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::SoundSubmixSendInfo::get_SendLevelControlMethod() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_Engine::SoundSubmixBase*& _Script_Engine::SoundSubmixSendInfo::get_SoundSubmix() {
    return *(_Script_Engine::SoundSubmixBase**)((uintptr_t)this + 0x8);
}
void* _Script_Engine::SoundSubmixSendInfo::get_SendStage() {
    return (void*)((uintptr_t)this + 0x1);
}
float& _Script_Engine::SoundSubmixSendInfo::get_MaxSendLevel() {
    return *(float*)((uintptr_t)this + 0x18);
}
float& _Script_Engine::SoundSubmixSendInfo::get_MinSendLevel() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Script_Engine::SoundSubmixSendInfo::get_MaxSendDistance() {
    return *(float*)((uintptr_t)this + 0x20);
}
void* _Script_Engine::SoundSubmixSendInfo::get_CustomSendLevelCurve() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_Engine::SoundSubmixSendInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SoundSubmixSendInfo");
    return result;
}
