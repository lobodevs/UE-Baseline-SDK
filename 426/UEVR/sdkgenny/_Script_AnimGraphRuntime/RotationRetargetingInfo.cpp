#include "..\FUObjectArray.hpp"
#include "RotationRetargetingInfo.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AnimGraphRuntime::RotationRetargetingInfo::get_TwistAxis() {
    return (void*)((uintptr_t)this + 0x74);
}
bool _Script_AnimGraphRuntime::RotationRetargetingInfo::get_bEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void* _Script_AnimGraphRuntime::RotationRetargetingInfo::get_Source() {
    return (void*)((uintptr_t)this + 0x10);
}
void _Script_AnimGraphRuntime::RotationRetargetingInfo::set_bEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AnimGraphRuntime::RotationRetargetingInfo::get_Target() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_AnimGraphRuntime::RotationRetargetingInfo::get_RotationComponent() {
    return (void*)((uintptr_t)this + 0x70);
}
bool _Script_AnimGraphRuntime::RotationRetargetingInfo::get_bUseAbsoluteAngle() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::RotationRetargetingInfo::set_bUseAbsoluteAngle(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_AnimGraphRuntime::RotationRetargetingInfo::get_SourceMinimum() {
    return *(float*)((uintptr_t)this + 0x84);
}
float& _Script_AnimGraphRuntime::RotationRetargetingInfo::get_SourceMaximum() {
    return *(float*)((uintptr_t)this + 0x88);
}
float& _Script_AnimGraphRuntime::RotationRetargetingInfo::get_TargetMinimum() {
    return *(float*)((uintptr_t)this + 0x8c);
}
float& _Script_AnimGraphRuntime::RotationRetargetingInfo::get_TargetMaximum() {
    return *(float*)((uintptr_t)this + 0x90);
}
void* _Script_AnimGraphRuntime::RotationRetargetingInfo::get_EasingType() {
    return (void*)((uintptr_t)this + 0x94);
}
void* _Script_AnimGraphRuntime::RotationRetargetingInfo::get_CustomCurve() {
    return (void*)((uintptr_t)this + 0x98);
}
bool _Script_AnimGraphRuntime::RotationRetargetingInfo::get_bFlipEasing() {
    return (*(uint8_t*)((uintptr_t)this + 0x120 + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::RotationRetargetingInfo::set_bFlipEasing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x120 + 0);
    *(uint8_t*)((uintptr_t)this + 0x120 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_AnimGraphRuntime::RotationRetargetingInfo::get_EasingWeight() {
    return *(float*)((uintptr_t)this + 0x124);
}
bool _Script_AnimGraphRuntime::RotationRetargetingInfo::get_bClamp() {
    return (*(uint8_t*)((uintptr_t)this + 0x128 + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::RotationRetargetingInfo::set_bClamp(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x128 + 0);
    *(uint8_t*)((uintptr_t)this + 0x128 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::RotationRetargetingInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.RotationRetargetingInfo");
    return result;
}
