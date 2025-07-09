#include "..\FUObjectArray.hpp"
#include "SimSpaceSettings.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AnimGraphRuntime::SimSpaceSettings::get_ExternalLinearDragV() {
    return (void*)((uintptr_t)this + 0x1c);
}
float& _Script_AnimGraphRuntime::SimSpaceSettings::get_MaxLinearAcceleration() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_AnimGraphRuntime::SimSpaceSettings::get_MasterAlpha() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_AnimGraphRuntime::SimSpaceSettings::get_MaxAngularAcceleration() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Script_AnimGraphRuntime::SimSpaceSettings::get_VelocityScaleZ() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_AnimGraphRuntime::SimSpaceSettings::get_MaxLinearVelocity() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_AnimGraphRuntime::SimSpaceSettings::get_MaxAngularVelocity() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_AnimGraphRuntime::SimSpaceSettings::get_ExternalLinearDrag() {
    return *(float*)((uintptr_t)this + 0x18);
}
void* _Script_AnimGraphRuntime::SimSpaceSettings::get_ExternalLinearVelocity() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_AnimGraphRuntime::SimSpaceSettings::get_ExternalAngularVelocity() {
    return (void*)((uintptr_t)this + 0x34);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::SimSpaceSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.SimSpaceSettings");
    return result;
}
