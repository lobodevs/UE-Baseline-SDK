#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "LocalLightComponent.hpp"
namespace _Script_Engine {
struct Texture;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RectLightComponent : public LocalLightComponent {
    private: char pad_340[0x20]; public:
    float& get_SourceWidth();
    float& get_SourceHeight();
    float& get_BarnDoorAngle();
    float& get_BarnDoorLength();
    _Script_Engine::Texture*& get_SourceTexture();
    static _Script_CoreUObject::Class* static_class();
    void SetSourceWidth(float bNewValue);
    void SetSourceTexture(_Script_Engine::Texture* bNewValue);
    void SetSourceHeight(float NewValue);
    void SetBarnDoorLength(float NewValue);
    void SetBarnDoorAngle(float NewValue);
}; // Size: 0x360
#pragma pack(pop)
}
