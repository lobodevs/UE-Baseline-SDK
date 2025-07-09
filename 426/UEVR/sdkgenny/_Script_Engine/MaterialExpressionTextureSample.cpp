#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpressionTextureBase.hpp"
#include "MaterialExpressionTextureSample.hpp"
void* _Script_Engine::MaterialExpressionTextureSample::get_Coordinates() {
    return (void*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionTextureSample::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionTextureSample");
    return result;
}
