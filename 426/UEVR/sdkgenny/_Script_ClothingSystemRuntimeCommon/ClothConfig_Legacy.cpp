#include "..\FUObjectArray.hpp"
#include "ClothConfig_Legacy.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_ClothingSystemRuntimeCommon::ClothConfig_Legacy::get_SelfCollisionCullScale() {
    return *(float*)((uintptr_t)this + 0x4c);
}
void* _Script_ClothingSystemRuntimeCommon::ClothConfig_Legacy::get_WindMethod() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_ClothingSystemRuntimeCommon::ClothConfig_Legacy::get_AngularDrag() {
    return (void*)((uintptr_t)this + 0x74);
}
void* _Script_ClothingSystemRuntimeCommon::ClothConfig_Legacy::get_HorizontalConstraintConfig() {
    return (void*)((uintptr_t)this + 0x14);
}
void* _Script_ClothingSystemRuntimeCommon::ClothConfig_Legacy::get_VerticalConstraintConfig() {
    return (void*)((uintptr_t)this + 0x4);
}
void* _Script_ClothingSystemRuntimeCommon::ClothConfig_Legacy::get_BendConstraintConfig() {
    return (void*)((uintptr_t)this + 0x24);
}
void* _Script_ClothingSystemRuntimeCommon::ClothConfig_Legacy::get_ShearConstraintConfig() {
    return (void*)((uintptr_t)this + 0x34);
}
float& _Script_ClothingSystemRuntimeCommon::ClothConfig_Legacy::get_SelfCollisionStiffness() {
    return *(float*)((uintptr_t)this + 0x48);
}
float& _Script_ClothingSystemRuntimeCommon::ClothConfig_Legacy::get_SelfCollisionRadius() {
    return *(float*)((uintptr_t)this + 0x44);
}
void* _Script_ClothingSystemRuntimeCommon::ClothConfig_Legacy::get_Damping() {
    return (void*)((uintptr_t)this + 0x50);
}
float& _Script_ClothingSystemRuntimeCommon::ClothConfig_Legacy::get_Friction() {
    return *(float*)((uintptr_t)this + 0x5c);
}
float& _Script_ClothingSystemRuntimeCommon::ClothConfig_Legacy::get_WindDragCoefficient() {
    return *(float*)((uintptr_t)this + 0x60);
}
float& _Script_ClothingSystemRuntimeCommon::ClothConfig_Legacy::get_WindLiftCoefficient() {
    return *(float*)((uintptr_t)this + 0x64);
}
void* _Script_ClothingSystemRuntimeCommon::ClothConfig_Legacy::get_LinearDrag() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_ClothingSystemRuntimeCommon::ClothConfig_Legacy::get_LinearInertiaScale() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_ClothingSystemRuntimeCommon::ClothConfig_Legacy::get_AngularInertiaScale() {
    return (void*)((uintptr_t)this + 0x8c);
}
void* _Script_ClothingSystemRuntimeCommon::ClothConfig_Legacy::get_CentrifugalInertiaScale() {
    return (void*)((uintptr_t)this + 0x98);
}
float& _Script_ClothingSystemRuntimeCommon::ClothConfig_Legacy::get_SolverFrequency() {
    return *(float*)((uintptr_t)this + 0xa4);
}
float& _Script_ClothingSystemRuntimeCommon::ClothConfig_Legacy::get_StiffnessFrequency() {
    return *(float*)((uintptr_t)this + 0xa8);
}
float& _Script_ClothingSystemRuntimeCommon::ClothConfig_Legacy::get_GravityScale() {
    return *(float*)((uintptr_t)this + 0xac);
}
void* _Script_ClothingSystemRuntimeCommon::ClothConfig_Legacy::get_GravityOverride() {
    return (void*)((uintptr_t)this + 0xb0);
}
bool _Script_ClothingSystemRuntimeCommon::ClothConfig_Legacy::get_bUseGravityOverride() {
    return (*(uint8_t*)((uintptr_t)this + 0xbc + 0)) & 1 != 0;
}
void _Script_ClothingSystemRuntimeCommon::ClothConfig_Legacy::set_bUseGravityOverride(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xbc + 0);
    *(uint8_t*)((uintptr_t)this + 0xbc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_ClothingSystemRuntimeCommon::ClothConfig_Legacy::get_TetherStiffness() {
    return *(float*)((uintptr_t)this + 0xc0);
}
float& _Script_ClothingSystemRuntimeCommon::ClothConfig_Legacy::get_TetherLimit() {
    return *(float*)((uintptr_t)this + 0xc4);
}
float& _Script_ClothingSystemRuntimeCommon::ClothConfig_Legacy::get_AnimDriveSpringStiffness() {
    return *(float*)((uintptr_t)this + 0xcc);
}
float& _Script_ClothingSystemRuntimeCommon::ClothConfig_Legacy::get_CollisionThickness() {
    return *(float*)((uintptr_t)this + 0xc8);
}
float& _Script_ClothingSystemRuntimeCommon::ClothConfig_Legacy::get_AnimDriveDamperStiffness() {
    return *(float*)((uintptr_t)this + 0xd0);
}
_Script_CoreUObject::Class* _Script_ClothingSystemRuntimeCommon::ClothConfig_Legacy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ClothingSystemRuntimeCommon.ClothConfig_Legacy");
    return result;
}
