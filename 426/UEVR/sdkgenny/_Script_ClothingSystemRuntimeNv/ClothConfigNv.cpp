#include "..\FUObjectArray.hpp"
#include "..\_Script_ClothingSystemRuntimeCommon\ClothConfigCommon.hpp"
#include "ClothConfigNv.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ClothingSystemRuntimeNv::ClothConfigNv::get_ClothingWindMethod() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_ClothingSystemRuntimeNv::ClothConfigNv::get_ShearConstraint() {
    return (void*)((uintptr_t)this + 0x5c);
}
void* _Script_ClothingSystemRuntimeNv::ClothConfigNv::get_VerticalConstraint() {
    return (void*)((uintptr_t)this + 0x2c);
}
float& _Script_ClothingSystemRuntimeNv::ClothConfigNv::get_SelfCollisionCullScale() {
    return *(float*)((uintptr_t)this + 0x74);
}
void* _Script_ClothingSystemRuntimeNv::ClothConfigNv::get_HorizontalConstraint() {
    return (void*)((uintptr_t)this + 0x3c);
}
void* _Script_ClothingSystemRuntimeNv::ClothConfigNv::get_BendConstraint() {
    return (void*)((uintptr_t)this + 0x4c);
}
float& _Script_ClothingSystemRuntimeNv::ClothConfigNv::get_SelfCollisionStiffness() {
    return *(float*)((uintptr_t)this + 0x70);
}
float& _Script_ClothingSystemRuntimeNv::ClothConfigNv::get_SelfCollisionRadius() {
    return *(float*)((uintptr_t)this + 0x6c);
}
void* _Script_ClothingSystemRuntimeNv::ClothConfigNv::get_Damping() {
    return (void*)((uintptr_t)this + 0x78);
}
float& _Script_ClothingSystemRuntimeNv::ClothConfigNv::get_Friction() {
    return *(float*)((uintptr_t)this + 0x84);
}
float& _Script_ClothingSystemRuntimeNv::ClothConfigNv::get_WindDragCoefficient() {
    return *(float*)((uintptr_t)this + 0x88);
}
void* _Script_ClothingSystemRuntimeNv::ClothConfigNv::get_CentrifugalInertiaScale() {
    return (void*)((uintptr_t)this + 0xc0);
}
float& _Script_ClothingSystemRuntimeNv::ClothConfigNv::get_WindLiftCoefficient() {
    return *(float*)((uintptr_t)this + 0x8c);
}
void* _Script_ClothingSystemRuntimeNv::ClothConfigNv::get_LinearDrag() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_ClothingSystemRuntimeNv::ClothConfigNv::get_AngularDrag() {
    return (void*)((uintptr_t)this + 0x9c);
}
void* _Script_ClothingSystemRuntimeNv::ClothConfigNv::get_LinearInertiaScale() {
    return (void*)((uintptr_t)this + 0xa8);
}
void* _Script_ClothingSystemRuntimeNv::ClothConfigNv::get_AngularInertiaScale() {
    return (void*)((uintptr_t)this + 0xb4);
}
float& _Script_ClothingSystemRuntimeNv::ClothConfigNv::get_SolverFrequency() {
    return *(float*)((uintptr_t)this + 0xcc);
}
float& _Script_ClothingSystemRuntimeNv::ClothConfigNv::get_StiffnessFrequency() {
    return *(float*)((uintptr_t)this + 0xd0);
}
float& _Script_ClothingSystemRuntimeNv::ClothConfigNv::get_GravityScale() {
    return *(float*)((uintptr_t)this + 0xd4);
}
void* _Script_ClothingSystemRuntimeNv::ClothConfigNv::get_GravityOverride() {
    return (void*)((uintptr_t)this + 0xd8);
}
bool _Script_ClothingSystemRuntimeNv::ClothConfigNv::get_bUseGravityOverride() {
    return (*(uint8_t*)((uintptr_t)this + 0xe4 + 0)) & 1 != 0;
}
void _Script_ClothingSystemRuntimeNv::ClothConfigNv::set_bUseGravityOverride(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_ClothingSystemRuntimeNv::ClothConfigNv::get_TetherStiffness() {
    return *(float*)((uintptr_t)this + 0xe8);
}
float& _Script_ClothingSystemRuntimeNv::ClothConfigNv::get_TetherLimit() {
    return *(float*)((uintptr_t)this + 0xec);
}
float& _Script_ClothingSystemRuntimeNv::ClothConfigNv::get_CollisionThickness() {
    return *(float*)((uintptr_t)this + 0xf0);
}
float& _Script_ClothingSystemRuntimeNv::ClothConfigNv::get_AnimDriveSpringStiffness() {
    return *(float*)((uintptr_t)this + 0xf4);
}
float& _Script_ClothingSystemRuntimeNv::ClothConfigNv::get_AnimDriveDamperStiffness() {
    return *(float*)((uintptr_t)this + 0xf8);
}
void* _Script_ClothingSystemRuntimeNv::ClothConfigNv::get_WindMethod() {
    return (void*)((uintptr_t)this + 0xfc);
}
void* _Script_ClothingSystemRuntimeNv::ClothConfigNv::get_VerticalConstraintConfig() {
    return (void*)((uintptr_t)this + 0x100);
}
void* _Script_ClothingSystemRuntimeNv::ClothConfigNv::get_HorizontalConstraintConfig() {
    return (void*)((uintptr_t)this + 0x110);
}
void* _Script_ClothingSystemRuntimeNv::ClothConfigNv::get_ShearConstraintConfig() {
    return (void*)((uintptr_t)this + 0x130);
}
void* _Script_ClothingSystemRuntimeNv::ClothConfigNv::get_BendConstraintConfig() {
    return (void*)((uintptr_t)this + 0x120);
}
_Script_CoreUObject::Class* _Script_ClothingSystemRuntimeNv::ClothConfigNv::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ClothingSystemRuntimeNv.ClothConfigNv");
    return result;
}
