#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "TextureRenderTarget.hpp"
#include "TextureRenderTarget2DArray.hpp"
int32_t& _Script_Engine::TextureRenderTarget2DArray::get_SizeX() {
    return *(int32_t*)((uintptr_t)this + 0xe0);
}
int32_t& _Script_Engine::TextureRenderTarget2DArray::get_SizeY() {
    return *(int32_t*)((uintptr_t)this + 0xe4);
}
bool _Script_Engine::TextureRenderTarget2DArray::get_bForceLinearGamma() {
    return (*(uint8_t*)((uintptr_t)this + 0xfd + 0)) & 2 != 0;
}
int32_t& _Script_Engine::TextureRenderTarget2DArray::get_Slices() {
    return *(int32_t*)((uintptr_t)this + 0xe8);
}
void* _Script_Engine::TextureRenderTarget2DArray::get_ClearColor() {
    return (void*)((uintptr_t)this + 0xec);
}
bool _Script_Engine::TextureRenderTarget2DArray::get_bHDR() {
    return (*(uint8_t*)((uintptr_t)this + 0xfd + 0)) & 1 != 0;
}
void* _Script_Engine::TextureRenderTarget2DArray::get_OverrideFormat() {
    return (void*)((uintptr_t)this + 0xfc);
}
void _Script_Engine::TextureRenderTarget2DArray::set_bHDR(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xfd + 0);
    *(uint8_t*)((uintptr_t)this + 0xfd + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::TextureRenderTarget2DArray::set_bForceLinearGamma(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xfd + 0);
    *(uint8_t*)((uintptr_t)this + 0xfd + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::TextureRenderTarget2DArray::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.TextureRenderTarget2DArray");
    return result;
}
