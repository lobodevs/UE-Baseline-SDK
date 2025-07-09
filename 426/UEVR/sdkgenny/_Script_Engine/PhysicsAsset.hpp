#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Engine {
struct ThumbnailInfo;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PhysicsAsset : public _Script_CoreUObject::Object {
    private: char pad_28[0x110]; public:
    void* get_BoundsBodies();
    void* get_SkeletalBodySetups();
    void* get_ConstraintSetup();
    void* get_SolverIterations();
    bool get_bNotForDedicatedServer();
    void set_bNotForDedicatedServer(bool value);
    _Script_Engine::ThumbnailInfo*& get_ThumbnailInfo();
    void* get_BodySetup();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x138
#pragma pack(pop)
}
