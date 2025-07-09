#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "MaterialInstance.hpp"
#include "MaterialInstanceDynamic.hpp"
#include "MaterialInterface.hpp"
#include "MaterialParameterInfo.hpp"
#include "Texture.hpp"
void _Script_Engine::MaterialInstanceDynamic::CopyParameterOverrides(_Script_Engine::MaterialInstance* MaterialInstance) {
    return;
}
void _Script_Engine::MaterialInstanceDynamic::SetScalarParameterValue(void* ParameterName, float Value) {
    return;
}
_Script_CoreUObject::Class* _Script_Engine::MaterialInstanceDynamic::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialInstanceDynamic");
    return result;
}
void _Script_Engine::MaterialInstanceDynamic::SetScalarParameterValueByInfo(_Script_Engine::MaterialParameterInfo& ParameterInfo, float Value) {
    return;
}
void _Script_Engine::MaterialInstanceDynamic::SetVectorParameterValueByInfo(_Script_Engine::MaterialParameterInfo& ParameterInfo, _Script_CoreUObject::LinearColor Value) {
    return;
}
void _Script_Engine::MaterialInstanceDynamic::SetVectorParameterValue(void* ParameterName, _Script_CoreUObject::LinearColor Value) {
    return;
}
void _Script_Engine::MaterialInstanceDynamic::SetTextureParameterValueByInfo(_Script_Engine::MaterialParameterInfo& ParameterInfo, _Script_Engine::Texture* Value) {
    return;
}
void _Script_Engine::MaterialInstanceDynamic::SetTextureParameterValue(void* ParameterName, _Script_Engine::Texture* Value) {
    return;
}
void _Script_Engine::MaterialInstanceDynamic::K2_InterpolateMaterialInstanceParams(_Script_Engine::MaterialInstance* SourceA, _Script_Engine::MaterialInstance* SourceB, float Alpha) {
    return;
}
_Script_CoreUObject::LinearColor _Script_Engine::MaterialInstanceDynamic::K2_GetVectorParameterValueByInfo(_Script_Engine::MaterialParameterInfo& ParameterInfo) {
    return;
}
_Script_CoreUObject::LinearColor _Script_Engine::MaterialInstanceDynamic::K2_GetVectorParameterValue(void* ParameterName) {
    return;
}
_Script_Engine::Texture* _Script_Engine::MaterialInstanceDynamic::K2_GetTextureParameterValueByInfo(_Script_Engine::MaterialParameterInfo& ParameterInfo) {
    return;
}
_Script_Engine::Texture* _Script_Engine::MaterialInstanceDynamic::K2_GetTextureParameterValue(void* ParameterName) {
    return;
}
float _Script_Engine::MaterialInstanceDynamic::K2_GetScalarParameterValueByInfo(_Script_Engine::MaterialParameterInfo& ParameterInfo) {
    return;
}
float _Script_Engine::MaterialInstanceDynamic::K2_GetScalarParameterValue(void* ParameterName) {
    return;
}
void _Script_Engine::MaterialInstanceDynamic::K2_CopyMaterialInstanceParameters(_Script_Engine::MaterialInterface* Source, bool bQuickParametersOnly) {
    return;
}
void _Script_Engine::MaterialInstanceDynamic::CopyInterpParameters(_Script_Engine::MaterialInstance* Source) {
    return;
}
