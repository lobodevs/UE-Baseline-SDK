#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BillboardComponent.hpp"
#include "PrimitiveComponent.hpp"
#include "Texture2D.hpp"
_Script_Engine::Texture2D*& _Script_Engine::BillboardComponent::get_Sprite() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x440);
}
float& _Script_Engine::BillboardComponent::get_V() {
    return *(float*)((uintptr_t)this + 0x458);
}
float& _Script_Engine::BillboardComponent::get_U() {
    return *(float*)((uintptr_t)this + 0x450);
}
bool _Script_Engine::BillboardComponent::get_bIsScreenSizeScaled() {
    return (*(uint8_t*)((uintptr_t)this + 0x448 + 0)) & 1 != 0;
}
void _Script_Engine::BillboardComponent::set_bIsScreenSizeScaled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x448 + 0);
    *(uint8_t*)((uintptr_t)this + 0x448 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::BillboardComponent::get_VL() {
    return *(float*)((uintptr_t)this + 0x45c);
}
float& _Script_Engine::BillboardComponent::get_ScreenSize() {
    return *(float*)((uintptr_t)this + 0x44c);
}
float& _Script_Engine::BillboardComponent::get_UL() {
    return *(float*)((uintptr_t)this + 0x454);
}
_Script_CoreUObject::Class* _Script_Engine::BillboardComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.BillboardComponent");
    return result;
}
void _Script_Engine::BillboardComponent::SetUV(int32_t NewU, int32_t NewUL, int32_t NewV, int32_t NewVL) {
    return;
}
void _Script_Engine::BillboardComponent::SetSpriteAndUV(_Script_Engine::Texture2D* NewSprite, int32_t NewU, int32_t NewUL, int32_t NewV, int32_t NewVL) {
    return;
}
void _Script_Engine::BillboardComponent::SetSprite(_Script_Engine::Texture2D* NewSprite) {
    return;
}
