#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "BaseMediaSource.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MediaAssets {
#pragma pack(push, 1)
struct TimeSynchronizableMediaSource : public BaseMediaSource {
    private: char pad_88[0x10]; public:
    bool get_bUseTimeSynchronization();
    void set_bUseTimeSynchronization(bool value);
    int32_t& get_FrameDelay();
    double& get_TimeDelay();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x98
#pragma pack(pop)
}
