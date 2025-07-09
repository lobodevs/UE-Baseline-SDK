#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Foliage {
struct FoliageType;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Foliage {
#pragma pack(push, 1)
struct ProceduralFoliageInstance {
    private: char pad_0[0x50]; public:
    void* get_Rotation();
    void* get_Location();
    float& get_Age();
    void* get_Normal();
    float& get_Scale();
    _Script_Foliage::FoliageType*& get_Type();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
