#include "..\FUObjectArray.hpp"
#include "RBFParams.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AnimGraphRuntime::RBFParams::get_SolverType() {
    return (void*)((uintptr_t)this + 0x4);
}
int32_t& _Script_AnimGraphRuntime::RBFParams::get_TargetDimensions() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
void _Script_AnimGraphRuntime::RBFParams::set_bAutomaticRadius(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc + 0);
    *(uint8_t*)((uintptr_t)this + 0xc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AnimGraphRuntime::RBFParams::get_bAutomaticRadius() {
    return (*(uint8_t*)((uintptr_t)this + 0xc + 0)) & 1 != 0;
}
float& _Script_AnimGraphRuntime::RBFParams::get_Radius() {
    return *(float*)((uintptr_t)this + 0x8);
}
void* _Script_AnimGraphRuntime::RBFParams::get_Function() {
    return (void*)((uintptr_t)this + 0xd);
}
void* _Script_AnimGraphRuntime::RBFParams::get_DistanceMethod() {
    return (void*)((uintptr_t)this + 0xe);
}
void* _Script_AnimGraphRuntime::RBFParams::get_TwistAxis() {
    return (void*)((uintptr_t)this + 0xf);
}
float& _Script_AnimGraphRuntime::RBFParams::get_WeightThreshold() {
    return *(float*)((uintptr_t)this + 0x10);
}
void* _Script_AnimGraphRuntime::RBFParams::get_NormalizeMethod() {
    return (void*)((uintptr_t)this + 0x14);
}
void* _Script_AnimGraphRuntime::RBFParams::get_MedianReference() {
    return (void*)((uintptr_t)this + 0x18);
}
float& _Script_AnimGraphRuntime::RBFParams::get_MedianMin() {
    return *(float*)((uintptr_t)this + 0x24);
}
float& _Script_AnimGraphRuntime::RBFParams::get_MedianMax() {
    return *(float*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::RBFParams::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.RBFParams");
    return result;
}
