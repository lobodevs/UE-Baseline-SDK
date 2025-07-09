#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "NiagaraComponent.hpp"
#include "NiagaraPreviewAxis.hpp"
_Script_CoreUObject::Class* _Script_Niagara::NiagaraPreviewAxis::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraPreviewAxis");
    return result;
}
int32_t _Script_Niagara::NiagaraPreviewAxis::Num() {
    return;
}
void _Script_Niagara::NiagaraPreviewAxis::ApplyToPreview(_Script_Niagara::NiagaraComponent* PreviewComponent, int32_t PreviewIndex, bool bIsXAxis, void*& OutLabelText) {
    return;
}
