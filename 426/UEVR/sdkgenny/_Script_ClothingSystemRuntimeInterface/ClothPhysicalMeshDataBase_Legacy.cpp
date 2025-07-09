#include "..\FUObjectArray.hpp"
#include "ClothPhysicalMeshDataBase_Legacy.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
int32_t& _Script_ClothingSystemRuntimeInterface::ClothPhysicalMeshDataBase_Legacy::get_MaxBoneWeights() {
    return *(int32_t*)((uintptr_t)this + 0x7c);
}
void* _Script_ClothingSystemRuntimeInterface::ClothPhysicalMeshDataBase_Legacy::get_Vertices() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_ClothingSystemRuntimeInterface::ClothPhysicalMeshDataBase_Legacy::get_Normals() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_ClothingSystemRuntimeInterface::ClothPhysicalMeshDataBase_Legacy::get_Indices() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_ClothingSystemRuntimeInterface::ClothPhysicalMeshDataBase_Legacy::get_InverseMasses() {
    return (void*)((uintptr_t)this + 0x58);
}
int32_t& _Script_ClothingSystemRuntimeInterface::ClothPhysicalMeshDataBase_Legacy::get_NumFixedVerts() {
    return *(int32_t*)((uintptr_t)this + 0x78);
}
void* _Script_ClothingSystemRuntimeInterface::ClothPhysicalMeshDataBase_Legacy::get_BoneData() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_ClothingSystemRuntimeInterface::ClothPhysicalMeshDataBase_Legacy::get_SelfCollisionIndices() {
    return (void*)((uintptr_t)this + 0x80);
}
_Script_CoreUObject::Class* _Script_ClothingSystemRuntimeInterface::ClothPhysicalMeshDataBase_Legacy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ClothingSystemRuntimeInterface.ClothPhysicalMeshDataBase_Legacy");
    return result;
}
