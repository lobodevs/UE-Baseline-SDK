#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SceneComponentInstanceData.hpp"
#include "SplineInstanceData.hpp"
void* _Script_Engine::SplineInstanceData::get_SplineCurves() {
    return (void*)((uintptr_t)this + 0xc0);
}
bool _Script_Engine::SplineInstanceData::get_bSplineHasBeenEdited() {
    return (*(uint8_t*)((uintptr_t)this + 0xb8 + 0)) & 1 != 0;
}
void _Script_Engine::SplineInstanceData::set_bSplineHasBeenEdited(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::SplineInstanceData::get_SplineCurvesPreUCS() {
    return (void*)((uintptr_t)this + 0x130);
}
_Script_CoreUObject::Class* _Script_Engine::SplineInstanceData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SplineInstanceData");
    return result;
}
