#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "RuntimeVirtualTexture.hpp"
#include "RuntimeVirtualTextureStreamingProxy.hpp"
void* _Script_Engine::RuntimeVirtualTexture::get_MaterialType() {
    return (void*)((uintptr_t)this + 0x34);
}
int32_t& _Script_Engine::RuntimeVirtualTexture::get_TileBorderSize() {
    return *(int32_t*)((uintptr_t)this + 0x30);
}
int32_t& _Script_Engine::RuntimeVirtualTexture::get_TileCount() {
    return *(int32_t*)((uintptr_t)this + 0x28);
}
int32_t& _Script_Engine::RuntimeVirtualTexture::get_TileSize() {
    return *(int32_t*)((uintptr_t)this + 0x2c);
}
bool _Script_Engine::RuntimeVirtualTexture::get_bCompressTextures() {
    return (*(uint8_t*)((uintptr_t)this + 0x35 + 0)) & 1 != 0;
}
void _Script_Engine::RuntimeVirtualTexture::set_bCompressTextures(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x35 + 0);
    *(uint8_t*)((uintptr_t)this + 0x35 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::RuntimeVirtualTexture::get_bClearTextures() {
    return (*(uint8_t*)((uintptr_t)this + 0x36 + 0)) & 1 != 0;
}
void _Script_Engine::RuntimeVirtualTexture::set_bClearTextures(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x36 + 0);
    *(uint8_t*)((uintptr_t)this + 0x36 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::RuntimeVirtualTexture::get_bSinglePhysicalSpace() {
    return (*(uint8_t*)((uintptr_t)this + 0x37 + 0)) & 1 != 0;
}
void _Script_Engine::RuntimeVirtualTexture::set_bSinglePhysicalSpace(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x37 + 0);
    *(uint8_t*)((uintptr_t)this + 0x37 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::RuntimeVirtualTexture::get_bPrivateSpace() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
void _Script_Engine::RuntimeVirtualTexture::set_bPrivateSpace(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::RuntimeVirtualTexture::get_bAdaptive() {
    return (*(uint8_t*)((uintptr_t)this + 0x39 + 0)) & 1 != 0;
}
void _Script_Engine::RuntimeVirtualTexture::set_bAdaptive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x39 + 0);
    *(uint8_t*)((uintptr_t)this + 0x39 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::RuntimeVirtualTexture::get_bContinuousUpdate() {
    return (*(uint8_t*)((uintptr_t)this + 0x3a + 0)) & 1 != 0;
}
void _Script_Engine::RuntimeVirtualTexture::set_bContinuousUpdate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3a + 0);
    *(uint8_t*)((uintptr_t)this + 0x3a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Engine::RuntimeVirtualTexture::get_RemoveLowMips() {
    return *(int32_t*)((uintptr_t)this + 0x3c);
}
void* _Script_Engine::RuntimeVirtualTexture::get_LODGroup() {
    return (void*)((uintptr_t)this + 0x40);
}
int32_t& _Script_Engine::RuntimeVirtualTexture::get_Size() {
    return *(int32_t*)((uintptr_t)this + 0x44);
}
_Script_Engine::RuntimeVirtualTextureStreamingProxy*& _Script_Engine::RuntimeVirtualTexture::get_StreamingTexture() {
    return *(_Script_Engine::RuntimeVirtualTextureStreamingProxy**)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_Engine::RuntimeVirtualTexture::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.RuntimeVirtualTexture");
    return result;
}
int32_t _Script_Engine::RuntimeVirtualTexture::GetTileSize() {
    return;
}
int32_t _Script_Engine::RuntimeVirtualTexture::GetTileCount() {
    return;
}
int32_t _Script_Engine::RuntimeVirtualTexture::GetTileBorderSize() {
    return;
}
int32_t _Script_Engine::RuntimeVirtualTexture::GetSize() {
    return;
}
int32_t _Script_Engine::RuntimeVirtualTexture::GetPageTableSize() {
    return;
}
