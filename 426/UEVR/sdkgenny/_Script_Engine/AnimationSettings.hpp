#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_DeveloperSettings\DeveloperSettings.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AnimationSettings : public _Script_DeveloperSettings::DeveloperSettings {
    private: char pad_38[0x98]; public:
    int32_t& get_CompressCommandletVersion();
    void* get_KeyEndEffectorsMatchNameArray();
    bool get_ForceRecompression();
    void set_ForceRecompression(bool value);
    bool get_bForceBelowThreshold();
    void set_bForceBelowThreshold(bool value);
    bool get_bFirstRecompressUsingCurrentOrDefault();
    void set_bFirstRecompressUsingCurrentOrDefault(bool value);
    bool get_bRaiseMaxErrorToExisting();
    void set_bRaiseMaxErrorToExisting(bool value);
    bool get_bEnablePerformanceLog();
    void set_bEnablePerformanceLog(bool value);
    bool get_bStripAnimationDataOnDedicatedServer();
    void set_bStripAnimationDataOnDedicatedServer(bool value);
    bool get_bTickAnimationOnSkeletalMeshInit();
    void set_bTickAnimationOnSkeletalMeshInit(bool value);
    void* get_BoneCustomAttributesNames();
    void* get_BoneNamesWithCustomAttributes();
    void* get_AttributeBlendModes();
    void* get_DefaultAttributeBlendMode();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xd0
#pragma pack(pop)
}
