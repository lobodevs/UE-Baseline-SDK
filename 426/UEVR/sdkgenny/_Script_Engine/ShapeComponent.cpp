#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BodySetup.hpp"
#include "PrimitiveComponent.hpp"
#include "ShapeComponent.hpp"
void* _Script_Engine::ShapeComponent::get_AreaClass() {
    return (void*)((uintptr_t)this + 0x448);
}
_Script_Engine::BodySetup*& _Script_Engine::ShapeComponent::get_ShapeBodySetup() {
    return *(_Script_Engine::BodySetup**)((uintptr_t)this + 0x440);
}
void _Script_Engine::ShapeComponent::set_bDrawOnlyIfSelected(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x454 + 0);
    *(uint8_t*)((uintptr_t)this + 0x454 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::ShapeComponent::get_ShapeColor() {
    return (void*)((uintptr_t)this + 0x450);
}
bool _Script_Engine::ShapeComponent::get_bDynamicObstacle() {
    return (*(uint8_t*)((uintptr_t)this + 0x454 + 0)) & 4 != 0;
}
bool _Script_Engine::ShapeComponent::get_bDrawOnlyIfSelected() {
    return (*(uint8_t*)((uintptr_t)this + 0x454 + 0)) & 1 != 0;
}
bool _Script_Engine::ShapeComponent::get_bShouldCollideWhenPlacing() {
    return (*(uint8_t*)((uintptr_t)this + 0x454 + 0)) & 2 != 0;
}
void _Script_Engine::ShapeComponent::set_bShouldCollideWhenPlacing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x454 + 0);
    *(uint8_t*)((uintptr_t)this + 0x454 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::ShapeComponent::set_bDynamicObstacle(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x454 + 0);
    *(uint8_t*)((uintptr_t)this + 0x454 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::ShapeComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ShapeComponent");
    return result;
}
