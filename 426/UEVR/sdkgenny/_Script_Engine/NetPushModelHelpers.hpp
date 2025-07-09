#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct NetPushModelHelpers : public BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void MarkPropertyDirtyFromRepIndex(_Script_CoreUObject::Object* Object, int32_t RepIndex, void* PropertyName);
    void MarkPropertyDirty(_Script_CoreUObject::Object* Object, void* PropertyName);
}; // Size: 0x28
#pragma pack(pop)
}
