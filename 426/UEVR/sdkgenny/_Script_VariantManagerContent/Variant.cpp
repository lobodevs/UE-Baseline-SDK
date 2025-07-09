#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
#include "LevelVariantSets.hpp"
#include "Variant.hpp"
#include "VariantDependency.hpp"
#include "VariantSet.hpp"
void _Script_VariantManagerContent::Variant::SetThumbnailFromEditorViewport() {
    return;
}
void* _Script_VariantManagerContent::Variant::get_Dependencies() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_VariantManagerContent::VariantDependency _Script_VariantManagerContent::Variant::GetDependency(int32_t Index) {
    return;
}
void* _Script_VariantManagerContent::Variant::get_ObjectBindings() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_VariantManagerContent::Variant::get_DisplayText() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_Engine::Texture2D*& _Script_VariantManagerContent::Variant::get_Thumbnail() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x78);
}
_Script_CoreUObject::Class* _Script_VariantManagerContent::Variant::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/VariantManagerContent.Variant");
    return result;
}
void _Script_VariantManagerContent::Variant::SwitchOn() {
    return;
}
void _Script_VariantManagerContent::Variant::SetThumbnailFromTexture(_Script_Engine::Texture2D* NewThumbnail) {
    return;
}
void _Script_VariantManagerContent::Variant::SetThumbnailFromFile(void* FilePath) {
    return;
}
void _Script_VariantManagerContent::Variant::SetThumbnailFromCamera(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Transform& CameraTransform, float FOVDegrees, float MinZ, float Gamma) {
    return;
}
void _Script_VariantManagerContent::Variant::SetDisplayText(void*& NewDisplayText) {
    return;
}
void _Script_VariantManagerContent::Variant::SetDependency(int32_t Index, _Script_VariantManagerContent::VariantDependency& Dependency) {
    return;
}
void* _Script_VariantManagerContent::Variant::GetDisplayText() {
    return;
}
bool _Script_VariantManagerContent::Variant::IsActive() {
    return;
}
_Script_Engine::Texture2D* _Script_VariantManagerContent::Variant::GetThumbnail() {
    return;
}
_Script_VariantManagerContent::VariantSet* _Script_VariantManagerContent::Variant::GetParent() {
    return;
}
int32_t _Script_VariantManagerContent::Variant::GetNumDependencies() {
    return;
}
int32_t _Script_VariantManagerContent::Variant::GetNumActors() {
    return;
}
void* _Script_VariantManagerContent::Variant::GetDependents(_Script_VariantManagerContent::LevelVariantSets* LevelVariantSets, bool bOnlyEnabledDependencies) {
    return;
}
_Script_Engine::Actor* _Script_VariantManagerContent::Variant::GetActor(int32_t ActorIndex) {
    return;
}
void _Script_VariantManagerContent::Variant::DeleteDependency(int32_t Index) {
    return;
}
int32_t _Script_VariantManagerContent::Variant::AddDependency(_Script_VariantManagerContent::VariantDependency& Dependency) {
    return;
}
