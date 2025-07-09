#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraDataInterfaceGrid3D.hpp"
#include "NiagaraDataInterfaceNeighborGrid3D.hpp"
void* _Script_Niagara::NiagaraDataInterfaceNeighborGrid3D::get_MaxNeighborsPerCell() {
    return (void*)((uintptr_t)this + 0x100);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraDataInterfaceNeighborGrid3D::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraDataInterfaceNeighborGrid3D");
    return result;
}
