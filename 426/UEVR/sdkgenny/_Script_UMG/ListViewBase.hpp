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
#pragma pack(push, 1)
struct ListViewBase : public Widget {
    private: char pad_108[0x110]; public:
    void* get_EntryWidgetClass();
    float& get_WheelScrollMultiplier();
    bool get_bEnableScrollAnimation();
    void set_bEnableScrollAnimation(bool value);
    bool get_bEnableFixedLineOffset();
    void set_bEnableFixedLineOffset(bool value);
    float& get_FixedLineScrollOffset();
    void* get_BP_OnEntryGenerated();
    void* get_BP_OnEntryReleased();
    void* get_EntryWidgetPool();
    static _Script_CoreUObject::Class* static_class();
    void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);
    void SetScrollOffset(float InScrollOffset);
    void SetScrollbarVisibility(void* InVisibility);
    void ScrollToTop();
    void ScrollToBottom();
    void RequestRefresh();
    void RegenerateAllEntries();
    void* GetDisplayedEntryWidgets();
}; // Size: 0x218
#pragma pack(pop)
}
