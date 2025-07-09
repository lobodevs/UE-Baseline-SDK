#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\CameraShakeBase.hpp"
#include "CameraAnimationSequence.hpp"
#include "SequenceCameraShake.hpp"
#include "SequenceCameraShakeCameraStandIn.hpp"
#include "SequenceCameraShakeSequencePlayer.hpp"
float& _Script_TemplateSequence::SequenceCameraShake::get_BlendOutTime() {
    return *(float*)((uintptr_t)this + 0xac);
}
float& _Script_TemplateSequence::SequenceCameraShake::get_Scale() {
    return *(float*)((uintptr_t)this + 0xa4);
}
_Script_TemplateSequence::SequenceCameraShakeSequencePlayer*& _Script_TemplateSequence::SequenceCameraShake::get_Player() {
    return *(_Script_TemplateSequence::SequenceCameraShakeSequencePlayer**)((uintptr_t)this + 0xb8);
}
_Script_TemplateSequence::CameraAnimationSequence*& _Script_TemplateSequence::SequenceCameraShake::get_Sequence() {
    return *(_Script_TemplateSequence::CameraAnimationSequence**)((uintptr_t)this + 0x98);
}
float& _Script_TemplateSequence::SequenceCameraShake::get_BlendInTime() {
    return *(float*)((uintptr_t)this + 0xa8);
}
float& _Script_TemplateSequence::SequenceCameraShake::get_PlayRate() {
    return *(float*)((uintptr_t)this + 0xa0);
}
float& _Script_TemplateSequence::SequenceCameraShake::get_RandomSegmentDuration() {
    return *(float*)((uintptr_t)this + 0xb0);
}
bool _Script_TemplateSequence::SequenceCameraShake::get_bRandomSegment() {
    return (*(uint8_t*)((uintptr_t)this + 0xb4 + 0)) & 1 != 0;
}
void _Script_TemplateSequence::SequenceCameraShake::set_bRandomSegment(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_TemplateSequence::SequenceCameraShakeCameraStandIn*& _Script_TemplateSequence::SequenceCameraShake::get_CameraStandIn() {
    return *(_Script_TemplateSequence::SequenceCameraShakeCameraStandIn**)((uintptr_t)this + 0xc0);
}
_Script_CoreUObject::Class* _Script_TemplateSequence::SequenceCameraShake::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/TemplateSequence.SequenceCameraShake");
    return result;
}
