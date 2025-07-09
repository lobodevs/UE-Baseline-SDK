#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraHalfVector2.hpp"
void* _Script_Niagara::NiagaraHalfVector2::get_X() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Niagara::NiagaraHalfVector2::get_Y() {
    return (void*)((uintptr_t)this + 0x2);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraHalfVector2::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraHalfVector2");
    return result;
}
