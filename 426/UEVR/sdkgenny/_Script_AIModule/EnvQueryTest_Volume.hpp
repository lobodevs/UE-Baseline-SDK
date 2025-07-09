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
struct EnvQueryTest_Volume : public EnvQueryTest {
    private: char pad_1f8[0x18]; public:
    void* get_VolumeContext();
    void* get_VolumeClass();
    bool get_bDoComplexVolumeTest();
    void set_bDoComplexVolumeTest(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x210
#pragma pack(pop)
}
