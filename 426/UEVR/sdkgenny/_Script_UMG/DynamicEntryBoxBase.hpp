#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Widget.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
struct RadialBoxSettings;
}
namespace _Script_CoreUObject {
struct Vector2D;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct DynamicEntryBoxBase : public Widget {
    private: char pad_108[0xd0]; public:
    void* get_EntryBoxType();
    void* get_EntrySpacing();
    void* get_SpacingPattern();
    void* get_EntrySizeRule();
    void* get_EntryHorizontalAlignment();
    void* get_EntryVerticalAlignment();
    int32_t& get_MaxElementSize();
    void* get_RadialBoxSettings();
    void* get_EntryWidgetPool();
    static _Script_CoreUObject::Class* static_class();
    void SetRadialSettings(_Script_UMG::RadialBoxSettings& InSettings);
    void SetEntrySpacing(_Script_CoreUObject::Vector2D& InEntrySpacing);
    int32_t GetNumEntries();
    void* GetAllEntries();
}; // Size: 0x1d8
#pragma pack(pop)
}
