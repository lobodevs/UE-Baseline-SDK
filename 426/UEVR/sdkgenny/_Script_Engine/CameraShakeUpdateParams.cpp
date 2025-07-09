#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CameraShakeUpdateParams.hpp"
_Script_CoreUObject::Class* _Script_Engine::CameraShakeUpdateParams::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.CameraShakeUpdateParams");
    return result;
}
