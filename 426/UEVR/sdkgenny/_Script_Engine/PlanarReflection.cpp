#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PlanarReflection.hpp"
#include "PlanarReflectionComponent.hpp"
#include "SceneCapture.hpp"
_Script_CoreUObject::Class* _Script_Engine::PlanarReflection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.PlanarReflection");
    return result;
}
_Script_Engine::PlanarReflectionComponent*& _Script_Engine::PlanarReflection::get_PlanarReflectionComponent() {
    return *(_Script_Engine::PlanarReflectionComponent**)((uintptr_t)this + 0x230);
}
void _Script_Engine::PlanarReflection::OnInterpToggle(bool bEnable) {
    return;
}
bool _Script_Engine::PlanarReflection::get_bShowPreviewPlane() {
    return (*(uint8_t*)((uintptr_t)this + 0x238 + 0)) & 1 != 0;
}
void _Script_Engine::PlanarReflection::set_bShowPreviewPlane(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x238 + 0);
    *(uint8_t*)((uintptr_t)this + 0x238 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
