#include "..\FUObjectArray.hpp"
#include "EQSParametrizedQueryExecutionRequest.hpp"
#include "EnvQuery.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AIModule::EQSParametrizedQueryExecutionRequest::get_RunMode() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_AIModule::EnvQuery*& _Script_AIModule::EQSParametrizedQueryExecutionRequest::get_QueryTemplate() {
    return *(_Script_AIModule::EnvQuery**)((uintptr_t)this + 0x0);
}
void* _Script_AIModule::EQSParametrizedQueryExecutionRequest::get_QueryConfig() {
    return (void*)((uintptr_t)this + 0x8);
}
void _Script_AIModule::EQSParametrizedQueryExecutionRequest::set_bUseBBKeyForQueryTemplate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x44 + 0);
    *(uint8_t*)((uintptr_t)this + 0x44 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AIModule::EQSParametrizedQueryExecutionRequest::get_EQSQueryBlackboardKey() {
    return (void*)((uintptr_t)this + 0x18);
}
bool _Script_AIModule::EQSParametrizedQueryExecutionRequest::get_bUseBBKeyForQueryTemplate() {
    return (*(uint8_t*)((uintptr_t)this + 0x44 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_AIModule::EQSParametrizedQueryExecutionRequest::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AIModule.EQSParametrizedQueryExecutionRequest");
    return result;
}
