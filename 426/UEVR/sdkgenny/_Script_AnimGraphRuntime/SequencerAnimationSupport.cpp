#include "..\FUObjectArray.hpp"
#include "SequencerAnimationSupport.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::SequencerAnimationSupport::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AnimGraphRuntime.SequencerAnimationSupport");
    return result;
}
