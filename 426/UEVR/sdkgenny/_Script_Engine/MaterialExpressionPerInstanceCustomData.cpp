#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionPerInstanceCustomData.hpp"
float& _Script_Engine::MaterialExpressionPerInstanceCustomData::get_ConstDefaultValue() {
    return *(float*)((uintptr_t)this + 0x54);
}
void* _Script_Engine::MaterialExpressionPerInstanceCustomData::get_DefaultValue() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionPerInstanceCustomData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionPerInstanceCustomData");
    return result;
}
void* _Script_Engine::MaterialExpressionPerInstanceCustomData::get_DataIndex() {
    return (void*)((uintptr_t)this + 0x58);
}
