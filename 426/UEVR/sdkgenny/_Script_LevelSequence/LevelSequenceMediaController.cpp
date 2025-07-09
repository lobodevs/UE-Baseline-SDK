#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "LevelSequenceActor.hpp"
#include "LevelSequenceMediaController.hpp"
#include "..\_Script_MediaAssets\MediaComponent.hpp"
_Script_LevelSequence::LevelSequenceActor*& _Script_LevelSequence::LevelSequenceMediaController::get_Sequence() {
    return *(_Script_LevelSequence::LevelSequenceActor**)((uintptr_t)this + 0x228);
}
_Script_CoreUObject::Class* _Script_LevelSequence::LevelSequenceMediaController::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LevelSequence.LevelSequenceMediaController");
    return result;
}
_Script_MediaAssets::MediaComponent*& _Script_LevelSequence::LevelSequenceMediaController::get_MediaComponent() {
    return *(_Script_MediaAssets::MediaComponent**)((uintptr_t)this + 0x230);
}
float& _Script_LevelSequence::LevelSequenceMediaController::get_ServerStartTimeSeconds() {
    return *(float*)((uintptr_t)this + 0x238);
}
void _Script_LevelSequence::LevelSequenceMediaController::Play() {
    return;
}
void _Script_LevelSequence::LevelSequenceMediaController::SynchronizeToServer(float DesyncThresholdSeconds) {
    return;
}
_Script_LevelSequence::LevelSequenceActor* _Script_LevelSequence::LevelSequenceMediaController::GetSequence() {
    return;
}
void _Script_LevelSequence::LevelSequenceMediaController::OnRep_ServerStartTimeSeconds() {
    return;
}
_Script_MediaAssets::MediaComponent* _Script_LevelSequence::LevelSequenceMediaController::GetMediaComponent() {
    return;
}
