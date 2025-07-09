#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Color.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "Font.hpp"
#include "MaterialInterface.hpp"
#include "PrimitiveComponent.hpp"
#include "TextRenderComponent.hpp"
void* _Script_Engine::TextRenderComponent::get_VerticalAlignment() {
    return (void*)((uintptr_t)this + 0x469);
}
_Script_Engine::Font*& _Script_Engine::TextRenderComponent::get_Font() {
    return *(_Script_Engine::Font**)((uintptr_t)this + 0x460);
}
void _Script_Engine::TextRenderComponent::SetVertSpacingAdjust(float Value) {
    return;
}
void* _Script_Engine::TextRenderComponent::get_Text() {
    return (void*)((uintptr_t)this + 0x440);
}
float& _Script_Engine::TextRenderComponent::get_XScale() {
    return *(float*)((uintptr_t)this + 0x470);
}
void* _Script_Engine::TextRenderComponent::get_TextRenderColor() {
    return (void*)((uintptr_t)this + 0x46c);
}
_Script_Engine::MaterialInterface*& _Script_Engine::TextRenderComponent::get_TextMaterial() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x458);
}
void* _Script_Engine::TextRenderComponent::get_HorizontalAlignment() {
    return (void*)((uintptr_t)this + 0x468);
}
float& _Script_Engine::TextRenderComponent::get_YScale() {
    return *(float*)((uintptr_t)this + 0x474);
}
float& _Script_Engine::TextRenderComponent::get_WorldSize() {
    return *(float*)((uintptr_t)this + 0x478);
}
float& _Script_Engine::TextRenderComponent::get_InvDefaultSize() {
    return *(float*)((uintptr_t)this + 0x47c);
}
float& _Script_Engine::TextRenderComponent::get_HorizSpacingAdjust() {
    return *(float*)((uintptr_t)this + 0x480);
}
float& _Script_Engine::TextRenderComponent::get_VertSpacingAdjust() {
    return *(float*)((uintptr_t)this + 0x484);
}
bool _Script_Engine::TextRenderComponent::get_bAlwaysRenderAsText() {
    return (*(uint8_t*)((uintptr_t)this + 0x488 + 0)) & 1 != 0;
}
void _Script_Engine::TextRenderComponent::set_bAlwaysRenderAsText(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x488 + 0);
    *(uint8_t*)((uintptr_t)this + 0x488 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::TextRenderComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.TextRenderComponent");
    return result;
}
void _Script_Engine::TextRenderComponent::SetYScale(float Value) {
    return;
}
void _Script_Engine::TextRenderComponent::SetXScale(float Value) {
    return;
}
void _Script_Engine::TextRenderComponent::SetWorldSize(float Value) {
    return;
}
void _Script_Engine::TextRenderComponent::SetVerticalAlignment(void* Value) {
    return;
}
void _Script_Engine::TextRenderComponent::SetTextRenderColor(_Script_CoreUObject::Color Value) {
    return;
}
void _Script_Engine::TextRenderComponent::SetTextMaterial(_Script_Engine::MaterialInterface* Material) {
    return;
}
void _Script_Engine::TextRenderComponent::SetText(void* Value) {
    return;
}
void _Script_Engine::TextRenderComponent::SetHorizSpacingAdjust(float Value) {
    return;
}
void _Script_Engine::TextRenderComponent::SetHorizontalAlignment(void* Value) {
    return;
}
void _Script_Engine::TextRenderComponent::SetFont(_Script_Engine::Font* Value) {
    return;
}
void _Script_Engine::TextRenderComponent::K2_SetText(void*& Value) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::TextRenderComponent::GetTextWorldSize() {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::TextRenderComponent::GetTextLocalSize() {
    return;
}
