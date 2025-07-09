#include "..\FUObjectArray.hpp"
#include "ClothPhysicalMeshData.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
int32_t& _Script_ClothingSystemRuntimeCommon::ClothPhysicalMeshData::get_MaxBoneWeights() {
    return *(int32_t*)((uintptr_t)this + 0xa0);
}
void* _Script_ClothingSystemRuntimeCommon::ClothPhysicalMeshData::get_Vertices() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_ClothingSystemRuntimeCommon::ClothPhysicalMeshData::get_Indices() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_ClothingSystemRuntimeCommon::ClothPhysicalMeshData::get_Normals() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_ClothingSystemRuntimeCommon::ClothPhysicalMeshData::get_WeightMaps() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_ClothingSystemRuntimeCommon::ClothPhysicalMeshData::get_InverseMasses() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_ClothingSystemRuntimeCommon::ClothPhysicalMeshData::get_BoneData() {
    return (void*)((uintptr_t)this + 0x90);
}
int32_t& _Script_ClothingSystemRuntimeCommon::ClothPhysicalMeshData::get_NumFixedVerts() {
    return *(int32_t*)((uintptr_t)this + 0xa4);
}
void* _Script_ClothingSystemRuntimeCommon::ClothPhysicalMeshData::get_SelfCollisionIndices() {
    return (void*)((uintptr_t)this + 0xa8);
}
void* _Script_ClothingSystemRuntimeCommon::ClothPhysicalMeshData::get_MaxDistances() {
    return (void*)((uintptr_t)this + 0xb8);
}
void* _Script_ClothingSystemRuntimeCommon::ClothPhysicalMeshData::get_BackstopDistances() {
    return (void*)((uintptr_t)this + 0xc8);
}
void* _Script_ClothingSystemRuntimeCommon::ClothPhysicalMeshData::get_BackstopRadiuses() {
    return (void*)((uintptr_t)this + 0xd8);
}
void* _Script_ClothingSystemRuntimeCommon::ClothPhysicalMeshData::get_AnimDriveMultipliers() {
    return (void*)((uintptr_t)this + 0xe8);
}
_Script_CoreUObject::Class* _Script_ClothingSystemRuntimeCommon::ClothPhysicalMeshData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ClothingSystemRuntimeCommon.ClothPhysicalMeshData");
    return result;
}
