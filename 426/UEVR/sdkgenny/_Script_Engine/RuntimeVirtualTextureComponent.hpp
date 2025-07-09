#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SceneComponent.hpp"
namespace _Script_Engine {
struct RuntimeVirtualTexture;
}
namespace _Script_Engine {
struct VirtualTextureBuilder;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct BoxSphereBounds;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RuntimeVirtualTextureComponent : public SceneComponent {
    private: char pad_200[0x70]; public:
    void* get_BoundsAlignActor();
    bool get_bSetBoundsButton();
    void set_bSetBoundsButton(bool value);
    bool get_bSnapBoundsToLandscape();
    void set_bSnapBoundsToLandscape(bool value);
    _Script_Engine::RuntimeVirtualTexture*& get_VirtualTexture();
    bool get_bEnableScalability();
    void set_bEnableScalability(bool value);
    void* get_ScalabilityGroup();
    bool get_bHidePrimitives();
    void set_bHidePrimitives(bool value);
    _Script_Engine::VirtualTextureBuilder*& get_StreamingTexture();
    int32_t& get_StreamLowMips();
    bool get_bBuildStreamingMipsButton();
    void set_bBuildStreamingMipsButton(bool value);
    bool get_bEnableCompressCrunch();
    void set_bEnableCompressCrunch(bool value);
    bool get_bUseStreamingLowMipsInEditor();
    void set_bUseStreamingLowMipsInEditor(bool value);
    bool get_bBuildDebugStreamingMips();
    void set_bBuildDebugStreamingMips(bool value);
    static _Script_CoreUObject::Class* static_class();
    void Invalidate(_Script_CoreUObject::BoxSphereBounds& WorldBounds);
}; // Size: 0x270
#pragma pack(pop)
}
