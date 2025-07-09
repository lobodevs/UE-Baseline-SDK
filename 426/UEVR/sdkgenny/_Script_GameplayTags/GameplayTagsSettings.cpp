#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GameplayTagsList.hpp"
#include "GameplayTagsSettings.hpp"
bool _Script_GameplayTags::GameplayTagsSettings::get_ImportTagsFromConfig() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 1 != 0;
}
void _Script_GameplayTags::GameplayTagsSettings::set_ImportTagsFromConfig(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_GameplayTags::GameplayTagsSettings::get_CategoryRemapping() {
    return (void*)((uintptr_t)this + 0x60);
}
bool _Script_GameplayTags::GameplayTagsSettings::get_WarnOnInvalidTags() {
    return (*(uint8_t*)((uintptr_t)this + 0x49 + 0)) & 1 != 0;
}
void _Script_GameplayTags::GameplayTagsSettings::set_FastReplication(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4a + 0);
    *(uint8_t*)((uintptr_t)this + 0x4a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_GameplayTags::GameplayTagsSettings::set_WarnOnInvalidTags(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x49 + 0);
    *(uint8_t*)((uintptr_t)this + 0x49 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_GameplayTags::GameplayTagsSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/GameplayTags.GameplayTagsSettings");
    return result;
}
bool _Script_GameplayTags::GameplayTagsSettings::get_FastReplication() {
    return (*(uint8_t*)((uintptr_t)this + 0x4a + 0)) & 1 != 0;
}
void* _Script_GameplayTags::GameplayTagsSettings::get_InvalidTagCharacters() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_GameplayTags::GameplayTagsSettings::get_GameplayTagTableList() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_GameplayTags::GameplayTagsSettings::get_GameplayTagRedirects() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_GameplayTags::GameplayTagsSettings::get_CommonlyReplicatedTags() {
    return (void*)((uintptr_t)this + 0x90);
}
int32_t& _Script_GameplayTags::GameplayTagsSettings::get_NumBitsForContainerSize() {
    return *(int32_t*)((uintptr_t)this + 0xa0);
}
int32_t& _Script_GameplayTags::GameplayTagsSettings::get_NetIndexFirstBitSegment() {
    return *(int32_t*)((uintptr_t)this + 0xa4);
}
void* _Script_GameplayTags::GameplayTagsSettings::get_RestrictedConfigFiles() {
    return (void*)((uintptr_t)this + 0xa8);
}
