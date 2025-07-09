#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimationSharing {
#pragma pack(push, 1)
struct AnimationStateEntry {
    private: char pad_0[0x30]; public:
    void* get_State();
    void* get_AnimationSetups();
    bool get_bOnDemand();
    void set_bOnDemand(bool value);
    bool get_bAdditive();
    void set_bAdditive(bool value);
    float& get_BlendTime();
    bool get_bReturnToPreviousState();
    void set_bReturnToPreviousState(bool value);
    bool get_bSetNextState();
    void set_bSetNextState(bool value);
    void* get_NextState();
    void* get_MaximumNumberOfConcurrentInstances();
    float& get_WiggleTimePercentage();
    bool get_bRequiresCurves();
    void set_bRequiresCurves(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
