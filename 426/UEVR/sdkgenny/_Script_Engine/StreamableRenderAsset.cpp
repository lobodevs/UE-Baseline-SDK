#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "StreamableRenderAsset.hpp"
double& _Script_Engine::StreamableRenderAsset::get_ForceMipLevelsToBeResidentTimestamp() {
    return *(double*)((uintptr_t)this + 0x40);
}
void _Script_Engine::StreamableRenderAsset::set_bGlobalForceMipLevelsToBeResident(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x54 + 0);
    *(uint8_t*)((uintptr_t)this + 0x54 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
int32_t& _Script_Engine::StreamableRenderAsset::get_NumCinematicMipLevels() {
    return *(int32_t*)((uintptr_t)this + 0x48);
}
void _Script_Engine::StreamableRenderAsset::set_NeverStream(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x54 + 0);
    *(uint8_t*)((uintptr_t)this + 0x54 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Engine::StreamableRenderAsset::get_CachedCombinedLODBias() {
    return *(int32_t*)((uintptr_t)this + 0x50);
}
int32_t& _Script_Engine::StreamableRenderAsset::get_StreamingIndex() {
    return *(int32_t*)((uintptr_t)this + 0x4c);
}
bool _Script_Engine::StreamableRenderAsset::get_NeverStream() {
    return (*(uint8_t*)((uintptr_t)this + 0x54 + 0)) & 1 != 0;
}
bool _Script_Engine::StreamableRenderAsset::get_bGlobalForceMipLevelsToBeResident() {
    return (*(uint8_t*)((uintptr_t)this + 0x54 + 0)) & 2 != 0;
}
bool _Script_Engine::StreamableRenderAsset::get_bHasStreamingUpdatePending() {
    return (*(uint8_t*)((uintptr_t)this + 0x54 + 0)) & 4 != 0;
}
void _Script_Engine::StreamableRenderAsset::set_bHasStreamingUpdatePending(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x54 + 0);
    *(uint8_t*)((uintptr_t)this + 0x54 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::StreamableRenderAsset::get_bForceMiplevelsToBeResident() {
    return (*(uint8_t*)((uintptr_t)this + 0x54 + 0)) & 8 != 0;
}
void _Script_Engine::StreamableRenderAsset::set_bForceMiplevelsToBeResident(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x54 + 0);
    *(uint8_t*)((uintptr_t)this + 0x54 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::StreamableRenderAsset::get_bIgnoreStreamingMipBias() {
    return (*(uint8_t*)((uintptr_t)this + 0x54 + 0)) & 16 != 0;
}
void _Script_Engine::StreamableRenderAsset::set_bIgnoreStreamingMipBias(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x54 + 0);
    *(uint8_t*)((uintptr_t)this + 0x54 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::StreamableRenderAsset::get_bUseCinematicMipLevels() {
    return (*(uint8_t*)((uintptr_t)this + 0x54 + 0)) & 32 != 0;
}
void _Script_Engine::StreamableRenderAsset::set_bUseCinematicMipLevels(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x54 + 0);
    *(uint8_t*)((uintptr_t)this + 0x54 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::StreamableRenderAsset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.StreamableRenderAsset");
    return result;
}
