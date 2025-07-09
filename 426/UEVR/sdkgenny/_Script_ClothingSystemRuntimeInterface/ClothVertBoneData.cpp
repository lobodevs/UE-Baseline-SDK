#include "..\FUObjectArray.hpp"
#include "ClothVertBoneData.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
int32_t& _Script_ClothingSystemRuntimeInterface::ClothVertBoneData::get_NumInfluences() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
float& _Script_ClothingSystemRuntimeInterface::ClothVertBoneData::get_BoneWeights() {
    return *(float*)((uintptr_t)this + 0x1c);
}
void* _Script_ClothingSystemRuntimeInterface::ClothVertBoneData::get_BoneIndices() {
    return (void*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_ClothingSystemRuntimeInterface::ClothVertBoneData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ClothingSystemRuntimeInterface.ClothVertBoneData");
    return result;
}
