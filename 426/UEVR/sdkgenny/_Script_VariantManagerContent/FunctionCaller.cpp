#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "FunctionCaller.hpp"
void* _Script_VariantManagerContent::FunctionCaller::get_FunctionName() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_VariantManagerContent::FunctionCaller::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/VariantManagerContent.FunctionCaller");
    return result;
}
