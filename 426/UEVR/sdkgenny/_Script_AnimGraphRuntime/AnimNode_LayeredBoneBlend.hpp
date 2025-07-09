#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimNode_Base.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimGraphRuntime {
#pragma pack(push, 1)
struct AnimNode_LayeredBoneBlend : public _Script_Engine::AnimNode_Base {
    private: char pad_10[0xb0]; public:
    void* get_BasePose();
    void* get_BlendPoses();
    void* get_LayerSetup();
    void* get_BlendWeights();
    bool get_bMeshSpaceRotationBlend();
    void set_bMeshSpaceRotationBlend(bool value);
    bool get_bMeshSpaceScaleBlend();
    void set_bMeshSpaceScaleBlend(bool value);
    void* get_CurveBlendOption();
    bool get_bBlendRootMotionBasedOnRootBone();
    void set_bBlendRootMotionBasedOnRootBone(bool value);
    int32_t& get_LODThreshold();
    void* get_PerBoneBlendWeights();
    void* get_SkeletonGuid();
    void* get_VirtualBoneGuid();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc0
#pragma pack(pop)
}
