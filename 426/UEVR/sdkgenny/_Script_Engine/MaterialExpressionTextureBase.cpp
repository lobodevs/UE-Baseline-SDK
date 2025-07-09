#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionTextureBase.hpp"
#include "Texture.hpp"
_Script_Engine::Texture*& _Script_Engine::MaterialExpressionTextureBase::get_Texture() {
    return *(_Script_Engine::Texture**)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionTextureBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionTextureBase");
    return result;
}
