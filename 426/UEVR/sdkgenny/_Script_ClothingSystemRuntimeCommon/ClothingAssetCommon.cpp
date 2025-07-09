#include "..\FUObjectArray.hpp"
#include "ClothingAssetCommon.hpp"
#include "ClothingAssetCustomData.hpp"
#include "..\_Script_ClothingSystemRuntimeInterface\ClothConfigBase.hpp"
#include "..\_Script_ClothingSystemRuntimeInterface\ClothingAssetBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\PhysicsAsset.hpp"
int32_t& _Script_ClothingSystemRuntimeCommon::ClothingAssetCommon::get_ReferenceBoneIndex() {
    return *(int32_t*)((uintptr_t)this + 0x108);
}
_Script_Engine::PhysicsAsset*& _Script_ClothingSystemRuntimeCommon::ClothingAssetCommon::get_PhysicsAsset() {
    return *(_Script_Engine::PhysicsAsset**)((uintptr_t)this + 0x48);
}
void* _Script_ClothingSystemRuntimeCommon::ClothingAssetCommon::get_ClothConfigs() {
    return (void*)((uintptr_t)this + 0x50);
}
_Script_ClothingSystemRuntimeInterface::ClothConfigBase*& _Script_ClothingSystemRuntimeCommon::ClothingAssetCommon::get_ClothSharedSimConfig() {
    return *(_Script_ClothingSystemRuntimeInterface::ClothConfigBase**)((uintptr_t)this + 0xa0);
}
void* _Script_ClothingSystemRuntimeCommon::ClothingAssetCommon::get_UsedBoneNames() {
    return (void*)((uintptr_t)this + 0xe8);
}
_Script_ClothingSystemRuntimeInterface::ClothConfigBase*& _Script_ClothingSystemRuntimeCommon::ClothingAssetCommon::get_ClothSimConfig() {
    return *(_Script_ClothingSystemRuntimeInterface::ClothConfigBase**)((uintptr_t)this + 0xa8);
}
_Script_ClothingSystemRuntimeCommon::ClothingAssetCustomData*& _Script_ClothingSystemRuntimeCommon::ClothingAssetCommon::get_CustomData() {
    return *(_Script_ClothingSystemRuntimeCommon::ClothingAssetCustomData**)((uintptr_t)this + 0x110);
}
void* _Script_ClothingSystemRuntimeCommon::ClothingAssetCommon::get_LodMap() {
    return (void*)((uintptr_t)this + 0xd8);
}
_Script_ClothingSystemRuntimeInterface::ClothConfigBase*& _Script_ClothingSystemRuntimeCommon::ClothingAssetCommon::get_ChaosClothSimConfig() {
    return *(_Script_ClothingSystemRuntimeInterface::ClothConfigBase**)((uintptr_t)this + 0xb0);
}
void* _Script_ClothingSystemRuntimeCommon::ClothingAssetCommon::get_ClothLODData() {
    return (void*)((uintptr_t)this + 0xb8);
}
void* _Script_ClothingSystemRuntimeCommon::ClothingAssetCommon::get_LODData() {
    return (void*)((uintptr_t)this + 0xc8);
}
void* _Script_ClothingSystemRuntimeCommon::ClothingAssetCommon::get_UsedBoneIndices() {
    return (void*)((uintptr_t)this + 0xf8);
}
void* _Script_ClothingSystemRuntimeCommon::ClothingAssetCommon::get_ClothConfig() {
    return (void*)((uintptr_t)this + 0x118);
}
_Script_CoreUObject::Class* _Script_ClothingSystemRuntimeCommon::ClothingAssetCommon::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ClothingSystemRuntimeCommon.ClothingAssetCommon");
    return result;
}
