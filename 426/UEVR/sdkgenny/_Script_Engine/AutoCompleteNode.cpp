#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AutoCompleteNode.hpp"
int32_t& _Script_Engine::AutoCompleteNode::get_IndexChar() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::AutoCompleteNode::get_AutoCompleteListIndices() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::AutoCompleteNode::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AutoCompleteNode");
    return result;
}
