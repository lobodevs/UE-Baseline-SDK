#include "..\FUObjectArray.hpp"
#include "ChaosPhysicsCollisionInfo.hpp"
#include "ChaosSolverEngineBlueprintLibrary.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_Engine\HitResult.hpp"
_Script_CoreUObject::Class* _Script_ChaosSolverEngine::ChaosSolverEngineBlueprintLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary");
    return result;
}
_Script_Engine::HitResult _Script_ChaosSolverEngine::ChaosSolverEngineBlueprintLibrary::ConvertPhysicsCollisionToHitResult(_Script_ChaosSolverEngine::ChaosPhysicsCollisionInfo& PhysicsCollision) {
    return;
}
