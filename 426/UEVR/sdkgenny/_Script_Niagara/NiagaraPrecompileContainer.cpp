#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "NiagaraPrecompileContainer.hpp"
#include "NiagaraSystem.hpp"
void* _Script_Niagara::NiagaraPrecompileContainer::get_Scripts() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_Niagara::NiagaraSystem*& _Script_Niagara::NiagaraPrecompileContainer::get_System() {
    return *(_Script_Niagara::NiagaraSystem**)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraPrecompileContainer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraPrecompileContainer");
    return result;
}
