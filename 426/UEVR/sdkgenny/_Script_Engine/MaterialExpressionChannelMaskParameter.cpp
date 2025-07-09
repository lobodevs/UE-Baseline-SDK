#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpressionChannelMaskParameter.hpp"
#include "MaterialExpressionVectorParameter.hpp"
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionChannelMaskParameter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionChannelMaskParameter");
    return result;
}
void* _Script_Engine::MaterialExpressionChannelMaskParameter::get_MaskChannel() {
    return (void*)((uintptr_t)this + 0x70);
}
