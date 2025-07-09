#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialCachedExpressionData.hpp"
void* _Script_Engine::MaterialCachedExpressionData::get_Parameters() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::MaterialCachedExpressionData::get_ReferencedTextures() {
    return (void*)((uintptr_t)this + 0x1a0);
}
void* _Script_Engine::MaterialCachedExpressionData::get_DefaultLayers() {
    return (void*)((uintptr_t)this + 0x1d0);
}
void* _Script_Engine::MaterialCachedExpressionData::get_FunctionInfos() {
    return (void*)((uintptr_t)this + 0x1b0);
}
void* _Script_Engine::MaterialCachedExpressionData::get_ParameterCollectionInfos() {
    return (void*)((uintptr_t)this + 0x1c0);
}
void* _Script_Engine::MaterialCachedExpressionData::get_DefaultLayerBlends() {
    return (void*)((uintptr_t)this + 0x1e0);
}
void* _Script_Engine::MaterialCachedExpressionData::get_GrassTypes() {
    return (void*)((uintptr_t)this + 0x1f0);
}
void* _Script_Engine::MaterialCachedExpressionData::get_DynamicParameterNames() {
    return (void*)((uintptr_t)this + 0x200);
}
void* _Script_Engine::MaterialCachedExpressionData::get_QualityLevelsUsed() {
    return (void*)((uintptr_t)this + 0x210);
}
bool _Script_Engine::MaterialCachedExpressionData::get_bHasRuntimeVirtualTextureOutput() {
    return (*(uint8_t*)((uintptr_t)this + 0x220 + 0)) & 1 != 0;
}
void _Script_Engine::MaterialCachedExpressionData::set_bHasRuntimeVirtualTextureOutput(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x220 + 0);
    *(uint8_t*)((uintptr_t)this + 0x220 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::MaterialCachedExpressionData::get_bHasSceneColor() {
    return (*(uint8_t*)((uintptr_t)this + 0x220 + 0)) & 2 != 0;
}
void _Script_Engine::MaterialCachedExpressionData::set_bHasSceneColor(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x220 + 0);
    *(uint8_t*)((uintptr_t)this + 0x220 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialCachedExpressionData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.MaterialCachedExpressionData");
    return result;
}
