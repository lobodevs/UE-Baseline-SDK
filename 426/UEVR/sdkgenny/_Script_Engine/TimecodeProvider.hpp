#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\FrameRate.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\QualifiedFrameTime.hpp"
#include "..\_Script_CoreUObject\Timecode.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct TimecodeProvider : public _Script_CoreUObject::Object {
    private: char pad_28[0x8]; public:
    float& get_FrameDelay();
    static _Script_CoreUObject::Class* static_class();
    _Script_CoreUObject::Timecode GetTimecode();
    void* GetSynchronizationState();
    _Script_CoreUObject::QualifiedFrameTime GetQualifiedFrameTime();
    _Script_CoreUObject::FrameRate GetFrameRate();
    _Script_CoreUObject::Timecode GetDelayedTimecode();
    _Script_CoreUObject::QualifiedFrameTime GetDelayedQualifiedFrameTime();
    bool FetchTimecode(_Script_CoreUObject::QualifiedFrameTime& OutFrameTime);
    void FetchAndUpdate();
}; // Size: 0x30
#pragma pack(pop)
}
