#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimNode_SkeletalControlBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimGraphRuntime {
#pragma pack(push, 1)
struct AnimNode_TwoBoneIK : public AnimNode_SkeletalControlBase {
    private: char pad_c8[0x118]; public:
    void* get_IKBone();
    float& get_StartStretchRatio();
    float& get_MaxStretchScale();
    void* get_EffectorLocation();
    void* get_EffectorTarget();
    void* get_JointTargetLocation();
    void* get_JointTarget();
    void* get_TwistAxis();
    void* get_EffectorLocationSpace();
    void* get_JointTargetLocationSpace();
    bool get_bAllowStretching();
    void set_bAllowStretching(bool value);
    bool get_bTakeRotationFromEffectorSpace();
    void set_bTakeRotationFromEffectorSpace(bool value);
    bool get_bMaintainEffectorRelRot();
    void set_bMaintainEffectorRelRot(bool value);
    bool get_bAllowTwist();
    void set_bAllowTwist(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1e0
#pragma pack(pop)
}
