#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CollectionParameterBase.hpp"
void* _Script_Engine::CollectionParameterBase::get_ParameterName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::CollectionParameterBase::get_ID() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::CollectionParameterBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.CollectionParameterBase");
    return result;
}
