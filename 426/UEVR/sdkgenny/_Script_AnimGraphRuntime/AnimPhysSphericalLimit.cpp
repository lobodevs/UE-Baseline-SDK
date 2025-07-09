#include "..\FUObjectArray.hpp"
#include "AnimPhysSphericalLimit.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AnimGraphRuntime::AnimPhysSphericalLimit::get_LimitType() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_AnimGraphRuntime::AnimPhysSphericalLimit::get_DrivingBone() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_AnimGraphRuntime::AnimPhysSphericalLimit::get_SphereLocalOffset() {
    return (void*)((uintptr_t)this + 0x10);
}
float& _Script_AnimGraphRuntime::AnimPhysSphericalLimit::get_LimitRadius() {
    return *(float*)((uintptr_t)this + 0x1c);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimPhysSphericalLimit::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimPhysSphericalLimit");
    return result;
}
