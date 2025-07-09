#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "NavigationInvokerComponent.hpp"
float& _Script_NavigationSystem::NavigationInvokerComponent::get_TileGenerationRadius() {
    return *(float*)((uintptr_t)this + 0xb0);
}
float& _Script_NavigationSystem::NavigationInvokerComponent::get_TileRemovalRadius() {
    return *(float*)((uintptr_t)this + 0xb4);
}
_Script_CoreUObject::Class* _Script_NavigationSystem::NavigationInvokerComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/NavigationSystem.NavigationInvokerComponent");
    return result;
}
