#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimGraphRuntime {
#pragma pack(push, 1)
struct SimSpaceSettings {
    private: char pad_0[0x40]; public:
    float& get_MasterAlpha();
    float& get_VelocityScaleZ();
    float& get_MaxLinearVelocity();
    float& get_MaxAngularVelocity();
    float& get_MaxLinearAcceleration();
    float& get_MaxAngularAcceleration();
    float& get_ExternalLinearDrag();
    void* get_ExternalLinearDragV();
    void* get_ExternalLinearVelocity();
    void* get_ExternalAngularVelocity();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
