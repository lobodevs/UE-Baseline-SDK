#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "NiagaraPreviewAxis.hpp"
#include "NiagaraPreviewGrid.hpp"
#include "NiagaraSystem.hpp"
void _Script_Niagara::NiagaraPreviewGrid::ActivatePreviews(bool bReset) {
    return;
}
int32_t& _Script_Niagara::NiagaraPreviewGrid::get_NumX() {
    return *(int32_t*)((uintptr_t)this + 0x250);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraPreviewGrid::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraPreviewGrid");
    return result;
}
_Script_Niagara::NiagaraSystem*& _Script_Niagara::NiagaraPreviewGrid::get_System() {
    return *(_Script_Niagara::NiagaraSystem**)((uintptr_t)this + 0x220);
}
void* _Script_Niagara::NiagaraPreviewGrid::get_ResetMode() {
    return (void*)((uintptr_t)this + 0x228);
}
_Script_Niagara::NiagaraPreviewAxis*& _Script_Niagara::NiagaraPreviewGrid::get_PreviewAxisX() {
    return *(_Script_Niagara::NiagaraPreviewAxis**)((uintptr_t)this + 0x230);
}
_Script_Niagara::NiagaraPreviewAxis*& _Script_Niagara::NiagaraPreviewGrid::get_PreviewAxisY() {
    return *(_Script_Niagara::NiagaraPreviewAxis**)((uintptr_t)this + 0x238);
}
void* _Script_Niagara::NiagaraPreviewGrid::get_PreviewClass() {
    return (void*)((uintptr_t)this + 0x240);
}
float& _Script_Niagara::NiagaraPreviewGrid::get_SpacingX() {
    return *(float*)((uintptr_t)this + 0x248);
}
int32_t& _Script_Niagara::NiagaraPreviewGrid::get_NumY() {
    return *(int32_t*)((uintptr_t)this + 0x254);
}
float& _Script_Niagara::NiagaraPreviewGrid::get_SpacingY() {
    return *(float*)((uintptr_t)this + 0x24c);
}
void* _Script_Niagara::NiagaraPreviewGrid::get_PreviewComponents() {
    return (void*)((uintptr_t)this + 0x258);
}
void _Script_Niagara::NiagaraPreviewGrid::SetPaused(bool bPaused) {
    return;
}
void _Script_Niagara::NiagaraPreviewGrid::GetPreviews(void*& OutPreviews) {
    return;
}
void _Script_Niagara::NiagaraPreviewGrid::DeactivatePreviews() {
    return;
}
