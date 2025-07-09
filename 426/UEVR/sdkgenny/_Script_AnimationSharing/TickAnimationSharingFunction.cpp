#include "..\FUObjectArray.hpp"
#include "TickAnimationSharingFunction.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\TickFunction.hpp"
_Script_CoreUObject::Class* _Script_AnimationSharing::TickAnimationSharingFunction::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimationSharing.TickAnimationSharingFunction");
    return result;
}
