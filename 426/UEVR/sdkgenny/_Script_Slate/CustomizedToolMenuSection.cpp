#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CustomizedToolMenuSection.hpp"
void* _Script_Slate::CustomizedToolMenuSection::get_Visibility() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Slate::CustomizedToolMenuSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Slate.CustomizedToolMenuSection");
    return result;
}
