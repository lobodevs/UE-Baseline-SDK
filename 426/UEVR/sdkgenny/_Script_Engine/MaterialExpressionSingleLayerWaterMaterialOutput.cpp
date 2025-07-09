#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpressionCustomOutput.hpp"
#include "MaterialExpressionSingleLayerWaterMaterialOutput.hpp"
void* _Script_Engine::MaterialExpressionSingleLayerWaterMaterialOutput::get_ScatteringCoefficients() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::MaterialExpressionSingleLayerWaterMaterialOutput::get_AbsorptionCoefficients() {
    return (void*)((uintptr_t)this + 0x54);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionSingleLayerWaterMaterialOutput::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionSingleLayerWaterMaterialOutput");
    return result;
}
void* _Script_Engine::MaterialExpressionSingleLayerWaterMaterialOutput::get_PhaseG() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_Engine::MaterialExpressionSingleLayerWaterMaterialOutput::get_ColorScaleBehindWater() {
    return (void*)((uintptr_t)this + 0x7c);
}
