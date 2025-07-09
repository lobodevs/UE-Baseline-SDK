#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "FoliageType.hpp"
#include "ProceduralFoliageInstance.hpp"
_Script_Foliage::FoliageType*& _Script_Foliage::ProceduralFoliageInstance::get_Type() {
    return *(_Script_Foliage::FoliageType**)((uintptr_t)this + 0x30);
}
float& _Script_Foliage::ProceduralFoliageInstance::get_Scale() {
    return *(float*)((uintptr_t)this + 0x2c);
}
void* _Script_Foliage::ProceduralFoliageInstance::get_Rotation() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Foliage::ProceduralFoliageInstance::get_Normal() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Foliage::ProceduralFoliageInstance::get_Location() {
    return (void*)((uintptr_t)this + 0x10);
}
float& _Script_Foliage::ProceduralFoliageInstance::get_Age() {
    return *(float*)((uintptr_t)this + 0x1c);
}
_Script_CoreUObject::Class* _Script_Foliage::ProceduralFoliageInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Foliage.ProceduralFoliageInstance");
    return result;
}
