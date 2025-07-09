#include "..\FUObjectArray.hpp"
#include "ChaosDebugDrawComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
_Script_CoreUObject::Class* _Script_ChaosSolverEngine::ChaosDebugDrawComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ChaosSolverEngine.ChaosDebugDrawComponent");
    return result;
}
