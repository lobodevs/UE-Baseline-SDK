#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraDataInterfaceGrid3D.hpp"
#include "NiagaraDataInterfaceRWBase.hpp"
_Script_CoreUObject::Class* _Script_Niagara::NiagaraDataInterfaceGrid3D::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraDataInterfaceGrid3D");
    return result;
}
void* _Script_Niagara::NiagaraDataInterfaceGrid3D::get_NumCells() {
    return (void*)((uintptr_t)this + 0xd8);
}
float& _Script_Niagara::NiagaraDataInterfaceGrid3D::get_CellSize() {
    return *(float*)((uintptr_t)this + 0xe4);
}
int32_t& _Script_Niagara::NiagaraDataInterfaceGrid3D::get_NumCellsMaxAxis() {
    return *(int32_t*)((uintptr_t)this + 0xe8);
}
void* _Script_Niagara::NiagaraDataInterfaceGrid3D::get_WorldBBoxSize() {
    return (void*)((uintptr_t)this + 0xf0);
}
void* _Script_Niagara::NiagaraDataInterfaceGrid3D::get_SetResolutionMethod() {
    return (void*)((uintptr_t)this + 0xec);
}
