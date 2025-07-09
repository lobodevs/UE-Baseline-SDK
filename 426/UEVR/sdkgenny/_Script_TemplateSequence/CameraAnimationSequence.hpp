#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "TemplateSequence.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_TemplateSequence {
#pragma pack(push, 1)
struct CameraAnimationSequence : public TemplateSequence {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x108
#pragma pack(pop)
}
