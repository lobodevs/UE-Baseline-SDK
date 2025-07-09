#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraHalfVector3.hpp"
void* _Script_Niagara::NiagaraHalfVector3::get_X() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Niagara::NiagaraHalfVector3::get_Y() {
    return (void*)((uintptr_t)this + 0x2);
}
void* _Script_Niagara::NiagaraHalfVector3::get_Z() {
    return (void*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraHalfVector3::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraHalfVector3");
    return result;
}
