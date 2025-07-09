#include "..\FUObjectArray.hpp"
#include "FABRIKChainLink.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_AnimationCore::FABRIKChainLink::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimationCore.FABRIKChainLink");
    return result;
}
