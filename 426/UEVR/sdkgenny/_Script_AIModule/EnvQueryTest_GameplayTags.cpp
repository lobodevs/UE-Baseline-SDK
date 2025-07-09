#include "..\FUObjectArray.hpp"
#include "EnvQueryTest.hpp"
#include "EnvQueryTest_GameplayTags.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
bool _Script_AIModule::EnvQueryTest_GameplayTags::get_bUpdatedToUseQuery() {
    return (*(uint8_t*)((uintptr_t)this + 0x240 + 0)) & 1 != 0;
}
void* _Script_AIModule::EnvQueryTest_GameplayTags::get_TagQueryToMatch() {
    return (void*)((uintptr_t)this + 0x1f8);
}
void _Script_AIModule::EnvQueryTest_GameplayTags::set_bUpdatedToUseQuery(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x240 + 0);
    *(uint8_t*)((uintptr_t)this + 0x240 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_AIModule::EnvQueryTest_GameplayTags::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.EnvQueryTest_GameplayTags");
    return result;
}
void* _Script_AIModule::EnvQueryTest_GameplayTags::get_GameplayTags() {
    return (void*)((uintptr_t)this + 0x248);
}
void* _Script_AIModule::EnvQueryTest_GameplayTags::get_TagsToMatch() {
    return (void*)((uintptr_t)this + 0x241);
}
