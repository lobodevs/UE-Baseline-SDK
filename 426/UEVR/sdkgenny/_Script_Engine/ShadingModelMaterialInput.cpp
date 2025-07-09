#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialInput.hpp"
#include "ShadingModelMaterialInput.hpp"
_Script_CoreUObject::Class* _Script_Engine::ShadingModelMaterialInput::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ShadingModelMaterialInput");
    return result;
}
