#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_Engine\HitResult.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ChaosSolverEngine {
struct ChaosPhysicsCollisionInfo;
}
namespace _Script_ChaosSolverEngine {
#pragma pack(push, 1)
struct ChaosSolverEngineBlueprintLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    _Script_Engine::HitResult ConvertPhysicsCollisionToHitResult(_Script_ChaosSolverEngine::ChaosPhysicsCollisionInfo& PhysicsCollision);
}; // Size: 0x28
#pragma pack(pop)
}
