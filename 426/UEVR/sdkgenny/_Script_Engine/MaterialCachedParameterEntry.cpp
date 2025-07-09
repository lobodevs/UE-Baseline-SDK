#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialCachedParameterEntry.hpp"
void* _Script_Engine::MaterialCachedParameterEntry::get_ParameterInfos() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::MaterialCachedParameterEntry::get_NameHashes() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::MaterialCachedParameterEntry::get_ExpressionGuids() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Engine::MaterialCachedParameterEntry::get_Overrides() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialCachedParameterEntry::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.MaterialCachedParameterEntry");
    return result;
}
