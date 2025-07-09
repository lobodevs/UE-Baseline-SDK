#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "VMFunctionSpecifier.hpp"
void* _Script_Niagara::VMFunctionSpecifier::get_Key() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Niagara::VMFunctionSpecifier::get_Value() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Niagara::VMFunctionSpecifier::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.VMFunctionSpecifier");
    return result;
}
