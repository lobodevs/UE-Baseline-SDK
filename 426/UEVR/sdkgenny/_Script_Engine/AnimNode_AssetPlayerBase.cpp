#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimNode_AssetPlayerBase.hpp"
#include "AnimNode_Base.hpp"
float& _Script_Engine::AnimNode_AssetPlayerBase::get_BlendWeight() {
    return *(float*)((uintptr_t)this + 0x1c);
}
void* _Script_Engine::AnimNode_AssetPlayerBase::get_GroupName() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::AnimNode_AssetPlayerBase::get_GroupRole() {
    return (void*)((uintptr_t)this + 0x18);
}
float& _Script_Engine::AnimNode_AssetPlayerBase::get_InternalTimeAccumulator() {
    return *(float*)((uintptr_t)this + 0x20);
}
void _Script_Engine::AnimNode_AssetPlayerBase::set_bIgnoreForRelevancyTest(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1a + 0);
    *(uint8_t*)((uintptr_t)this + 0x1a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::AnimNode_AssetPlayerBase::get_GroupScope() {
    return (void*)((uintptr_t)this + 0x19);
}
bool _Script_Engine::AnimNode_AssetPlayerBase::get_bIgnoreForRelevancyTest() {
    return (*(uint8_t*)((uintptr_t)this + 0x1a + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Engine::AnimNode_AssetPlayerBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AnimNode_AssetPlayerBase");
    return result;
}
