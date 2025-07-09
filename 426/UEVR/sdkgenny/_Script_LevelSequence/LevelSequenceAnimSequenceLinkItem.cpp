#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LevelSequenceAnimSequenceLinkItem.hpp"
bool _Script_LevelSequence::LevelSequenceAnimSequenceLinkItem::get_bRecordInWorldSpace() {
    return (*(uint8_t*)((uintptr_t)this + 0x2a + 0)) & 1 != 0;
}
void* _Script_LevelSequence::LevelSequenceAnimSequenceLinkItem::get_SkelTrackGuid() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_LevelSequence::LevelSequenceAnimSequenceLinkItem::get_PathToAnimSequence() {
    return (void*)((uintptr_t)this + 0x10);
}
bool _Script_LevelSequence::LevelSequenceAnimSequenceLinkItem::get_bExportTransforms() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
void _Script_LevelSequence::LevelSequenceAnimSequenceLinkItem::set_bExportTransforms(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_LevelSequence::LevelSequenceAnimSequenceLinkItem::get_bExportCurves() {
    return (*(uint8_t*)((uintptr_t)this + 0x29 + 0)) & 1 != 0;
}
void _Script_LevelSequence::LevelSequenceAnimSequenceLinkItem::set_bRecordInWorldSpace(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2a + 0);
    *(uint8_t*)((uintptr_t)this + 0x2a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_LevelSequence::LevelSequenceAnimSequenceLinkItem::set_bExportCurves(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x29 + 0);
    *(uint8_t*)((uintptr_t)this + 0x29 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_LevelSequence::LevelSequenceAnimSequenceLinkItem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LevelSequence.LevelSequenceAnimSequenceLinkItem");
    return result;
}
