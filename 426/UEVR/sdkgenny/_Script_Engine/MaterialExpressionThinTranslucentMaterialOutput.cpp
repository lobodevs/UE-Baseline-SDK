#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpressionCustomOutput.hpp"
#include "MaterialExpressionThinTranslucentMaterialOutput.hpp"
void* _Script_Engine::MaterialExpressionThinTranslucentMaterialOutput::get_TransmittanceColor() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionThinTranslucentMaterialOutput::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionThinTranslucentMaterialOutput");
    return result;
}
