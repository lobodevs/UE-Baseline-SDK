#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "MaterialInstance.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct MaterialParameterInfo;
}
namespace _Script_Engine {
struct Texture;
}
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct MaterialInstanceDynamic : public MaterialInstance {
    private: char pad_360[0x50]; public:
    static _Script_CoreUObject::Class* static_class();
    void SetVectorParameterValueByInfo(_Script_Engine::MaterialParameterInfo& ParameterInfo, _Script_CoreUObject::LinearColor Value);
    void SetVectorParameterValue(void* ParameterName, _Script_CoreUObject::LinearColor Value);
    void SetTextureParameterValueByInfo(_Script_Engine::MaterialParameterInfo& ParameterInfo, _Script_Engine::Texture* Value);
    void SetTextureParameterValue(void* ParameterName, _Script_Engine::Texture* Value);
    void SetScalarParameterValueByInfo(_Script_Engine::MaterialParameterInfo& ParameterInfo, float Value);
    void SetScalarParameterValue(void* ParameterName, float Value);
    void K2_InterpolateMaterialInstanceParams(_Script_Engine::MaterialInstance* SourceA, _Script_Engine::MaterialInstance* SourceB, float Alpha);
    _Script_CoreUObject::LinearColor K2_GetVectorParameterValueByInfo(_Script_Engine::MaterialParameterInfo& ParameterInfo);
    _Script_CoreUObject::LinearColor K2_GetVectorParameterValue(void* ParameterName);
    _Script_Engine::Texture* K2_GetTextureParameterValueByInfo(_Script_Engine::MaterialParameterInfo& ParameterInfo);
    _Script_Engine::Texture* K2_GetTextureParameterValue(void* ParameterName);
    float K2_GetScalarParameterValueByInfo(_Script_Engine::MaterialParameterInfo& ParameterInfo);
    float K2_GetScalarParameterValue(void* ParameterName);
    void K2_CopyMaterialInstanceParameters(_Script_Engine::MaterialInterface* Source, bool bQuickParametersOnly);
    void CopyParameterOverrides(_Script_Engine::MaterialInstance* MaterialInstance);
    void CopyInterpParameters(_Script_Engine::MaterialInstance* Source);
}; // Size: 0x3b0
#pragma pack(pop)
}
