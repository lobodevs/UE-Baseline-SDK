#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialParameterInfo.hpp"
void* _Script_Engine::MaterialParameterInfo::get_Name() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::MaterialParameterInfo::get_Association() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialParameterInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.MaterialParameterInfo");
    return result;
}
int32_t& _Script_Engine::MaterialParameterInfo::get_Index() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
