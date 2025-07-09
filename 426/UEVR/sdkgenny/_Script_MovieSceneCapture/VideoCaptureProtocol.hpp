#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "FrameGrabberProtocol.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneCapture {
#pragma pack(push, 1)
struct VideoCaptureProtocol : public FrameGrabberProtocol {
    private: char pad_68[0x18]; public:
    bool get_bUseCompression();
    void set_bUseCompression(bool value);
    float& get_CompressionQuality();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x80
#pragma pack(pop)
}
