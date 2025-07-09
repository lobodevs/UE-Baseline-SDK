#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BPEditorBookmarkNode.hpp"
_Script_CoreUObject::Class* _Script_Engine::BPEditorBookmarkNode::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.BPEditorBookmarkNode");
    return result;
}
void* _Script_Engine::BPEditorBookmarkNode::get_DisplayName() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Engine::BPEditorBookmarkNode::get_NodeGuid() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::BPEditorBookmarkNode::get_ParentGuid() {
    return (void*)((uintptr_t)this + 0x10);
}
