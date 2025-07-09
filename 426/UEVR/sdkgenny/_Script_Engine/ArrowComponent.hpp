#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "PrimitiveComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ArrowComponent : public PrimitiveComponent {
    private: char pad_440[0x20]; public:
    void* get_ArrowColor();
    float& get_ArrowSize();
    float& get_ArrowLength();
    float& get_ScreenSize();
    bool get_bIsScreenSizeScaled();
    void set_bIsScreenSizeScaled(bool value);
    bool get_bTreatAsASprite();
    void set_bTreatAsASprite(bool value);
    static _Script_CoreUObject::Class* static_class();
    void SetArrowColor(_Script_CoreUObject::LinearColor NewColor);
}; // Size: 0x460
#pragma pack(pop)
}
