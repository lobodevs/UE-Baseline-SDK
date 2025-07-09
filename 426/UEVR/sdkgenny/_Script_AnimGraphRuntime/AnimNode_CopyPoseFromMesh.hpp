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
struct AnimNode_CopyPoseFromMesh : public _Script_Engine::AnimNode_Base {
    private: char pad_10[0x1c8]; public:
    void* get_SourceMeshComponent();
    bool get_bUseAttachedParent();
    void set_bUseAttachedParent(bool value);
    bool get_bCopyCurves();
    void set_bCopyCurves(bool value);
    bool get_bCopyCustomAttributes();
    void set_bCopyCustomAttributes(bool value);
    bool get_bUseMeshPose();
    void set_bUseMeshPose(bool value);
    void* get_RootBoneToCopy();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1d8
#pragma pack(pop)
}
