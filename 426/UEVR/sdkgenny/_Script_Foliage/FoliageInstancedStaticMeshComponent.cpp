#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\HierarchicalInstancedStaticMeshComponent.hpp"
#include "FoliageInstancedStaticMeshComponent.hpp"
void* _Script_Foliage::FoliageInstancedStaticMeshComponent::get_OnInstanceTakePointDamage() {
    return (void*)((uintptr_t)this + 0x668);
}
void* _Script_Foliage::FoliageInstancedStaticMeshComponent::get_OnInstanceTakeRadialDamage() {
    return (void*)((uintptr_t)this + 0x678);
}
void* _Script_Foliage::FoliageInstancedStaticMeshComponent::get_GenerationGuid() {
    return (void*)((uintptr_t)this + 0x688);
}
_Script_CoreUObject::Class* _Script_Foliage::FoliageInstancedStaticMeshComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Foliage.FoliageInstancedStaticMeshComponent");
    return result;
}
