#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_PhysicsCore {
#pragma pack(push, 1)
struct BodySetupCore : public _Script_CoreUObject::Object {
    private: char pad_28[0x20]; public:
    void* get_BoneName();
    void* get_PhysicsType();
    void* get_CollisionTraceFlag();
    void* get_CollisionReponse();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
