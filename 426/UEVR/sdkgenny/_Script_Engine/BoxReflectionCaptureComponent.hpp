#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ReflectionCaptureComponent.hpp"
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct BoxReflectionCaptureComponent : public ReflectionCaptureComponent {
    private: char pad_270[0x20]; public:
    float& get_BoxTransitionDistance();
    _Script_Engine::BoxComponent*& get_PreviewInfluenceBox();
    _Script_Engine::BoxComponent*& get_PreviewCaptureBox();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x290
#pragma pack(pop)
}
