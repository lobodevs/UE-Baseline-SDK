#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneEntitySystem.hpp"
#include "TemplateSequenceSystem.hpp"
_Script_CoreUObject::Class* _Script_TemplateSequence::TemplateSequenceSystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/TemplateSequence.TemplateSequenceSystem");
    return result;
}
