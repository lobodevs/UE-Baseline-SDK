#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneSubTrack.hpp"
#include "TemplateSequenceTrack.hpp"
_Script_CoreUObject::Class* _Script_TemplateSequence::TemplateSequenceTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/TemplateSequence.TemplateSequenceTrack");
    return result;
}
