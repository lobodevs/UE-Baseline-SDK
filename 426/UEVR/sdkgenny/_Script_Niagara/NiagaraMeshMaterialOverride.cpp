#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MaterialInterface.hpp"
#include "NiagaraMeshMaterialOverride.hpp"
_Script_Engine::MaterialInterface*& _Script_Niagara::NiagaraMeshMaterialOverride::get_ExplicitMat() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x0);
}
void* _Script_Niagara::NiagaraMeshMaterialOverride::get_UserParamBinding() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraMeshMaterialOverride::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraMeshMaterialOverride");
    return result;
}
