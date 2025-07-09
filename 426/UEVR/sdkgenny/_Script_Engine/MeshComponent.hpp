#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "PrimitiveComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct MeshComponent : public PrimitiveComponent {
    private: char pad_440[0x30]; public:
    void* get_OverrideMaterials();
    bool get_bEnableMaterialParameterCaching();
    void set_bEnableMaterialParameterCaching(bool value);
    static _Script_CoreUObject::Class* static_class();
    void SetVectorParameterValueOnMaterials(void* ParameterName, _Script_CoreUObject::Vector ParameterValue);
    void SetScalarParameterValueOnMaterials(void* ParameterName, float ParameterValue);
    void PrestreamTextures(float Seconds, bool bPrioritizeCharacterTextures, int32_t CinematicTextureGroups);
    bool IsMaterialSlotNameValid(void* MaterialSlotName);
    void* GetMaterialSlotNames();
    void* GetMaterials();
    int32_t GetMaterialIndex(void* MaterialSlotName);
}; // Size: 0x470
#pragma pack(pop)
}
