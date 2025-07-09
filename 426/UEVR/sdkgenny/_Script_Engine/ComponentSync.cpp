#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ComponentSync.hpp"
void* _Script_Engine::ComponentSync::get_Name() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::ComponentSync::get_SyncOption() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::ComponentSync::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ComponentSync");
    return result;
}
