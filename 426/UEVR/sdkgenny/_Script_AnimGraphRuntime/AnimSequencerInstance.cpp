#include "..\FUObjectArray.hpp"
#include "AnimSequencerInstance.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimInstance.hpp"
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimSequencerInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AnimGraphRuntime.AnimSequencerInstance");
    return result;
}
