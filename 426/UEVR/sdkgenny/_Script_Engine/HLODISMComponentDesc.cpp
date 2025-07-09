#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HLODISMComponentDesc.hpp"
#include "MaterialInterface.hpp"
#include "StaticMesh.hpp"
_Script_Engine::StaticMesh*& _Script_Engine::HLODISMComponentDesc::get_StaticMesh() {
    return *(_Script_Engine::StaticMesh**)((uintptr_t)this + 0x0);
}
_Script_Engine::MaterialInterface*& _Script_Engine::HLODISMComponentDesc::get_Material() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x8);
}
void* _Script_Engine::HLODISMComponentDesc::get_Instances() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Engine::HLODISMComponentDesc::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.HLODISMComponentDesc");
    return result;
}
