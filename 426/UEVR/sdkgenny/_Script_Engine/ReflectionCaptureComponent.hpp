#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SceneComponent.hpp"
namespace _Script_Engine {
struct BillboardComponent;
}
namespace _Script_Engine {
struct TextureCube;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ReflectionCaptureComponent : public SceneComponent {
    private: char pad_200[0x70]; public:
    _Script_Engine::BillboardComponent*& get_CaptureOffsetComponent();
    void* get_ReflectionSourceType();
    void* get_MobileReflectionCompression();
    _Script_Engine::TextureCube*& get_Cubemap();
    float& get_SourceCubemapAngle();
    float& get_Brightness();
    bool get_bModifyMaxValueRGBM();
    void set_bModifyMaxValueRGBM(bool value);
    float& get_MaxValueRGBM();
    void* get_CaptureOffset();
    void* get_MapBuildDataId();
    _Script_Engine::TextureCube*& get_CachedEncodedHDRCubemap();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x270
#pragma pack(pop)
}
