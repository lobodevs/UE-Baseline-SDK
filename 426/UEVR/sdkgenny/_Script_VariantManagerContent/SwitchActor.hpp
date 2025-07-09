#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_VariantManagerContent {
#pragma pack(push, 1)
struct SwitchActor : public _Script_Engine::Actor {
    private: char pad_220[0x28]; public:
    _Script_Engine::SceneComponent*& get_SceneComponent();
    int32_t& get_LastSelectedOption();
    static _Script_CoreUObject::Class* static_class();
    void SelectOption(int32_t OptionIndex);
    int32_t GetSelectedOption();
    void* GetOptions();
}; // Size: 0x248
#pragma pack(pop)
}
