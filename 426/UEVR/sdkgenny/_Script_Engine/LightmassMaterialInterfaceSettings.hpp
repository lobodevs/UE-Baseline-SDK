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
struct LightmassMaterialInterfaceSettings {
    private: char pad_0[0x10]; public:
    float& get_EmissiveBoost();
    float& get_DiffuseBoost();
    float& get_ExportResolutionScale();
    bool get_bCastShadowAsMasked();
    void set_bCastShadowAsMasked(bool value);
    bool get_bOverrideCastShadowAsMasked();
    void set_bOverrideCastShadowAsMasked(bool value);
    bool get_bOverrideEmissiveBoost();
    void set_bOverrideEmissiveBoost(bool value);
    bool get_bOverrideDiffuseBoost();
    void set_bOverrideDiffuseBoost(bool value);
    bool get_bOverrideExportResolutionScale();
    void set_bOverrideExportResolutionScale(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
