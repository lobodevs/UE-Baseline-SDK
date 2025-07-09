#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialShadingModelField.hpp"
_Script_CoreUObject::Class* _Script_Engine::MaterialShadingModelField::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.MaterialShadingModelField");
    return result;
}
void* _Script_Engine::MaterialShadingModelField::get_ShadingModelField() {
    return (void*)((uintptr_t)this + 0x0);
}
