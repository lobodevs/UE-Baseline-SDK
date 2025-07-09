#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CameraAnimationSequence.hpp"
#include "TemplateSequence.hpp"
_Script_CoreUObject::Class* _Script_TemplateSequence::CameraAnimationSequence::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/TemplateSequence.CameraAnimationSequence");
    return result;
}
