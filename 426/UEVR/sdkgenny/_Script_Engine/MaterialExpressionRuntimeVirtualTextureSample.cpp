#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionRuntimeVirtualTextureSample.hpp"
#include "RuntimeVirtualTexture.hpp"
void* _Script_Engine::MaterialExpressionRuntimeVirtualTextureSample::get_WorldPosition() {
    return (void*)((uintptr_t)this + 0x54);
}
void* _Script_Engine::MaterialExpressionRuntimeVirtualTextureSample::get_Coordinates() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::MaterialExpressionRuntimeVirtualTextureSample::get_MipValue() {
    return (void*)((uintptr_t)this + 0x68);
}
bool _Script_Engine::MaterialExpressionRuntimeVirtualTextureSample::get_bSinglePhysicalSpace() {
    return (*(uint8_t*)((uintptr_t)this + 0x89 + 0)) & 1 != 0;
}
_Script_Engine::RuntimeVirtualTexture*& _Script_Engine::MaterialExpressionRuntimeVirtualTextureSample::get_VirtualTexture() {
    return *(_Script_Engine::RuntimeVirtualTexture**)((uintptr_t)this + 0x80);
}
void* _Script_Engine::MaterialExpressionRuntimeVirtualTextureSample::get_MaterialType() {
    return (void*)((uintptr_t)this + 0x88);
}
bool _Script_Engine::MaterialExpressionRuntimeVirtualTextureSample::get_bAdaptive() {
    return (*(uint8_t*)((uintptr_t)this + 0x8a + 0)) & 1 != 0;
}
void _Script_Engine::MaterialExpressionRuntimeVirtualTextureSample::set_bSinglePhysicalSpace(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x89 + 0);
    *(uint8_t*)((uintptr_t)this + 0x89 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::MaterialExpressionRuntimeVirtualTextureSample::set_bAdaptive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8a + 0);
    *(uint8_t*)((uintptr_t)this + 0x8a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::MaterialExpressionRuntimeVirtualTextureSample::get_MipValueMode() {
    return (void*)((uintptr_t)this + 0x8b);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionRuntimeVirtualTextureSample::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionRuntimeVirtualTextureSample");
    return result;
}
void* _Script_Engine::MaterialExpressionRuntimeVirtualTextureSample::get_TextureAddressMode() {
    return (void*)((uintptr_t)this + 0x8c);
}
