#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RuntimeVirtualTexture.hpp"
#include "RuntimeVirtualTextureParameterValue.hpp"
_Script_Engine::RuntimeVirtualTexture*& _Script_Engine::RuntimeVirtualTextureParameterValue::get_ParameterValue() {
    return *(_Script_Engine::RuntimeVirtualTexture**)((uintptr_t)this + 0x10);
}
void* _Script_Engine::RuntimeVirtualTextureParameterValue::get_ParameterInfo() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::RuntimeVirtualTextureParameterValue::get_ExpressionGUID() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_Engine::RuntimeVirtualTextureParameterValue::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RuntimeVirtualTextureParameterValue");
    return result;
}
