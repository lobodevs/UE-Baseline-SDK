#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "AnimNode_Base.hpp"
#include "AnimNode_CustomProperty.hpp"
_Script_CoreUObject::Object*& _Script_Engine::AnimNode_CustomProperty::get_TargetInstance() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x30);
}
void* _Script_Engine::AnimNode_CustomProperty::get_SourcePropertyNames() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::AnimNode_CustomProperty::get_DestPropertyNames() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_Engine::AnimNode_CustomProperty::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AnimNode_CustomProperty");
    return result;
}
