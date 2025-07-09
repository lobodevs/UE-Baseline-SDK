#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "ProceduralFoliageSpawner.hpp"
int32_t& _Script_Foliage::ProceduralFoliageSpawner::get_RandomSeed() {
    return *(int32_t*)((uintptr_t)this + 0x28);
}
float& _Script_Foliage::ProceduralFoliageSpawner::get_TileSize() {
    return *(float*)((uintptr_t)this + 0x2c);
}
_Script_CoreUObject::Class* _Script_Foliage::ProceduralFoliageSpawner::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Foliage.ProceduralFoliageSpawner");
    return result;
}
void* _Script_Foliage::ProceduralFoliageSpawner::get_FoliageTypes() {
    return (void*)((uintptr_t)this + 0x40);
}
int32_t& _Script_Foliage::ProceduralFoliageSpawner::get_NumUniqueTiles() {
    return *(int32_t*)((uintptr_t)this + 0x30);
}
void _Script_Foliage::ProceduralFoliageSpawner::Simulate(int32_t NumSteps) {
    return;
}
float& _Script_Foliage::ProceduralFoliageSpawner::get_MinimumQuadTreeSize() {
    return *(float*)((uintptr_t)this + 0x34);
}
