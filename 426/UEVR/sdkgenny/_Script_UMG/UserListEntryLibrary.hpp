#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
struct ListViewBase;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct UserListEntryLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    bool IsListItemSelected(void* UserListEntry);
    bool IsListItemExpanded(void* UserListEntry);
    _Script_UMG::ListViewBase* GetOwningListView(void* UserListEntry);
}; // Size: 0x28
#pragma pack(pop)
}
