#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PrimaryAssetRules {
    private: char pad_0[0xc]; public:
    int32_t& get_Priority();
    int32_t& get_ChunkId();
    bool get_bApplyRecursively();
    void set_bApplyRecursively(bool value);
    void* get_CookRule();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc
#pragma pack(pop)
}
