#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "NiagaraActor.hpp"
#include "NiagaraComponent.hpp"
_Script_Niagara::NiagaraComponent*& _Script_Niagara::NiagaraActor::get_NiagaraComponent() {
    return *(_Script_Niagara::NiagaraComponent**)((uintptr_t)this + 0x220);
}
void _Script_Niagara::NiagaraActor::OnNiagaraSystemFinished(_Script_Niagara::NiagaraComponent* FinishedComponent) {
    return;
}
bool _Script_Niagara::NiagaraActor::get_bDestroyOnSystemFinish() {
    return (*(uint8_t*)((uintptr_t)this + 0x228 + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraActor::set_bDestroyOnSystemFinish(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x228 + 0);
    *(uint8_t*)((uintptr_t)this + 0x228 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Niagara::NiagaraActor::SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish) {
    return;
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraActor");
    return result;
}
