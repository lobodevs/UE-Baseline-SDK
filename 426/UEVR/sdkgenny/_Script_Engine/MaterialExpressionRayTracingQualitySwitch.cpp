#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionRayTracingQualitySwitch.hpp"
void* _Script_Engine::MaterialExpressionRayTracingQualitySwitch::get_Normal() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionRayTracingQualitySwitch::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionRayTracingQualitySwitch");
    return result;
}
void* _Script_Engine::MaterialExpressionRayTracingQualitySwitch::get_RayTraced() {
    return (void*)((uintptr_t)this + 0x54);
}
