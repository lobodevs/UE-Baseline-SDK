#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_MovieScene\MovieSceneSequencePlaybackSettings.hpp"
#include "..\_Script_MovieScene\MovieSceneSequencePlayer.hpp"
#include "TemplateSequence.hpp"
#include "TemplateSequenceActor.hpp"
#include "TemplateSequencePlayer.hpp"
_Script_CoreUObject::Class* _Script_TemplateSequence::TemplateSequencePlayer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/TemplateSequence.TemplateSequencePlayer");
    return result;
}
_Script_TemplateSequence::TemplateSequencePlayer* _Script_TemplateSequence::TemplateSequencePlayer::CreateTemplateSequencePlayer(_Script_CoreUObject::Object* WorldContextObject, _Script_TemplateSequence::TemplateSequence* TemplateSequence, _Script_MovieScene::MovieSceneSequencePlaybackSettings Settings, _Script_TemplateSequence::TemplateSequenceActor*& OutActor) {
    return;
}
