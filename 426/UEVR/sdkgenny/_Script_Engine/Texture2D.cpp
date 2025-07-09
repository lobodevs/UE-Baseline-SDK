#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Texture.hpp"
#include "Texture2D.hpp"
int32_t& _Script_Engine::Texture2D::get_LevelIndex() {
    return *(int32_t*)((uintptr_t)this + 0xd8);
}
int32_t& _Script_Engine::Texture2D::get_FirstResourceMemMip() {
    return *(int32_t*)((uintptr_t)this + 0xdc);
}
bool _Script_Engine::Texture2D::get_bTemporarilyDisableStreaming() {
    return (*(uint8_t*)((uintptr_t)this + 0xe0 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Engine::Texture2D::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.Texture2D");
    return result;
}
void _Script_Engine::Texture2D::set_bTemporarilyDisableStreaming(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t _Script_Engine::Texture2D::Blueprint_GetSizeY() {
    return;
}
void* _Script_Engine::Texture2D::get_AddressX() {
    return (void*)((uintptr_t)this + 0xe1);
}
void* _Script_Engine::Texture2D::get_ImportedSize() {
    return (void*)((uintptr_t)this + 0xe4);
}
void* _Script_Engine::Texture2D::get_AddressY() {
    return (void*)((uintptr_t)this + 0xe2);
}
int32_t _Script_Engine::Texture2D::Blueprint_GetSizeX() {
    return;
}
