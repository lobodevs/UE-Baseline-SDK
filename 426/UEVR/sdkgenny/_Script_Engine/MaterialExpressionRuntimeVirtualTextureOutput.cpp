#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpressionCustomOutput.hpp"
#include "MaterialExpressionRuntimeVirtualTextureOutput.hpp"
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionRuntimeVirtualTextureOutput::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionRuntimeVirtualTextureOutput");
    return result;
}
void* _Script_Engine::MaterialExpressionRuntimeVirtualTextureOutput::get_BaseColor() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::MaterialExpressionRuntimeVirtualTextureOutput::get_Opacity() {
    return (void*)((uintptr_t)this + 0xa4);
}
void* _Script_Engine::MaterialExpressionRuntimeVirtualTextureOutput::get_Specular() {
    return (void*)((uintptr_t)this + 0x54);
}
void* _Script_Engine::MaterialExpressionRuntimeVirtualTextureOutput::get_WorldHeight() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_Engine::MaterialExpressionRuntimeVirtualTextureOutput::get_Roughness() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_Engine::MaterialExpressionRuntimeVirtualTextureOutput::get_Normal() {
    return (void*)((uintptr_t)this + 0x7c);
}
void* _Script_Engine::MaterialExpressionRuntimeVirtualTextureOutput::get_Mask() {
    return (void*)((uintptr_t)this + 0xb8);
}
