#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimNode_Base.hpp"
#include "AnimNode_Root.hpp"
_Script_CoreUObject::Class* _Script_Engine::AnimNode_Root::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AnimNode_Root");
    return result;
}
void* _Script_Engine::AnimNode_Root::get_Result() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::AnimNode_Root::get_Name() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Engine::AnimNode_Root::get_Group() {
    return (void*)((uintptr_t)this + 0x28);
}
