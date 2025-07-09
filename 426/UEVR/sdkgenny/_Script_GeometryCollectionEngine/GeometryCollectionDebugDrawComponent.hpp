#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_GeometryCollectionEngine {
struct GeometryCollectionDebugDrawActor;
}
namespace _Script_GeometryCollectionEngine {
struct GeometryCollectionRenderLevelSetActor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_GeometryCollectionEngine {
#pragma pack(push, 1)
struct GeometryCollectionDebugDrawComponent : public _Script_Engine::ActorComponent {
    private: char pad_b0[0x18]; public:
    _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor*& get_GeometryCollectionDebugDrawActor();
    _Script_GeometryCollectionEngine::GeometryCollectionRenderLevelSetActor*& get_GeometryCollectionRenderLevelSetActor();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc8
#pragma pack(pop)
}
