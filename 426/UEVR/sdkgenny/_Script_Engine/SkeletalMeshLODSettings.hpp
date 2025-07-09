#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "DataAsset.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SkeletalMeshLODSettings : public DataAsset {
    private: char pad_30[0x20]; public:
    void* get_MinLOD();
    void* get_DisableBelowMinLodStripping();
    bool get_bOverrideLODStreamingSettings();
    void set_bOverrideLODStreamingSettings(bool value);
    void* get_bSupportLODStreaming();
    void* get_MaxNumStreamedLODs();
    void* get_MaxNumOptionalLODs();
    void* get_LODGroups();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
