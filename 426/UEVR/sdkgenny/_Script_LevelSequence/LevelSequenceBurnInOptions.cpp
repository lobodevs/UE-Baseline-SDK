#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\SoftClassPath.hpp"
#include "LevelSequenceBurnInInitSettings.hpp"
#include "LevelSequenceBurnInOptions.hpp"
void _Script_LevelSequence::LevelSequenceBurnInOptions::SetBurnIn(_Script_CoreUObject::SoftClassPath InBurnInClass) {
    return;
}
bool _Script_LevelSequence::LevelSequenceBurnInOptions::get_bUseBurnIn() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
void _Script_LevelSequence::LevelSequenceBurnInOptions::set_bUseBurnIn(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_LevelSequence::LevelSequenceBurnInOptions::get_BurnInClass() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_LevelSequence::LevelSequenceBurnInInitSettings*& _Script_LevelSequence::LevelSequenceBurnInOptions::get_Settings() {
    return *(_Script_LevelSequence::LevelSequenceBurnInInitSettings**)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_LevelSequence::LevelSequenceBurnInOptions::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LevelSequence.LevelSequenceBurnInOptions");
    return result;
}
