#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "StateMachineStateDebugData.hpp"
_Script_CoreUObject::Class* _Script_Engine::StateMachineStateDebugData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.StateMachineStateDebugData");
    return result;
}
