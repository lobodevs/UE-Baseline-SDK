#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LevelSequence.hpp"
#include "LevelSequencePlayerSnapshot.hpp"
void* _Script_LevelSequence::LevelSequencePlayerSnapshot::get_CurrentShotLocalTime() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_LevelSequence::LevelSequencePlayerSnapshot::get_MasterName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_LevelSequence::LevelSequencePlayerSnapshot::get_CurrentShotSourceTime() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_LevelSequence::LevelSequencePlayerSnapshot::get_SourceTime() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_LevelSequence::LevelSequencePlayerSnapshot::get_MasterTime() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_LevelSequence::LevelSequencePlayerSnapshot::get_CameraComponent() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_LevelSequence::LevelSequencePlayerSnapshot::get_CurrentShotName() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_LevelSequence::LevelSequencePlayerSnapshot::get_SourceTimecode() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_LevelSequence::LevelSequencePlayerSnapshot::get_Settings() {
    return (void*)((uintptr_t)this + 0x98);
}
_Script_LevelSequence::LevelSequence*& _Script_LevelSequence::LevelSequencePlayerSnapshot::get_ActiveShot() {
    return *(_Script_LevelSequence::LevelSequence**)((uintptr_t)this + 0xa8);
}
void* _Script_LevelSequence::LevelSequencePlayerSnapshot::get_ShotID() {
    return (void*)((uintptr_t)this + 0xb0);
}
_Script_CoreUObject::Class* _Script_LevelSequence::LevelSequencePlayerSnapshot::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LevelSequence.LevelSequencePlayerSnapshot");
    return result;
}
