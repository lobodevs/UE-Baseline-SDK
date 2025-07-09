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
struct AnimNode_StateMachine : public AnimNode_Base {
    private: char pad_10[0xa0]; public:
    int32_t& get_StateMachineIndexInClass();
    int32_t& get_MaxTransitionsPerFrame();
    bool get_bSkipFirstUpdateTransition();
    void set_bSkipFirstUpdateTransition(bool value);
    bool get_bReinitializeOnBecomingRelevant();
    void set_bReinitializeOnBecomingRelevant(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb0
#pragma pack(pop)
}
