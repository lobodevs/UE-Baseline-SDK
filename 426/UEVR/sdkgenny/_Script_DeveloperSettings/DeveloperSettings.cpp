#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "DeveloperSettings.hpp"
_Script_CoreUObject::Class* _Script_DeveloperSettings::DeveloperSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/DeveloperSettings.DeveloperSettings");
    return result;
}
