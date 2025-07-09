#include "..\FUObjectArray.hpp"
#include "ClothParameterMask_Legacy.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ClothingSystemRuntimeCommon::ClothParameterMask_Legacy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ClothingSystemRuntimeCommon.ClothParameterMask_Legacy");
    return result;
}
void* _Script_ClothingSystemRuntimeCommon::ClothParameterMask_Legacy::get_MaskName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_ClothingSystemRuntimeCommon::ClothParameterMask_Legacy::get_CurrentTarget() {
    return (void*)((uintptr_t)this + 0x8);
}
float& _Script_ClothingSystemRuntimeCommon::ClothParameterMask_Legacy::get_MaxValue() {
    return *(float*)((uintptr_t)this + 0xc);
}
void _Script_ClothingSystemRuntimeCommon::ClothParameterMask_Legacy::set_bEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_ClothingSystemRuntimeCommon::ClothParameterMask_Legacy::get_MinValue() {
    return *(float*)((uintptr_t)this + 0x10);
}
void* _Script_ClothingSystemRuntimeCommon::ClothParameterMask_Legacy::get_Values() {
    return (void*)((uintptr_t)this + 0x18);
}
bool _Script_ClothingSystemRuntimeCommon::ClothParameterMask_Legacy::get_bEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
