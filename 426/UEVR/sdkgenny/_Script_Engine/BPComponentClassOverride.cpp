#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BPComponentClassOverride.hpp"
void* _Script_Engine::BPComponentClassOverride::get_ComponentName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::BPComponentClassOverride::get_ComponentClass() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::BPComponentClassOverride::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.BPComponentClassOverride");
    return result;
}
