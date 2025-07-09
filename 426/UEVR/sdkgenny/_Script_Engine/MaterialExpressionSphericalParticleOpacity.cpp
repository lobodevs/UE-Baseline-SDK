#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionSphericalParticleOpacity.hpp"
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionSphericalParticleOpacity::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionSphericalParticleOpacity");
    return result;
}
float& _Script_Engine::MaterialExpressionSphericalParticleOpacity::get_ConstantDensity() {
    return *(float*)((uintptr_t)this + 0x54);
}
void* _Script_Engine::MaterialExpressionSphericalParticleOpacity::get_Density() {
    return (void*)((uintptr_t)this + 0x40);
}
