#include "..\FUObjectArray.hpp"
#include "ClothLODDataCommon_Legacy.hpp"
#include "..\_Script_ClothingSystemRuntimeInterface\ClothPhysicalMeshDataBase_Legacy.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
_Script_ClothingSystemRuntimeInterface::ClothPhysicalMeshDataBase_Legacy*& _Script_ClothingSystemRuntimeCommon::ClothLODDataCommon_Legacy::get_PhysicalMeshData() {
    return *(_Script_ClothingSystemRuntimeInterface::ClothPhysicalMeshDataBase_Legacy**)((uintptr_t)this + 0x28);
}
void* _Script_ClothingSystemRuntimeCommon::ClothLODDataCommon_Legacy::get_ClothPhysicalMeshData() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_ClothingSystemRuntimeCommon::ClothLODDataCommon_Legacy::get_CollisionData() {
    return (void*)((uintptr_t)this + 0x128);
}
_Script_CoreUObject::Class* _Script_ClothingSystemRuntimeCommon::ClothLODDataCommon_Legacy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ClothingSystemRuntimeCommon.ClothLODDataCommon_Legacy");
    return result;
}
