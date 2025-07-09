#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionReroute.hpp"
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionReroute::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionReroute");
    return result;
}
void* _Script_Engine::MaterialExpressionReroute::get_Input() {
    return (void*)((uintptr_t)this + 0x40);
}
