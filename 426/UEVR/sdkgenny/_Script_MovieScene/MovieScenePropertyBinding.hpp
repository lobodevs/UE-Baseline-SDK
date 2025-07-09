#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieScene {
#pragma pack(push, 1)
struct MovieScenePropertyBinding {
    private: char pad_0[0x14]; public:
    void* get_PropertyName();
    void* get_PropertyPath();
    bool get_bCanUseClassLookup();
    void set_bCanUseClassLookup(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x14
#pragma pack(pop)
}
