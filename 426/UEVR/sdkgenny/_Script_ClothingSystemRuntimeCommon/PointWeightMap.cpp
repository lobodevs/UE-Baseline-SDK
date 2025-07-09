#include "..\FUObjectArray.hpp"
#include "PointWeightMap.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ClothingSystemRuntimeCommon::PointWeightMap::get_Values() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_ClothingSystemRuntimeCommon::PointWeightMap::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ClothingSystemRuntimeCommon.PointWeightMap");
    return result;
}
