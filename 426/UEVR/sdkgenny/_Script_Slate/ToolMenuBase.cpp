#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "ToolMenuBase.hpp"
_Script_CoreUObject::Class* _Script_Slate::ToolMenuBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Slate.ToolMenuBase");
    return result;
}
