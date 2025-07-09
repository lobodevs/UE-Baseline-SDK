#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "FastArraySerializer.hpp"
_Script_CoreUObject::Class* _Script_Engine::FastArraySerializer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.FastArraySerializer");
    return result;
}
int32_t& _Script_Engine::FastArraySerializer::get_ArrayReplicationKey() {
    return *(int32_t*)((uintptr_t)this + 0x54);
}
void* _Script_Engine::FastArraySerializer::get_DeltaFlags() {
    return (void*)((uintptr_t)this + 0x100);
}
