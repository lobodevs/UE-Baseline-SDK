#include "..\FUObjectArray.hpp"
#include "..\_Script_ClothingSystemRuntimeInterface\ClothPhysicalMeshDataBase_Legacy.hpp"
#include "ClothPhysicalMeshDataNv_Legacy.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ClothingSystemRuntimeNv::ClothPhysicalMeshDataNv_Legacy::get_MaxDistances() {
    return (void*)((uintptr_t)this + 0xe0);
}
void* _Script_ClothingSystemRuntimeNv::ClothPhysicalMeshDataNv_Legacy::get_BackstopDistances() {
    return (void*)((uintptr_t)this + 0xf0);
}
void* _Script_ClothingSystemRuntimeNv::ClothPhysicalMeshDataNv_Legacy::get_BackstopRadiuses() {
    return (void*)((uintptr_t)this + 0x100);
}
void* _Script_ClothingSystemRuntimeNv::ClothPhysicalMeshDataNv_Legacy::get_AnimDriveMultipliers() {
    return (void*)((uintptr_t)this + 0x110);
}
_Script_CoreUObject::Class* _Script_ClothingSystemRuntimeNv::ClothPhysicalMeshDataNv_Legacy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ClothingSystemRuntimeNv.ClothPhysicalMeshDataNv_Legacy");
    return result;
}
