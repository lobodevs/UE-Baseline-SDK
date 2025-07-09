#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraDataInterface.hpp"
#include "NiagaraDataInterfaceCamera.hpp"
int32_t& _Script_Niagara::NiagaraDataInterfaceCamera::get_PlayerControllerIndex() {
    return *(int32_t*)((uintptr_t)this + 0x38);
}
bool _Script_Niagara::NiagaraDataInterfaceCamera::get_bRequireCurrentFrameData() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraDataInterfaceCamera::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraDataInterfaceCamera");
    return result;
}
void _Script_Niagara::NiagaraDataInterfaceCamera::set_bRequireCurrentFrameData(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
