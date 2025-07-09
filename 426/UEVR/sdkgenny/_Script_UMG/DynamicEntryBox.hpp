#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "DynamicEntryBoxBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
struct UserWidget;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct DynamicEntryBox : public DynamicEntryBoxBase {
    private: char pad_1d8[0x8]; public:
    void* get_EntryWidgetClass();
    static _Script_CoreUObject::Class* static_class();
    void Reset(bool bDeleteWidgets);
    void RemoveEntry(_Script_UMG::UserWidget* EntryWidget);
    _Script_UMG::UserWidget* BP_CreateEntryOfClass(void* EntryClass);
    _Script_UMG::UserWidget* BP_CreateEntry();
}; // Size: 0x1e0
#pragma pack(pop)
}
