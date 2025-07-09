#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionReflectionCapturePassSwitch.hpp"
void* _Script_Engine::MaterialExpressionReflectionCapturePassSwitch::get_Default() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::MaterialExpressionReflectionCapturePassSwitch::get_Reflection() {
    return (void*)((uintptr_t)this + 0x54);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionReflectionCapturePassSwitch::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionReflectionCapturePassSwitch");
    return result;
}
