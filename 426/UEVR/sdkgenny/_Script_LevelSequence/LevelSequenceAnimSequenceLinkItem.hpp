#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LevelSequence {
#pragma pack(push, 1)
struct LevelSequenceAnimSequenceLinkItem {
    private: char pad_0[0x30]; public:
    void* get_SkelTrackGuid();
    void* get_PathToAnimSequence();
    bool get_bExportTransforms();
    void set_bExportTransforms(bool value);
    bool get_bExportCurves();
    void set_bExportCurves(bool value);
    bool get_bRecordInWorldSpace();
    void set_bRecordInWorldSpace(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
