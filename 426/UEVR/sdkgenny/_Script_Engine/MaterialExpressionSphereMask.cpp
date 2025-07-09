#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionSphereMask.hpp"
void* _Script_Engine::MaterialExpressionSphereMask::get_A() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::MaterialExpressionSphereMask::get_B() {
    return (void*)((uintptr_t)this + 0x54);
}
void* _Script_Engine::MaterialExpressionSphereMask::get_Radius() {
    return (void*)((uintptr_t)this + 0x68);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionSphereMask::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionSphereMask");
    return result;
}
float& _Script_Engine::MaterialExpressionSphereMask::get_AttenuationRadius() {
    return *(float*)((uintptr_t)this + 0x90);
}
void* _Script_Engine::MaterialExpressionSphereMask::get_Hardness() {
    return (void*)((uintptr_t)this + 0x7c);
}
float& _Script_Engine::MaterialExpressionSphereMask::get_HardnessPercent() {
    return *(float*)((uintptr_t)this + 0x94);
}
