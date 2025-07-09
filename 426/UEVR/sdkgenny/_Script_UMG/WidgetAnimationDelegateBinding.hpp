#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\DynamicBlueprintBinding.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct WidgetAnimationDelegateBinding : public _Script_Engine::DynamicBlueprintBinding {
    private: char pad_28[0x10]; public:
    void* get_WidgetAnimationDelegateBindings();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
