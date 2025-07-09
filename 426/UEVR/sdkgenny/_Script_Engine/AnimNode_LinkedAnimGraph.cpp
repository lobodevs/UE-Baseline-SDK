#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimNode_CustomProperty.hpp"
#include "AnimNode_LinkedAnimGraph.hpp"
void* _Script_Engine::AnimNode_LinkedAnimGraph::get_InputPoseNames() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_Engine::AnimNode_LinkedAnimGraph::get_InputPoses() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_Engine::AnimNode_LinkedAnimGraph::get_InstanceClass() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_Engine::AnimNode_LinkedAnimGraph::get_Tag() {
    return (void*)((uintptr_t)this + 0x80);
}
bool _Script_Engine::AnimNode_LinkedAnimGraph::get_bPropagateNotifiesToLinkedInstances() {
    return (*(uint8_t*)((uintptr_t)this + 0x9c + 0)) & 2 != 0;
}
bool _Script_Engine::AnimNode_LinkedAnimGraph::get_bReceiveNotifiesFromLinkedInstances() {
    return (*(uint8_t*)((uintptr_t)this + 0x9c + 0)) & 1 != 0;
}
void _Script_Engine::AnimNode_LinkedAnimGraph::set_bPropagateNotifiesToLinkedInstances(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9c + 0);
    *(uint8_t*)((uintptr_t)this + 0x9c + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::AnimNode_LinkedAnimGraph::set_bReceiveNotifiesFromLinkedInstances(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9c + 0);
    *(uint8_t*)((uintptr_t)this + 0x9c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::AnimNode_LinkedAnimGraph::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AnimNode_LinkedAnimGraph");
    return result;
}
