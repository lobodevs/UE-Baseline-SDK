#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "FieldSystemMetaData.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_FieldSystemEngine {
#pragma pack(push, 1)
struct FieldSystemMetaDataIteration : public FieldSystemMetaData {
    private: char pad_b0[0x8]; public:
    int32_t& get_Iterations();
    static _Script_CoreUObject::Class* static_class();
    _Script_FieldSystemEngine::FieldSystemMetaDataIteration* SetMetaDataIteration(int32_t Iterations);
}; // Size: 0xb8
#pragma pack(pop)
}
