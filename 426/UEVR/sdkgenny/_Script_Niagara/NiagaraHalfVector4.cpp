#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraHalfVector4.hpp"
void* _Script_Niagara::NiagaraHalfVector4::get_Z() {
    return (void*)((uintptr_t)this + 0x4);
}
void* _Script_Niagara::NiagaraHalfVector4::get_X() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Niagara::NiagaraHalfVector4::get_Y() {
    return (void*)((uintptr_t)this + 0x2);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraHalfVector4::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraHalfVector4");
    return result;
}
void* _Script_Niagara::NiagaraHalfVector4::get_W() {
    return (void*)((uintptr_t)this + 0x6);
}
