#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "Level.hpp"
#include "RollbackNetStartupActorInfo.hpp"
_Script_CoreUObject::Object*& _Script_Engine::RollbackNetStartupActorInfo::get_Archetype() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x8);
}
_Script_Engine::Level*& _Script_Engine::RollbackNetStartupActorInfo::get_Level() {
    return *(_Script_Engine::Level**)((uintptr_t)this + 0x38);
}
void* _Script_Engine::RollbackNetStartupActorInfo::get_ObjReferences() {
    return (void*)((uintptr_t)this + 0xa0);
}
_Script_CoreUObject::Class* _Script_Engine::RollbackNetStartupActorInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RollbackNetStartupActorInfo");
    return result;
}
