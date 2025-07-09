#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_SlateCore\Margin.hpp"
#include "..\_Script_SlateCore\SlateBrush.hpp"
#include "BackgroundBlur.hpp"
#include "ContentWidget.hpp"
bool _Script_UMG::BackgroundBlur::get_bOverrideAutoRadiusCalculation() {
    return (*(uint8_t*)((uintptr_t)this + 0x138 + 0)) & 1 != 0;
}
void* _Script_UMG::BackgroundBlur::get_Padding() {
    return (void*)((uintptr_t)this + 0x120);
}
void* _Script_UMG::BackgroundBlur::get_HorizontalAlignment() {
    return (void*)((uintptr_t)this + 0x130);
}
void _Script_UMG::BackgroundBlur::SetPadding(_Script_SlateCore::Margin InPadding) {
    return;
}
void _Script_UMG::BackgroundBlur::set_bOverrideAutoRadiusCalculation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x138 + 0);
    *(uint8_t*)((uintptr_t)this + 0x138 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_UMG::BackgroundBlur::get_VerticalAlignment() {
    return (void*)((uintptr_t)this + 0x131);
}
void _Script_UMG::BackgroundBlur::set_bApplyAlphaToBlur(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x132 + 0);
    *(uint8_t*)((uintptr_t)this + 0x132 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::BackgroundBlur::get_bApplyAlphaToBlur() {
    return (*(uint8_t*)((uintptr_t)this + 0x132 + 0)) & 1 != 0;
}
float& _Script_UMG::BackgroundBlur::get_BlurStrength() {
    return *(float*)((uintptr_t)this + 0x134);
}
int32_t& _Script_UMG::BackgroundBlur::get_BlurRadius() {
    return *(int32_t*)((uintptr_t)this + 0x13c);
}
void* _Script_UMG::BackgroundBlur::get_LowQualityFallbackBrush() {
    return (void*)((uintptr_t)this + 0x140);
}
_Script_CoreUObject::Class* _Script_UMG::BackgroundBlur::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.BackgroundBlur");
    return result;
}
void _Script_UMG::BackgroundBlur::SetVerticalAlignment(void* InVerticalAlignment) {
    return;
}
void _Script_UMG::BackgroundBlur::SetLowQualityFallbackBrush(_Script_SlateCore::SlateBrush& InBrush) {
    return;
}
void _Script_UMG::BackgroundBlur::SetHorizontalAlignment(void* InHorizontalAlignment) {
    return;
}
void _Script_UMG::BackgroundBlur::SetBlurStrength(float InStrength) {
    return;
}
void _Script_UMG::BackgroundBlur::SetBlurRadius(int32_t InBlurRadius) {
    return;
}
void _Script_UMG::BackgroundBlur::SetApplyAlphaToBlur(bool bInApplyAlphaToBlur) {
    return;
}
