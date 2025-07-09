#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "NiagaraPreviewBase.hpp"
#include "NiagaraSystem.hpp"
_Script_CoreUObject::Class* _Script_Niagara::NiagaraPreviewBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraPreviewBase");
    return result;
}
void _Script_Niagara::NiagaraPreviewBase::SetSystem(_Script_Niagara::NiagaraSystem* InSystem) {
    return;
}
void _Script_Niagara::NiagaraPreviewBase::SetLabelText(void*& InXAxisText, void*& InYAxisText) {
    return;
}
