#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpressionParameter.hpp"
#include "MaterialExpressionScalarParameter.hpp"
bool _Script_Engine::MaterialExpressionScalarParameter::get_bUseCustomPrimitiveData() {
    return (*(uint8_t*)((uintptr_t)this + 0x5c + 0)) & 1 != 0;
}
float& _Script_Engine::MaterialExpressionScalarParameter::get_DefaultValue() {
    return *(float*)((uintptr_t)this + 0x58);
}
void _Script_Engine::MaterialExpressionScalarParameter::set_bUseCustomPrimitiveData(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5c + 0);
    *(uint8_t*)((uintptr_t)this + 0x5c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::MaterialExpressionScalarParameter::get_PrimitiveDataIndex() {
    return (void*)((uintptr_t)this + 0x5d);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionScalarParameter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionScalarParameter");
    return result;
}
