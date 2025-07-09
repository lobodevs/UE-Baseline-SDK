#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CustomizedToolMenuEntry.hpp"
void* _Script_Slate::CustomizedToolMenuEntry::get_Visibility() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Slate::CustomizedToolMenuEntry::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Slate.CustomizedToolMenuEntry");
    return result;
}
