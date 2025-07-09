#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimNode_Base.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AnimNode_TransitionPoseEvaluator : public AnimNode_Base {
    private: char pad_10[0xe8]; public:
    int32_t& get_FramesToCachePose();
    void* get_DataSource();
    void* get_EvaluatorMode();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xf8
#pragma pack(pop)
}
