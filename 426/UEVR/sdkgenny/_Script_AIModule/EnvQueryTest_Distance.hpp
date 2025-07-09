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
struct EnvQueryTest_Distance : public EnvQueryTest {
    private: char pad_1f8[0x10]; public:
    void* get_TestMode();
    void* get_DistanceTo();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x208
#pragma pack(pop)
}
