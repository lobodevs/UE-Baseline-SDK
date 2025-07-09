#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_GeometryCollectionEngine {
struct GeometryCollectionComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_GeometryCollectionEngine {
struct GeometryCollectionDebugDrawComponent;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Script_GeometryCollectionEngine {
#pragma pack(push, 1)
struct GeometryCollectionActor : public _Script_Engine::Actor {
    private: char pad_220[0x10]; public:
    _Script_GeometryCollectionEngine::GeometryCollectionComponent*& get_GeometryCollectionComponent();
    _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawComponent*& get_GeometryCollectionDebugDrawComponent();
    static _Script_CoreUObject::Class* static_class();
    bool RaycastSingle(_Script_CoreUObject::Vector Start, _Script_CoreUObject::Vector End, _Script_Engine::HitResult& OutHit);
}; // Size: 0x230
#pragma pack(pop)
}
