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
struct RBFParams {
    private: char pad_0[0x2c]; public:
    int32_t& get_TargetDimensions();
    void* get_SolverType();
    float& get_Radius();
    bool get_bAutomaticRadius();
    void set_bAutomaticRadius(bool value);
    void* get_Function();
    void* get_DistanceMethod();
    void* get_TwistAxis();
    float& get_WeightThreshold();
    void* get_NormalizeMethod();
    void* get_MedianReference();
    float& get_MedianMin();
    float& get_MedianMax();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2c
#pragma pack(pop)
}
