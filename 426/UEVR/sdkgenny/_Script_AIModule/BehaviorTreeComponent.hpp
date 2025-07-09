#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "BrainComponent.hpp"
#include "..\_Script_GameplayTags\GameplayTag.hpp"
namespace _Script_AIModule {
struct BehaviorTree;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct BehaviorTreeComponent : public BrainComponent {
    private: char pad_108[0x190]; public:
    void* get_NodeInstances();
    _Script_AIModule::BehaviorTree*& get_DefaultBehaviorTreeAsset();
    static _Script_CoreUObject::Class* static_class();
    void SetDynamicSubtree(_Script_GameplayTags::GameplayTag InjectTag, _Script_AIModule::BehaviorTree* BehaviorAsset);
    float GetTagCooldownEndTime(_Script_GameplayTags::GameplayTag CooldownTag);
    void AddCooldownTagDuration(_Script_GameplayTags::GameplayTag CooldownTag, float CooldownDuration, bool bAddToExistingDuration);
}; // Size: 0x298
#pragma pack(pop)
}
