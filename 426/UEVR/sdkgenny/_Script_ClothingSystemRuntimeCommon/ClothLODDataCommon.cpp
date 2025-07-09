#include "..\FUObjectArray.hpp"
#include "ClothLODDataCommon.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ClothingSystemRuntimeCommon::ClothLODDataCommon::get_PhysicalMeshData() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_ClothingSystemRuntimeCommon::ClothLODDataCommon::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ClothingSystemRuntimeCommon.ClothLODDataCommon");
    return result;
}
bool _Script_ClothingSystemRuntimeCommon::ClothLODDataCommon::get_bUseMultipleInfluences() {
    return (*(uint8_t*)((uintptr_t)this + 0x138 + 0)) & 1 != 0;
}
void* _Script_ClothingSystemRuntimeCommon::ClothLODDataCommon::get_CollisionData() {
    return (void*)((uintptr_t)this + 0xf8);
}
void _Script_ClothingSystemRuntimeCommon::ClothLODDataCommon::set_bUseMultipleInfluences(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x138 + 0);
    *(uint8_t*)((uintptr_t)this + 0x138 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_ClothingSystemRuntimeCommon::ClothLODDataCommon::get_SkinningKernelRadius() {
    return *(float*)((uintptr_t)this + 0x13c);
}
