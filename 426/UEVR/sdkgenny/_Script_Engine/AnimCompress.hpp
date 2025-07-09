#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimBoneCompressionCodec.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AnimCompress : public AnimBoneCompressionCodec {
    private: char pad_38[0x8]; public:
    bool get_bNeedsSkeleton();
    void set_bNeedsSkeleton(bool value);
    void* get_TranslationCompressionFormat();
    void* get_RotationCompressionFormat();
    void* get_ScaleCompressionFormat();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
