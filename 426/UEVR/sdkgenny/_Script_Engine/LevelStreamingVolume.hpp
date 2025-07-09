#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Volume.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct LevelStreamingVolume : public Volume {
    private: char pad_258[0x18]; public:
    void* get_StreamingLevelNames();
    bool get_bEditorPreVisOnly();
    void set_bEditorPreVisOnly(bool value);
    bool get_bDisabled();
    void set_bDisabled(bool value);
    void* get_StreamingUsage();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x270
#pragma pack(pop)
}
