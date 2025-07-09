#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_PhysicsCore {
#pragma pack(push, 1)
struct BodyInstanceCore {
    private: char pad_0[0x18]; public:
    bool get_bSimulatePhysics();
    void set_bSimulatePhysics(bool value);
    bool get_bOverrideMass();
    void set_bOverrideMass(bool value);
    bool get_bEnableGravity();
    void set_bEnableGravity(bool value);
    bool get_bAutoWeld();
    void set_bAutoWeld(bool value);
    bool get_bStartAwake();
    void set_bStartAwake(bool value);
    bool get_bGenerateWakeEvents();
    void set_bGenerateWakeEvents(bool value);
    bool get_bUpdateMassWhenScaleChanges();
    void set_bUpdateMassWhenScaleChanges(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
