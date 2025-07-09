#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "EnvQueryTest.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct EnvQueryTest_GameplayTags : public EnvQueryTest {
    private: char pad_1f8[0x70]; public:
    void* get_TagQueryToMatch();
    bool get_bUpdatedToUseQuery();
    void set_bUpdatedToUseQuery(bool value);
    void* get_TagsToMatch();
    void* get_GameplayTags();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x268
#pragma pack(pop)
}
