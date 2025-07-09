#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Chaos {
#pragma pack(push, 1)
struct ChaosSolverConfiguration {
    private: char pad_0[0x68]; public:
    int32_t& get_Iterations();
    int32_t& get_CollisionPairIterations();
    int32_t& get_PushOutIterations();
    int32_t& get_CollisionPushOutPairIterations();
    float& get_CollisionMarginFraction();
    float& get_CollisionMarginMax();
    float& get_CollisionCullDistance();
    int32_t& get_JointPairIterations();
    int32_t& get_JointPushOutPairIterations();
    float& get_ClusterConnectionFactor();
    void* get_ClusterUnionConnectionType();
    bool get_bGenerateCollisionData();
    void set_bGenerateCollisionData(bool value);
    void* get_CollisionFilterSettings();
    bool get_bGenerateBreakData();
    void set_bGenerateBreakData(bool value);
    void* get_BreakingFilterSettings();
    bool get_bGenerateTrailingData();
    void set_bGenerateTrailingData(bool value);
    void* get_TrailingFilterSettings();
    bool get_bGenerateContactGraph();
    void set_bGenerateContactGraph(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x68
#pragma pack(pop)
}
