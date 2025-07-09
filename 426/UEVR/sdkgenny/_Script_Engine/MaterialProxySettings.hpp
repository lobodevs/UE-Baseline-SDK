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
struct MaterialProxySettings {
    private: char pad_0[0x88]; public:
    void* get_TextureSize();
    float& get_GutterSpace();
    float& get_MetallicConstant();
    float& get_RoughnessConstant();
    float& get_AnisotropyConstant();
    float& get_SpecularConstant();
    float& get_OpacityConstant();
    float& get_OpacityMaskConstant();
    float& get_AmbientOcclusionConstant();
    void* get_TextureSizingType();
    void* get_MaterialMergeType();
    void* get_BlendMode();
    bool get_bAllowTwoSidedMaterial();
    void set_bAllowTwoSidedMaterial(bool value);
    bool get_bNormalMap();
    void set_bNormalMap(bool value);
    bool get_bTangentMap();
    void set_bTangentMap(bool value);
    bool get_bMetallicMap();
    void set_bMetallicMap(bool value);
    bool get_bRoughnessMap();
    void set_bRoughnessMap(bool value);
    bool get_bAnisotropyMap();
    void set_bAnisotropyMap(bool value);
    bool get_bSpecularMap();
    void set_bSpecularMap(bool value);
    bool get_bEmissiveMap();
    void set_bEmissiveMap(bool value);
    bool get_bOpacityMap();
    void set_bOpacityMap(bool value);
    bool get_bOpacityMaskMap();
    void set_bOpacityMaskMap(bool value);
    bool get_bAmbientOcclusionMap();
    void set_bAmbientOcclusionMap(bool value);
    void* get_DiffuseTextureSize();
    void* get_NormalTextureSize();
    void* get_TangentTextureSize();
    void* get_MetallicTextureSize();
    void* get_RoughnessTextureSize();
    void* get_AnisotropyTextureSize();
    void* get_SpecularTextureSize();
    void* get_EmissiveTextureSize();
    void* get_OpacityTextureSize();
    void* get_OpacityMaskTextureSize();
    void* get_AmbientOcclusionTextureSize();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x88
#pragma pack(pop)
}
