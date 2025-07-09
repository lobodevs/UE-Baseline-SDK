#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SequenceCameraShakeCameraStandIn.hpp"
float& _Script_TemplateSequence::SequenceCameraShakeCameraStandIn::get_FieldOfView() {
    return *(float*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_TemplateSequence::SequenceCameraShakeCameraStandIn::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/TemplateSequence.SequenceCameraShakeCameraStandIn");
    return result;
}
