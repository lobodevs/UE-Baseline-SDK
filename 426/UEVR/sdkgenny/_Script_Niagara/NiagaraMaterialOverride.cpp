#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MaterialInterface.hpp"
#include "NiagaraMaterialOverride.hpp"
#include "NiagaraRendererProperties.hpp"
_Script_Engine::MaterialInterface*& _Script_Niagara::NiagaraMaterialOverride::get_Material() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x0);
}
void* _Script_Niagara::NiagaraMaterialOverride::get_MaterialSubIndex() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_Niagara::NiagaraRendererProperties*& _Script_Niagara::NiagaraMaterialOverride::get_EmitterRendererProperty() {
    return *(_Script_Niagara::NiagaraRendererProperties**)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraMaterialOverride::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraMaterialOverride");
    return result;
}
