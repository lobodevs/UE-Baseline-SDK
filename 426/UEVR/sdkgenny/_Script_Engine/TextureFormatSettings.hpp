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
struct TextureFormatSettings {
    private: char pad_0[0x2]; public:
    void* get_CompressionSettings();
    bool get_CompressionNoAlpha();
    void set_CompressionNoAlpha(bool value);
    bool get_CompressionNone();
    void set_CompressionNone(bool value);
    bool get_CompressionYCoCg();
    void set_CompressionYCoCg(bool value);
    bool get_SRGB();
    void set_SRGB(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2
#pragma pack(pop)
}
