#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialProxySettings.hpp"
void* _Script_Engine::MaterialProxySettings::get_RoughnessTextureSize() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_Engine::MaterialProxySettings::get_TextureSize() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::MaterialProxySettings::get_SpecularTextureSize() {
    return (void*)((uintptr_t)this + 0x60);
}
float& _Script_Engine::MaterialProxySettings::get_GutterSpace() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_Engine::MaterialProxySettings::get_MetallicConstant() {
    return *(float*)((uintptr_t)this + 0xc);
}
void* _Script_Engine::MaterialProxySettings::get_OpacityMaskTextureSize() {
    return (void*)((uintptr_t)this + 0x78);
}
float& _Script_Engine::MaterialProxySettings::get_RoughnessConstant() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_Engine::MaterialProxySettings::get_AnisotropyConstant() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Script_Engine::MaterialProxySettings::get_SpecularConstant() {
    return *(float*)((uintptr_t)this + 0x18);
}
float& _Script_Engine::MaterialProxySettings::get_OpacityConstant() {
    return *(float*)((uintptr_t)this + 0x1c);
}
float& _Script_Engine::MaterialProxySettings::get_OpacityMaskConstant() {
    return *(float*)((uintptr_t)this + 0x20);
}
float& _Script_Engine::MaterialProxySettings::get_AmbientOcclusionConstant() {
    return *(float*)((uintptr_t)this + 0x24);
}
void* _Script_Engine::MaterialProxySettings::get_TextureSizingType() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Engine::MaterialProxySettings::get_MaterialMergeType() {
    return (void*)((uintptr_t)this + 0x29);
}
void* _Script_Engine::MaterialProxySettings::get_BlendMode() {
    return (void*)((uintptr_t)this + 0x2a);
}
bool _Script_Engine::MaterialProxySettings::get_bAllowTwoSidedMaterial() {
    return (*(uint8_t*)((uintptr_t)this + 0x2b + 0)) & 1 != 0;
}
void _Script_Engine::MaterialProxySettings::set_bAllowTwoSidedMaterial(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2b + 0);
    *(uint8_t*)((uintptr_t)this + 0x2b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::MaterialProxySettings::get_bNormalMap() {
    return (*(uint8_t*)((uintptr_t)this + 0x2b + 0)) & 2 != 0;
}
void _Script_Engine::MaterialProxySettings::set_bNormalMap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2b + 0);
    *(uint8_t*)((uintptr_t)this + 0x2b + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::MaterialProxySettings::get_bTangentMap() {
    return (*(uint8_t*)((uintptr_t)this + 0x2b + 0)) & 4 != 0;
}
void _Script_Engine::MaterialProxySettings::set_bTangentMap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2b + 0);
    *(uint8_t*)((uintptr_t)this + 0x2b + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::MaterialProxySettings::get_bMetallicMap() {
    return (*(uint8_t*)((uintptr_t)this + 0x2b + 0)) & 8 != 0;
}
void _Script_Engine::MaterialProxySettings::set_bMetallicMap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2b + 0);
    *(uint8_t*)((uintptr_t)this + 0x2b + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::MaterialProxySettings::get_bRoughnessMap() {
    return (*(uint8_t*)((uintptr_t)this + 0x2b + 0)) & 16 != 0;
}
void _Script_Engine::MaterialProxySettings::set_bRoughnessMap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2b + 0);
    *(uint8_t*)((uintptr_t)this + 0x2b + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::MaterialProxySettings::get_bAnisotropyMap() {
    return (*(uint8_t*)((uintptr_t)this + 0x2b + 0)) & 32 != 0;
}
void _Script_Engine::MaterialProxySettings::set_bAnisotropyMap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2b + 0);
    *(uint8_t*)((uintptr_t)this + 0x2b + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::MaterialProxySettings::get_bSpecularMap() {
    return (*(uint8_t*)((uintptr_t)this + 0x2b + 0)) & 64 != 0;
}
void _Script_Engine::MaterialProxySettings::set_bSpecularMap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2b + 0);
    *(uint8_t*)((uintptr_t)this + 0x2b + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::MaterialProxySettings::get_bEmissiveMap() {
    return (*(uint8_t*)((uintptr_t)this + 0x2b + 0)) & 128 != 0;
}
void _Script_Engine::MaterialProxySettings::set_bEmissiveMap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2b + 0);
    *(uint8_t*)((uintptr_t)this + 0x2b + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::MaterialProxySettings::get_bOpacityMap() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c + 0)) & 1 != 0;
}
void _Script_Engine::MaterialProxySettings::set_bOpacityMap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::MaterialProxySettings::get_bOpacityMaskMap() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c + 0)) & 2 != 0;
}
void _Script_Engine::MaterialProxySettings::set_bOpacityMaskMap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::MaterialProxySettings::get_bAmbientOcclusionMap() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c + 0)) & 4 != 0;
}
void _Script_Engine::MaterialProxySettings::set_bAmbientOcclusionMap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void* _Script_Engine::MaterialProxySettings::get_DiffuseTextureSize() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::MaterialProxySettings::get_NormalTextureSize() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Engine::MaterialProxySettings::get_TangentTextureSize() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::MaterialProxySettings::get_MetallicTextureSize() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_Engine::MaterialProxySettings::get_AnisotropyTextureSize() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_Engine::MaterialProxySettings::get_EmissiveTextureSize() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_Engine::MaterialProxySettings::get_OpacityTextureSize() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_Engine::MaterialProxySettings::get_AmbientOcclusionTextureSize() {
    return (void*)((uintptr_t)this + 0x80);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialProxySettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.MaterialProxySettings");
    return result;
}
