#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "TextureLODGroup.hpp"
void* _Script_Engine::TextureLODGroup::get_Group() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_Engine::TextureLODGroup::get_LODBias() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
int32_t& _Script_Engine::TextureLODGroup::get_LODBias_Smallest() {
    return *(int32_t*)((uintptr_t)this + 0x14);
}
int32_t& _Script_Engine::TextureLODGroup::get_LODBias_Smaller() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
int32_t& _Script_Engine::TextureLODGroup::get_VirtualTextureTileSizeBias() {
    return *(int32_t*)((uintptr_t)this + 0x60);
}
int32_t& _Script_Engine::TextureLODGroup::get_NumStreamedMips() {
    return *(int32_t*)((uintptr_t)this + 0x1c);
}
void* _Script_Engine::TextureLODGroup::get_MipGenSettings() {
    return (void*)((uintptr_t)this + 0x20);
}
int32_t& _Script_Engine::TextureLODGroup::get_MinLODSize() {
    return *(int32_t*)((uintptr_t)this + 0x24);
}
int32_t& _Script_Engine::TextureLODGroup::get_MaxLODSize() {
    return *(int32_t*)((uintptr_t)this + 0x28);
}
int32_t& _Script_Engine::TextureLODGroup::get_MaxLODSize_Smaller() {
    return *(int32_t*)((uintptr_t)this + 0x2c);
}
int32_t& _Script_Engine::TextureLODGroup::get_MaxLODSize_Smallest() {
    return *(int32_t*)((uintptr_t)this + 0x30);
}
int32_t& _Script_Engine::TextureLODGroup::get_OptionalLODBias() {
    return *(int32_t*)((uintptr_t)this + 0x34);
}
int32_t& _Script_Engine::TextureLODGroup::get_OptionalMaxLODSize() {
    return *(int32_t*)((uintptr_t)this + 0x38);
}
void* _Script_Engine::TextureLODGroup::get_MinMagFilter() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::TextureLODGroup::get_MipFilter() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_Engine::TextureLODGroup::get_MipLoadOptions() {
    return (void*)((uintptr_t)this + 0x50);
}
bool _Script_Engine::TextureLODGroup::get_DuplicateNonOptionalMips() {
    return (*(uint8_t*)((uintptr_t)this + 0x51 + 0)) & 1 != 0;
}
void _Script_Engine::TextureLODGroup::set_DuplicateNonOptionalMips(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x51 + 0);
    *(uint8_t*)((uintptr_t)this + 0x51 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::TextureLODGroup::get_Downscale() {
    return *(float*)((uintptr_t)this + 0x54);
}
void* _Script_Engine::TextureLODGroup::get_DownscaleOptions() {
    return (void*)((uintptr_t)this + 0x58);
}
int32_t& _Script_Engine::TextureLODGroup::get_VirtualTextureTileCountBias() {
    return *(int32_t*)((uintptr_t)this + 0x5c);
}
_Script_CoreUObject::Class* _Script_Engine::TextureLODGroup::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.TextureLODGroup");
    return result;
}
