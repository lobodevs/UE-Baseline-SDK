#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraTypeLayoutInfo.hpp"
void* _Script_Niagara::NiagaraTypeLayoutInfo::get_Int32ComponentRegisterOffsets() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Niagara::NiagaraTypeLayoutInfo::get_FloatComponentRegisterOffsets() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Niagara::NiagaraTypeLayoutInfo::get_FloatComponentByteOffsets() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraTypeLayoutInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraTypeLayoutInfo");
    return result;
}
void* _Script_Niagara::NiagaraTypeLayoutInfo::get_HalfComponentRegisterOffsets() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_Niagara::NiagaraTypeLayoutInfo::get_HalfComponentByteOffsets() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Niagara::NiagaraTypeLayoutInfo::get_Int32ComponentByteOffsets() {
    return (void*)((uintptr_t)this + 0x20);
}
