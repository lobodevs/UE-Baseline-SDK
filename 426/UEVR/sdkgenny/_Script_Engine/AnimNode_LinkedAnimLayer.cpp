#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimNode_LinkedAnimGraph.hpp"
#include "AnimNode_LinkedAnimLayer.hpp"
void* _Script_Engine::AnimNode_LinkedAnimLayer::get_Interface() {
    return (void*)((uintptr_t)this + 0xa0);
}
void* _Script_Engine::AnimNode_LinkedAnimLayer::get_Layer() {
    return (void*)((uintptr_t)this + 0xa8);
}
_Script_CoreUObject::Class* _Script_Engine::AnimNode_LinkedAnimLayer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AnimNode_LinkedAnimLayer");
    return result;
}
