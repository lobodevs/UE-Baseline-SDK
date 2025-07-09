#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CustomAttribute.hpp"
void* _Script_Engine::CustomAttribute::get_Name() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_Engine::CustomAttribute::get_VariantType() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::CustomAttribute::get_Times() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Engine::CustomAttribute::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.CustomAttribute");
    return result;
}
