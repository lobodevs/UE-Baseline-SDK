#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "StreamableRenderAsset.hpp"
#include "StreamingRenderAssetPrimitiveInfo.hpp"
_Script_Engine::StreamableRenderAsset*& _Script_Engine::StreamingRenderAssetPrimitiveInfo::get_RenderAsset() {
    return *(_Script_Engine::StreamableRenderAsset**)((uintptr_t)this + 0x0);
}
void _Script_Engine::StreamingRenderAssetPrimitiveInfo::set_bAllowInvalidTexelFactorWhenUnregistered(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::StreamingRenderAssetPrimitiveInfo::get_Bounds() {
    return (void*)((uintptr_t)this + 0x8);
}
bool _Script_Engine::StreamingRenderAssetPrimitiveInfo::get_bAllowInvalidTexelFactorWhenUnregistered() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c + 0)) & 1 != 0;
}
float& _Script_Engine::StreamingRenderAssetPrimitiveInfo::get_TexelFactor() {
    return *(float*)((uintptr_t)this + 0x24);
}
_Script_CoreUObject::Class* _Script_Engine::StreamingRenderAssetPrimitiveInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.StreamingRenderAssetPrimitiveInfo");
    return result;
}
void* _Script_Engine::StreamingRenderAssetPrimitiveInfo::get_PackedRelativeBox() {
    return (void*)((uintptr_t)this + 0x28);
}
