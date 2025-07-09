#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
#include "LevelVariantSets.hpp"
#include "Variant.hpp"
#include "VariantSet.hpp"
void* _Script_VariantManagerContent::VariantSet::GetDisplayText() {
    return;
}
void* _Script_VariantManagerContent::VariantSet::get_DisplayText() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_VariantManagerContent::VariantSet::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/VariantManagerContent.VariantSet");
    return result;
}
void _Script_VariantManagerContent::VariantSet::set_bExpanded(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x58 + 0);
    *(uint8_t*)((uintptr_t)this + 0x58 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_VariantManagerContent::VariantSet::get_bExpanded() {
    return (*(uint8_t*)((uintptr_t)this + 0x58 + 0)) & 1 != 0;
}
int32_t _Script_VariantManagerContent::VariantSet::GetNumVariants() {
    return;
}
void* _Script_VariantManagerContent::VariantSet::get_Variants() {
    return (void*)((uintptr_t)this + 0x60);
}
void _Script_VariantManagerContent::VariantSet::SetThumbnailFromFile(void* FilePath) {
    return;
}
_Script_Engine::Texture2D*& _Script_VariantManagerContent::VariantSet::get_Thumbnail() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x70);
}
void _Script_VariantManagerContent::VariantSet::SetThumbnailFromTexture(_Script_Engine::Texture2D* NewThumbnail) {
    return;
}
void _Script_VariantManagerContent::VariantSet::SetThumbnailFromEditorViewport() {
    return;
}
void _Script_VariantManagerContent::VariantSet::SetThumbnailFromCamera(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Transform& CameraTransform, float FOVDegrees, float MinZ, float Gamma) {
    return;
}
void _Script_VariantManagerContent::VariantSet::SetDisplayText(void*& NewDisplayText) {
    return;
}
_Script_VariantManagerContent::Variant* _Script_VariantManagerContent::VariantSet::GetVariantByName(void* VariantName) {
    return;
}
_Script_VariantManagerContent::Variant* _Script_VariantManagerContent::VariantSet::GetVariant(int32_t VariantIndex) {
    return;
}
_Script_Engine::Texture2D* _Script_VariantManagerContent::VariantSet::GetThumbnail() {
    return;
}
_Script_VariantManagerContent::LevelVariantSets* _Script_VariantManagerContent::VariantSet::GetParent() {
    return;
}
