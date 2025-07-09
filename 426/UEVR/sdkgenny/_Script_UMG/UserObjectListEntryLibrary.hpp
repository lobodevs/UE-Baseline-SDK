#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct UserObjectListEntryLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    _Script_CoreUObject::Object* GetListItemObject(void* UserObjectListEntry);
}; // Size: 0x28
#pragma pack(pop)
}
