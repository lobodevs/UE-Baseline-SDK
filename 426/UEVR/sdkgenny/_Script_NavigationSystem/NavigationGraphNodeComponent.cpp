#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "NavigationGraphNodeComponent.hpp"
_Script_NavigationSystem::NavigationGraphNodeComponent*& _Script_NavigationSystem::NavigationGraphNodeComponent::get_PrevNodeComponent() {
    return *(_Script_NavigationSystem::NavigationGraphNodeComponent**)((uintptr_t)this + 0x218);
}
void* _Script_NavigationSystem::NavigationGraphNodeComponent::get_Node() {
    return (void*)((uintptr_t)this + 0x1f8);
}
_Script_NavigationSystem::NavigationGraphNodeComponent*& _Script_NavigationSystem::NavigationGraphNodeComponent::get_NextNodeComponent() {
    return *(_Script_NavigationSystem::NavigationGraphNodeComponent**)((uintptr_t)this + 0x210);
}
_Script_CoreUObject::Class* _Script_NavigationSystem::NavigationGraphNodeComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/NavigationSystem.NavigationGraphNodeComponent");
    return result;
}
