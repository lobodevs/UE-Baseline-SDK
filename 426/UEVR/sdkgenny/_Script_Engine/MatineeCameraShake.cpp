#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CameraAnim.hpp"
#include "CameraAnimInst.hpp"
#include "CameraShakeBase.hpp"
#include "MatineeCameraShake.hpp"
#include "MinimalViewInfo.hpp"
float& _Script_Engine::MatineeCameraShake::get_AnimScale() {
    return *(float*)((uintptr_t)this + 0xfc);
}
float& _Script_Engine::MatineeCameraShake::get_OscillationDuration() {
    return *(float*)((uintptr_t)this + 0x98);
}
float& _Script_Engine::MatineeCameraShake::get_AnimPlayRate() {
    return *(float*)((uintptr_t)this + 0xf8);
}
float& _Script_Engine::MatineeCameraShake::get_OscillationBlendInTime() {
    return *(float*)((uintptr_t)this + 0x9c);
}
float& _Script_Engine::MatineeCameraShake::get_OscillationBlendOutTime() {
    return *(float*)((uintptr_t)this + 0xa0);
}
void* _Script_Engine::MatineeCameraShake::get_FOVOscillation() {
    return (void*)((uintptr_t)this + 0xec);
}
_Script_Engine::CameraAnimInst*& _Script_Engine::MatineeCameraShake::get_AnimInst() {
    return *(_Script_Engine::CameraAnimInst**)((uintptr_t)this + 0x120);
}
void* _Script_Engine::MatineeCameraShake::get_RotOscillation() {
    return (void*)((uintptr_t)this + 0xa4);
}
void* _Script_Engine::MatineeCameraShake::get_LocOscillation() {
    return (void*)((uintptr_t)this + 0xc8);
}
void _Script_Engine::MatineeCameraShake::BlueprintUpdateCameraShake(float DeltaTime, float Alpha, _Script_Engine::MinimalViewInfo& POV, _Script_Engine::MinimalViewInfo& ModifiedPOV) {
    return;
}
float& _Script_Engine::MatineeCameraShake::get_AnimBlendInTime() {
    return *(float*)((uintptr_t)this + 0x100);
}
float& _Script_Engine::MatineeCameraShake::get_AnimBlendOutTime() {
    return *(float*)((uintptr_t)this + 0x104);
}
float& _Script_Engine::MatineeCameraShake::get_RandomAnimSegmentDuration() {
    return *(float*)((uintptr_t)this + 0x108);
}
_Script_Engine::CameraAnim*& _Script_Engine::MatineeCameraShake::get_Anim() {
    return *(_Script_Engine::CameraAnim**)((uintptr_t)this + 0x110);
}
bool _Script_Engine::MatineeCameraShake::get_bRandomAnimSegment() {
    return (*(uint8_t*)((uintptr_t)this + 0x118 + 0)) & 1 != 0;
}
void _Script_Engine::MatineeCameraShake::set_bRandomAnimSegment(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x118 + 0);
    *(uint8_t*)((uintptr_t)this + 0x118 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::MatineeCameraShake::get_OscillatorTimeRemaining() {
    return *(float*)((uintptr_t)this + 0x11c);
}
_Script_CoreUObject::Class* _Script_Engine::MatineeCameraShake::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MatineeCameraShake");
    return result;
}
void _Script_Engine::MatineeCameraShake::ReceiveStopShake(bool bImmediately) {
    return;
}
void _Script_Engine::MatineeCameraShake::ReceivePlayShake(float Scale) {
    return;
}
bool _Script_Engine::MatineeCameraShake::ReceiveIsFinished() {
    return;
}
