#include "..\FUObjectArray.hpp"
#include "BehaviorTree.hpp"
#include "BehaviorTreeComponent.hpp"
#include "BrainComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_GameplayTags\GameplayTag.hpp"
void _Script_AIModule::BehaviorTreeComponent::AddCooldownTagDuration(_Script_GameplayTags::GameplayTag CooldownTag, float CooldownDuration, bool bAddToExistingDuration) {
    return;
}
void* _Script_AIModule::BehaviorTreeComponent::get_NodeInstances() {
    return (void*)((uintptr_t)this + 0x128);
}
_Script_CoreUObject::Class* _Script_AIModule::BehaviorTreeComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.BehaviorTreeComponent");
    return result;
}
_Script_AIModule::BehaviorTree*& _Script_AIModule::BehaviorTreeComponent::get_DefaultBehaviorTreeAsset() {
    return *(_Script_AIModule::BehaviorTree**)((uintptr_t)this + 0x278);
}
void _Script_AIModule::BehaviorTreeComponent::SetDynamicSubtree(_Script_GameplayTags::GameplayTag InjectTag, _Script_AIModule::BehaviorTree* BehaviorAsset) {
    return;
}
float _Script_AIModule::BehaviorTreeComponent::GetTagCooldownEndTime(_Script_GameplayTags::GameplayTag CooldownTag) {
    return;
}
