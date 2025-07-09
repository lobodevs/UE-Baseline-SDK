#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "StreamableRenderAsset.hpp"
#include "Texture.hpp"
int32_t& _Script_Engine::Texture::get_LODBias() {
    return *(int32_t*)((uintptr_t)this + 0x78);
}
void* _Script_Engine::Texture::get_LightingGuid() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_Engine::Texture::get_DownscaleOptions() {
    return (void*)((uintptr_t)this + 0x84);
}
void _Script_Engine::Texture::set_VirtualTextureStreaming(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x85 + 0);
    *(uint8_t*)((uintptr_t)this + 0x85 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void* _Script_Engine::Texture::get_LODGroup() {
    return (void*)((uintptr_t)this + 0x7f);
}
void* _Script_Engine::Texture::get_CompressionSettings() {
    return (void*)((uintptr_t)this + 0x7c);
}
void* _Script_Engine::Texture::get_Filter() {
    return (void*)((uintptr_t)this + 0x7d);
}
bool _Script_Engine::Texture::get_VirtualTextureStreaming() {
    return (*(uint8_t*)((uintptr_t)this + 0x85 + 0)) & 4 != 0;
}
void* _Script_Engine::Texture::get_MipLoadOptions() {
    return (void*)((uintptr_t)this + 0x7e);
}
bool _Script_Engine::Texture::get_CompressionYCoCg() {
    return (*(uint8_t*)((uintptr_t)this + 0x85 + 0)) & 8 != 0;
}
void* _Script_Engine::Texture::get_Downscale() {
    return (void*)((uintptr_t)this + 0x80);
}
bool _Script_Engine::Texture::get_SRGB() {
    return (*(uint8_t*)((uintptr_t)this + 0x85 + 0)) & 1 != 0;
}
void _Script_Engine::Texture::set_SRGB(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x85 + 0);
    *(uint8_t*)((uintptr_t)this + 0x85 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::Texture::get_bNoTiling() {
    return (*(uint8_t*)((uintptr_t)this + 0x85 + 0)) & 2 != 0;
}
void _Script_Engine::Texture::set_bNoTiling(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x85 + 0);
    *(uint8_t*)((uintptr_t)this + 0x85 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::Texture::set_CompressionYCoCg(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x85 + 0);
    *(uint8_t*)((uintptr_t)this + 0x85 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::Texture::get_bNotOfflineProcessed() {
    return (*(uint8_t*)((uintptr_t)this + 0x85 + 0)) & 16 != 0;
}
void _Script_Engine::Texture::set_bNotOfflineProcessed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x85 + 0);
    *(uint8_t*)((uintptr_t)this + 0x85 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::Texture::get_bAsyncResourceReleaseHasBeenStarted() {
    return (*(uint8_t*)((uintptr_t)this + 0x85 + 0)) & 32 != 0;
}
void _Script_Engine::Texture::set_bAsyncResourceReleaseHasBeenStarted(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x85 + 0);
    *(uint8_t*)((uintptr_t)this + 0x85 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
void* _Script_Engine::Texture::get_AssetUserData() {
    return (void*)((uintptr_t)this + 0x88);
}
_Script_CoreUObject::Class* _Script_Engine::Texture::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.Texture");
    return result;
}
