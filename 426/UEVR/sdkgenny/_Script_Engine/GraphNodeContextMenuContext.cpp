#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "Blueprint.hpp"
#include "EdGraph.hpp"
#include "EdGraphNode.hpp"
#include "GraphNodeContextMenuContext.hpp"
_Script_Engine::Blueprint*& _Script_Engine::GraphNodeContextMenuContext::get_Blueprint() {
    return *(_Script_Engine::Blueprint**)((uintptr_t)this + 0x28);
}
void _Script_Engine::GraphNodeContextMenuContext::set_bIsDebugging(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::EdGraph*& _Script_Engine::GraphNodeContextMenuContext::get_Graph() {
    return *(_Script_Engine::EdGraph**)((uintptr_t)this + 0x30);
}
_Script_Engine::EdGraphNode*& _Script_Engine::GraphNodeContextMenuContext::get_Node() {
    return *(_Script_Engine::EdGraphNode**)((uintptr_t)this + 0x38);
}
bool _Script_Engine::GraphNodeContextMenuContext::get_bIsDebugging() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Engine::GraphNodeContextMenuContext::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.GraphNodeContextMenuContext");
    return result;
}
