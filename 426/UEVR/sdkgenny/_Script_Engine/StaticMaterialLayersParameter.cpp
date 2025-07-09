#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "StaticMaterialLayersParameter.hpp"
#include "StaticParameterBase.hpp"
void* _Script_Engine::StaticMaterialLayersParameter::get_Value() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_Engine::StaticMaterialLayersParameter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.StaticMaterialLayersParameter");
    return result;
}
