#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "DeviceProfileFragment.hpp"
_Script_CoreUObject::Class* _Script_Engine::DeviceProfileFragment::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.DeviceProfileFragment");
    return result;
}
