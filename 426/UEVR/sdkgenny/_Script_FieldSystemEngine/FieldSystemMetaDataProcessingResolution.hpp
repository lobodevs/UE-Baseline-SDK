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
struct FieldSystemMetaDataProcessingResolution : public FieldSystemMetaData {
    private: char pad_b0[0x8]; public:
    void* get_ResolutionType();
    static _Script_CoreUObject::Class* static_class();
    _Script_FieldSystemEngine::FieldSystemMetaDataProcessingResolution* SetMetaDataaProcessingResolutionType(void* ResolutionType);
}; // Size: 0xb8
#pragma pack(pop)
}
