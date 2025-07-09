#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimNode_Base.hpp"
#include "AnimNode_LinkedInputPose.hpp"
void* _Script_Engine::AnimNode_LinkedInputPose::get_Name() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::AnimNode_LinkedInputPose::get_Graph() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_Engine::AnimNode_LinkedInputPose::get_InputPose() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_Engine::AnimNode_LinkedInputPose::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AnimNode_LinkedInputPose");
    return result;
}
