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
struct RootMotionSourceGroup {
    private: char pad_0[0x38]; public:
    bool get_bHasAdditiveSources();
    void set_bHasAdditiveSources(bool value);
    bool get_bHasOverrideSources();
    void set_bHasOverrideSources(bool value);
    bool get_bHasOverrideSourcesWithIgnoreZAccumulate();
    void set_bHasOverrideSourcesWithIgnoreZAccumulate(bool value);
    bool get_bIsAdditiveVelocityApplied();
    void set_bIsAdditiveVelocityApplied(bool value);
    void* get_LastAccumulatedSettings();
    void* get_LastPreAdditiveVelocity();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
