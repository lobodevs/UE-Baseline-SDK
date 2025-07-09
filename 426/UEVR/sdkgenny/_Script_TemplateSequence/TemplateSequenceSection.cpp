#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneSubSection.hpp"
#include "TemplateSequenceSection.hpp"
_Script_CoreUObject::Class* _Script_TemplateSequence::TemplateSequenceSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/TemplateSequence.TemplateSequenceSection");
    return result;
}
