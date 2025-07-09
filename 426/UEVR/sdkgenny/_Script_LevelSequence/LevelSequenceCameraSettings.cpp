#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LevelSequenceCameraSettings.hpp"
bool _Script_LevelSequence::LevelSequenceCameraSettings::get_bOverrideAspectRatioAxisConstraint() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_LevelSequence::LevelSequenceCameraSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LevelSequence.LevelSequenceCameraSettings");
    return result;
}
void _Script_LevelSequence::LevelSequenceCameraSettings::set_bOverrideAspectRatioAxisConstraint(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_LevelSequence::LevelSequenceCameraSettings::get_AspectRatioAxisConstraint() {
    return (void*)((uintptr_t)this + 0x1);
}
