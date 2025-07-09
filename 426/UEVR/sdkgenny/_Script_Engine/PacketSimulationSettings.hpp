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
struct PacketSimulationSettings {
    private: char pad_0[0x34]; public:
    int32_t& get_PktLoss();
    int32_t& get_PktLossMaxSize();
    int32_t& get_PktLossMinSize();
    int32_t& get_PktOrder();
    int32_t& get_PktDup();
    int32_t& get_PktLag();
    int32_t& get_PktLagVariance();
    int32_t& get_PktLagMin();
    int32_t& get_PktLagMax();
    int32_t& get_PktIncomingLagMin();
    int32_t& get_PktIncomingLagMax();
    int32_t& get_PktIncomingLoss();
    int32_t& get_PktJitter();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x34
#pragma pack(pop)
}
