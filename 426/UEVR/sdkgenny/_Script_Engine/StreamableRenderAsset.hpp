#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct StreamableRenderAsset : public _Script_CoreUObject::Object {
    private: char pad_28[0x38]; public:
    double& get_ForceMipLevelsToBeResidentTimestamp();
    int32_t& get_NumCinematicMipLevels();
    int32_t& get_StreamingIndex();
    int32_t& get_CachedCombinedLODBias();
    bool get_NeverStream();
    void set_NeverStream(bool value);
    bool get_bGlobalForceMipLevelsToBeResident();
    void set_bGlobalForceMipLevelsToBeResident(bool value);
    bool get_bHasStreamingUpdatePending();
    void set_bHasStreamingUpdatePending(bool value);
    bool get_bForceMiplevelsToBeResident();
    void set_bForceMiplevelsToBeResident(bool value);
    bool get_bIgnoreStreamingMipBias();
    void set_bIgnoreStreamingMipBias(bool value);
    bool get_bUseCinematicMipLevels();
    void set_bUseCinematicMipLevels(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
