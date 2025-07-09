#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Texture2D.hpp"
#include "VirtualTexture2D.hpp"
void* _Script_Engine::VirtualTexture2D::get_Settings() {
    return (void*)((uintptr_t)this + 0x100);
}
bool _Script_Engine::VirtualTexture2D::get_bContinuousUpdate() {
    return (*(uint8_t*)((uintptr_t)this + 0x10c + 0)) & 1 != 0;
}
void _Script_Engine::VirtualTexture2D::set_bContinuousUpdate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10c + 0);
    *(uint8_t*)((uintptr_t)this + 0x10c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::VirtualTexture2D::get_bSinglePhysicalSpace() {
    return (*(uint8_t*)((uintptr_t)this + 0x10d + 0)) & 1 != 0;
}
void _Script_Engine::VirtualTexture2D::set_bSinglePhysicalSpace(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10d + 0);
    *(uint8_t*)((uintptr_t)this + 0x10d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::VirtualTexture2D::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.VirtualTexture2D");
    return result;
}
