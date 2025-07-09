#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
#include "MaterialParameterInfo.hpp"
namespace _Script_Engine {
struct SubsurfaceProfile;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct PhysicalMaterialMask;
}
namespace _Script_PhysicsCore {
struct PhysicalMaterial;
}
namespace _Script_Engine {
struct Material;
}
namespace _Script_Engine {
struct MaterialFunctionInterface;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct MaterialInterface : public _Script_CoreUObject::Object {
    private: char pad_28[0x60]; public:
    _Script_Engine::SubsurfaceProfile*& get_SubsurfaceProfile();
    void* get_LightmassSettings();
    void* get_TextureStreamingData();
    void* get_AssetUserData();
    static _Script_CoreUObject::Class* static_class();
    void SetForceMipLevelsToBeResident(bool OverrideForceMiplevelsToBeResident, bool bForceMiplevelsToBeResidentValue, float ForceDuration, int32_t CinematicTextureGroups, bool bFastResponse);
    _Script_Engine::PhysicalMaterialMask* GetPhysicalMaterialMask();
    _Script_PhysicsCore::PhysicalMaterial* GetPhysicalMaterialFromMap(int32_t Index);
    _Script_PhysicsCore::PhysicalMaterial* GetPhysicalMaterial();
    _Script_Engine::MaterialParameterInfo GetParameterInfo(void* Association, void* ParameterName, _Script_Engine::MaterialFunctionInterface* LayerFunction);
    _Script_Engine::Material* GetBaseMaterial();
}; // Size: 0x88
#pragma pack(pop)
}
