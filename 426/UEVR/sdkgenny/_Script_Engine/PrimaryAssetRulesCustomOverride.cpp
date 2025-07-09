#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PrimaryAssetRulesCustomOverride.hpp"
void* _Script_Engine::PrimaryAssetRulesCustomOverride::get_Rules() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Engine::PrimaryAssetRulesCustomOverride::get_PrimaryAssetType() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::PrimaryAssetRulesCustomOverride::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.PrimaryAssetRulesCustomOverride");
    return result;
}
void* _Script_Engine::PrimaryAssetRulesCustomOverride::get_FilterDirectory() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::PrimaryAssetRulesCustomOverride::get_FilterString() {
    return (void*)((uintptr_t)this + 0x18);
}
