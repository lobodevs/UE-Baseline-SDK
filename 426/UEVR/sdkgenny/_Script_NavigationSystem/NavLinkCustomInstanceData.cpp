#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponentInstanceData.hpp"
#include "NavLinkCustomInstanceData.hpp"
void* _Script_NavigationSystem::NavLinkCustomInstanceData::get_NavLinkUserId() {
    return (void*)((uintptr_t)this + 0x68);
}
_Script_CoreUObject::Class* _Script_NavigationSystem::NavLinkCustomInstanceData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/NavigationSystem.NavLinkCustomInstanceData");
    return result;
}
