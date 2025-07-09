#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NetworkEmulationProfileDescription.hpp"
void* _Script_Engine::NetworkEmulationProfileDescription::get_ProfileName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::NetworkEmulationProfileDescription::get_ToolTip() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Engine::NetworkEmulationProfileDescription::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.NetworkEmulationProfileDescription");
    return result;
}
