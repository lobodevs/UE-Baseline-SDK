#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_DeveloperSettings\DeveloperSettings.hpp"
#include "GameplayTagsDeveloperSettings.hpp"
void* _Script_GameplayTags::GameplayTagsDeveloperSettings::get_DeveloperConfigName() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_GameplayTags::GameplayTagsDeveloperSettings::get_FavoriteTagSource() {
    return (void*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_GameplayTags::GameplayTagsDeveloperSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/GameplayTags.GameplayTagsDeveloperSettings");
    return result;
}
