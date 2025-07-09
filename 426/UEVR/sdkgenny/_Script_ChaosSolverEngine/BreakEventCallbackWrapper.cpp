#include "..\FUObjectArray.hpp"
#include "BreakEventCallbackWrapper.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ChaosSolverEngine::BreakEventCallbackWrapper::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ChaosSolverEngine.BreakEventCallbackWrapper");
    return result;
}
