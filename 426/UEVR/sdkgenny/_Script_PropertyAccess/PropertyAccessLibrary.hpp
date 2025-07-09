#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_PropertyAccess {
#pragma pack(push, 1)
struct PropertyAccessLibrary {
    private: char pad_0[0xc8]; public:
    void* get_PathSegments();
    void* get_SrcPaths();
    void* get_DestPaths();
    void* get_CopyBatches();
    void* get_SrcAccesses();
    void* get_DestAccesses();
    void* get_Indirections();
    void* get_EventAccessIndices();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc8
#pragma pack(pop)
}
