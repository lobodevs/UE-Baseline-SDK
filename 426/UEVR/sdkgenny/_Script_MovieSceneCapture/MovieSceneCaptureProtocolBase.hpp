#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneCapture {
#pragma pack(push, 1)
struct MovieSceneCaptureProtocolBase : public _Script_CoreUObject::Object {
    private: char pad_28[0x30]; public:
    void* get_State();
    static _Script_CoreUObject::Class* static_class();
    bool IsCapturing();
    void* GetState();
}; // Size: 0x58
#pragma pack(pop)
}
