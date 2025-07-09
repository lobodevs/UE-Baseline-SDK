#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\MeshComponent.hpp"
#include "PaperGroupedSpriteComponent.hpp"
#include "PaperSprite.hpp"
void* _Script_Paper2D::PaperGroupedSpriteComponent::get_InstanceMaterials() {
    return (void*)((uintptr_t)this + 0x468);
}
void* _Script_Paper2D::PaperGroupedSpriteComponent::get_PerInstanceSpriteData() {
    return (void*)((uintptr_t)this + 0x478);
}
_Script_CoreUObject::Class* _Script_Paper2D::PaperGroupedSpriteComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Paper2D.PaperGroupedSpriteComponent");
    return result;
}
void _Script_Paper2D::PaperGroupedSpriteComponent::SortInstancesAlongAxis(_Script_CoreUObject::Vector WorldSpaceSortAxis) {
    return;
}
bool _Script_Paper2D::PaperGroupedSpriteComponent::UpdateInstanceTransform(int32_t InstanceIndex, _Script_CoreUObject::Transform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport) {
    return;
}
bool _Script_Paper2D::PaperGroupedSpriteComponent::UpdateInstanceColor(int32_t InstanceIndex, _Script_CoreUObject::LinearColor NewInstanceColor, bool bMarkRenderStateDirty) {
    return;
}
bool _Script_Paper2D::PaperGroupedSpriteComponent::RemoveInstance(int32_t InstanceIndex) {
    return;
}
bool _Script_Paper2D::PaperGroupedSpriteComponent::GetInstanceTransform(int32_t InstanceIndex, _Script_CoreUObject::Transform& OutInstanceTransform, bool bWorldSpace) {
    return;
}
int32_t _Script_Paper2D::PaperGroupedSpriteComponent::GetInstanceCount() {
    return;
}
void _Script_Paper2D::PaperGroupedSpriteComponent::ClearInstances() {
    return;
}
int32_t _Script_Paper2D::PaperGroupedSpriteComponent::AddInstance(_Script_CoreUObject::Transform& Transform, _Script_Paper2D::PaperSprite* Sprite, bool bWorldSpace, _Script_CoreUObject::LinearColor Color) {
    return;
}
