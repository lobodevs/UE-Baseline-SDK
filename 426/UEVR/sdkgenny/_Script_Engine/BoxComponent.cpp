#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "BoxComponent.hpp"
#include "ShapeComponent.hpp"
_Script_CoreUObject::Vector _Script_Engine::BoxComponent::GetScaledBoxExtent() {
    return;
}
void* _Script_Engine::BoxComponent::get_BoxExtent() {
    return (void*)((uintptr_t)this + 0x458);
}
float& _Script_Engine::BoxComponent::get_LineThickness() {
    return *(float*)((uintptr_t)this + 0x464);
}
_Script_CoreUObject::Class* _Script_Engine::BoxComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.BoxComponent");
    return result;
}
void _Script_Engine::BoxComponent::SetBoxExtent(_Script_CoreUObject::Vector InBoxExtent, bool bUpdateOverlaps) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::BoxComponent::GetUnscaledBoxExtent() {
    return;
}
