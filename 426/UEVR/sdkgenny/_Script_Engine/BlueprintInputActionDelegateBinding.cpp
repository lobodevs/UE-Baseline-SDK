#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BlueprintInputActionDelegateBinding.hpp"
#include "BlueprintInputDelegateBinding.hpp"
void* _Script_Engine::BlueprintInputActionDelegateBinding::get_InputActionName() {
    return (void*)((uintptr_t)this + 0x4);
}
void* _Script_Engine::BlueprintInputActionDelegateBinding::get_InputKeyEvent() {
    return (void*)((uintptr_t)this + 0xc);
}
void* _Script_Engine::BlueprintInputActionDelegateBinding::get_FunctionNameToBind() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Engine::BlueprintInputActionDelegateBinding::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.BlueprintInputActionDelegateBinding");
    return result;
}
