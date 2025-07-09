#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParameterChannelNames.hpp"
void* _Script_Engine::ParameterChannelNames::get_R() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::ParameterChannelNames::get_A() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_Engine::ParameterChannelNames::get_G() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_Engine::ParameterChannelNames::get_B() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Engine::ParameterChannelNames::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ParameterChannelNames");
    return result;
}
