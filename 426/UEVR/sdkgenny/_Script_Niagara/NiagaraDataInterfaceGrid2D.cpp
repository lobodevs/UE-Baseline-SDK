#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraDataInterfaceGrid2D.hpp"
#include "NiagaraDataInterfaceRWBase.hpp"
int32_t& _Script_Niagara::NiagaraDataInterfaceGrid2D::get_NumCellsX() {
    return *(int32_t*)((uintptr_t)this + 0xd8);
}
int32_t& _Script_Niagara::NiagaraDataInterfaceGrid2D::get_NumCellsY() {
    return *(int32_t*)((uintptr_t)this + 0xdc);
}
bool _Script_Niagara::NiagaraDataInterfaceGrid2D::get_SetGridFromMaxAxis() {
    return (*(uint8_t*)((uintptr_t)this + 0xe8 + 0)) & 1 != 0;
}
int32_t& _Script_Niagara::NiagaraDataInterfaceGrid2D::get_NumCellsMaxAxis() {
    return *(int32_t*)((uintptr_t)this + 0xe0);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraDataInterfaceGrid2D::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraDataInterfaceGrid2D");
    return result;
}
int32_t& _Script_Niagara::NiagaraDataInterfaceGrid2D::get_NumAttributes() {
    return *(int32_t*)((uintptr_t)this + 0xe4);
}
void _Script_Niagara::NiagaraDataInterfaceGrid2D::set_SetGridFromMaxAxis(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Niagara::NiagaraDataInterfaceGrid2D::get_WorldBBoxSize() {
    return (void*)((uintptr_t)this + 0xec);
}
