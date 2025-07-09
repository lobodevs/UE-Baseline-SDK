#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_DeveloperSettings\DeveloperSettings.hpp"
#include "CollisionProfile.hpp"
void* _Script_Engine::CollisionProfile::get_Profiles() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_Engine::CollisionProfile::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.CollisionProfile");
    return result;
}
void* _Script_Engine::CollisionProfile::get_DefaultChannelResponses() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_Engine::CollisionProfile::get_EditProfiles() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_Engine::CollisionProfile::get_ProfileRedirects() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_Engine::CollisionProfile::get_CollisionChannelRedirects() {
    return (void*)((uintptr_t)this + 0x78);
}
