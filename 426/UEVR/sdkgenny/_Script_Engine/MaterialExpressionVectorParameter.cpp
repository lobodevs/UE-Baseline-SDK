#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpressionParameter.hpp"
#include "MaterialExpressionVectorParameter.hpp"
void* _Script_Engine::MaterialExpressionVectorParameter::get_DefaultValue() {
    return (void*)((uintptr_t)this + 0x58);
}
bool _Script_Engine::MaterialExpressionVectorParameter::get_bUseCustomPrimitiveData() {
    return (*(uint8_t*)((uintptr_t)this + 0x68 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionVectorParameter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionVectorParameter");
    return result;
}
void _Script_Engine::MaterialExpressionVectorParameter::set_bUseCustomPrimitiveData(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x68 + 0);
    *(uint8_t*)((uintptr_t)this + 0x68 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::MaterialExpressionVectorParameter::get_PrimitiveDataIndex() {
    return (void*)((uintptr_t)this + 0x69);
}
