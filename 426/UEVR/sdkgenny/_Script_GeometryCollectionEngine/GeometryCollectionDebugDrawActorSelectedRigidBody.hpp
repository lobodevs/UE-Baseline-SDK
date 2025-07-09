#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_ChaosSolverEngine {
struct ChaosSolverActor;
}
namespace _Script_GeometryCollectionEngine {
struct GeometryCollectionActor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_GeometryCollectionEngine {
#pragma pack(push, 1)
struct GeometryCollectionDebugDrawActorSelectedRigidBody {
    private: char pad_0[0x18]; public:
    int32_t& get_ID();
    _Script_ChaosSolverEngine::ChaosSolverActor*& get_Solver();
    _Script_GeometryCollectionEngine::GeometryCollectionActor*& get_GeometryCollection();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
