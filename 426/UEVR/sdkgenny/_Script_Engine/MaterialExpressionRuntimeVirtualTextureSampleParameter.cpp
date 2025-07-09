#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpressionRuntimeVirtualTextureSample.hpp"
#include "MaterialExpressionRuntimeVirtualTextureSampleParameter.hpp"
void* _Script_Engine::MaterialExpressionRuntimeVirtualTextureSampleParameter::get_ParameterName() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_Engine::MaterialExpressionRuntimeVirtualTextureSampleParameter::get_ExpressionGUID() {
    return (void*)((uintptr_t)this + 0x98);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionRuntimeVirtualTextureSampleParameter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionRuntimeVirtualTextureSampleParameter");
    return result;
}
void* _Script_Engine::MaterialExpressionRuntimeVirtualTextureSampleParameter::get_Group() {
    return (void*)((uintptr_t)this + 0xa8);
}
