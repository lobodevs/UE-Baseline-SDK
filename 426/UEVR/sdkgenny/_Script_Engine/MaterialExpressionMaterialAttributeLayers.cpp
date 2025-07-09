#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionMaterialAttributeLayers.hpp"
void* _Script_Engine::MaterialExpressionMaterialAttributeLayers::get_ParameterName() {
    return (void*)((uintptr_t)this + 0x40);
}
int32_t& _Script_Engine::MaterialExpressionMaterialAttributeLayers::get_NumActiveLayerCallers() {
    return *(int32_t*)((uintptr_t)this + 0xc0);
}
void* _Script_Engine::MaterialExpressionMaterialAttributeLayers::get_ExpressionGUID() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_Engine::MaterialExpressionMaterialAttributeLayers::get_LayerCallers() {
    return (void*)((uintptr_t)this + 0xb0);
}
void* _Script_Engine::MaterialExpressionMaterialAttributeLayers::get_Input() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_Engine::MaterialExpressionMaterialAttributeLayers::get_DefaultLayers() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_Engine::MaterialExpressionMaterialAttributeLayers::get_BlendCallers() {
    return (void*)((uintptr_t)this + 0xc8);
}
int32_t& _Script_Engine::MaterialExpressionMaterialAttributeLayers::get_NumActiveBlendCallers() {
    return *(int32_t*)((uintptr_t)this + 0xd8);
}
bool _Script_Engine::MaterialExpressionMaterialAttributeLayers::get_bIsLayerGraphBuilt() {
    return (*(uint8_t*)((uintptr_t)this + 0xdc + 0)) & 1 != 0;
}
void _Script_Engine::MaterialExpressionMaterialAttributeLayers::set_bIsLayerGraphBuilt(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xdc + 0);
    *(uint8_t*)((uintptr_t)this + 0xdc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionMaterialAttributeLayers::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionMaterialAttributeLayers");
    return result;
}
