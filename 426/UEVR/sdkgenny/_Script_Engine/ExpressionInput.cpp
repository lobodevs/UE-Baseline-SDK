#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ExpressionInput.hpp"
int32_t& _Script_Engine::ExpressionInput::get_OutputIndex() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::ExpressionInput::get_ExpressionName() {
    return (void*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_Engine::ExpressionInput::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ExpressionInput");
    return result;
}
