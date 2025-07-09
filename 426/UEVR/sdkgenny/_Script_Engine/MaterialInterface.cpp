#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "Material.hpp"
#include "MaterialFunctionInterface.hpp"
#include "MaterialInterface.hpp"
#include "MaterialParameterInfo.hpp"
#include "PhysicalMaterialMask.hpp"
#include "SubsurfaceProfile.hpp"
#include "..\_Script_PhysicsCore\PhysicalMaterial.hpp"
_Script_Engine::SubsurfaceProfile*& _Script_Engine::MaterialInterface::get_SubsurfaceProfile() {
    return *(_Script_Engine::SubsurfaceProfile**)((uintptr_t)this + 0x38);
}
void* _Script_Engine::MaterialInterface::get_LightmassSettings() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_Engine::MaterialInterface::get_TextureStreamingData() {
    return (void*)((uintptr_t)this + 0x60);
}
_Script_Engine::PhysicalMaterialMask* _Script_Engine::MaterialInterface::GetPhysicalMaterialMask() {
    return;
}
void* _Script_Engine::MaterialInterface::get_AssetUserData() {
    return (void*)((uintptr_t)this + 0x70);
}
_Script_PhysicsCore::PhysicalMaterial* _Script_Engine::MaterialInterface::GetPhysicalMaterialFromMap(int32_t Index) {
    return;
}
_Script_CoreUObject::Class* _Script_Engine::MaterialInterface::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialInterface");
    return result;
}
void _Script_Engine::MaterialInterface::SetForceMipLevelsToBeResident(bool OverrideForceMiplevelsToBeResident, bool bForceMiplevelsToBeResidentValue, float ForceDuration, int32_t CinematicTextureGroups, bool bFastResponse) {
    return;
}
_Script_PhysicsCore::PhysicalMaterial* _Script_Engine::MaterialInterface::GetPhysicalMaterial() {
    return;
}
_Script_Engine::MaterialParameterInfo _Script_Engine::MaterialInterface::GetParameterInfo(void* Association, void* ParameterName, _Script_Engine::MaterialFunctionInterface* LayerFunction) {
    return;
}
_Script_Engine::Material* _Script_Engine::MaterialInterface::GetBaseMaterial() {
    return;
}
