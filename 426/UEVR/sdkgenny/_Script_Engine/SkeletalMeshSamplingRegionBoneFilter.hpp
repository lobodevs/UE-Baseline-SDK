#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SkeletalMeshSamplingRegionBoneFilter {
    private: char pad_0[0xc]; public:
    void* get_BoneName();
    bool get_bIncludeOrExclude();
    void set_bIncludeOrExclude(bool value);
    bool get_bApplyToChildren();
    void set_bApplyToChildren(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc
#pragma pack(pop)
}
