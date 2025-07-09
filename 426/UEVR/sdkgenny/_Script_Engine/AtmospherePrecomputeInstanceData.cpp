#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AtmospherePrecomputeInstanceData.hpp"
#include "SceneComponentInstanceData.hpp"
_Script_CoreUObject::Class* _Script_Engine::AtmospherePrecomputeInstanceData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AtmospherePrecomputeInstanceData");
    return result;
}
