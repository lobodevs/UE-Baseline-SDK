#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "ViewModeUtils.hpp"
_Script_CoreUObject::Class* _Script_Engine::ViewModeUtils::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ViewModeUtils");
    return result;
}
