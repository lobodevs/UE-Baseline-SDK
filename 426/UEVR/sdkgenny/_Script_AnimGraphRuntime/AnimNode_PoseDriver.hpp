#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimNode_PoseHandler.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimGraphRuntime {
#pragma pack(push, 1)
struct AnimNode_PoseDriver : public AnimNode_PoseHandler {
    private: char pad_80[0xb8]; public:
    void* get_SourcePose();
    void* get_SourceBones();
    void* get_OnlyDriveBones();
    void* get_PoseTargets();
    void* get_EvalSpaceBone();
    void* get_RBFParams();
    void* get_DriveSource();
    void* get_DriveOutput();
    bool get_bOnlyDriveSelectedBones();
    void set_bOnlyDriveSelectedBones(bool value);
    int32_t& get_LODThreshold();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x138
#pragma pack(pop)
}
