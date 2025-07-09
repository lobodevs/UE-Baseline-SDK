#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CustomizedToolMenu.hpp"
void* _Script_Slate::CustomizedToolMenu::get_Name() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Slate::CustomizedToolMenu::get_Entries() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Slate::CustomizedToolMenu::get_Sections() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_Slate::CustomizedToolMenu::get_EntryOrder() {
    return (void*)((uintptr_t)this + 0xa8);
}
void* _Script_Slate::CustomizedToolMenu::get_SectionOrder() {
    return (void*)((uintptr_t)this + 0xf8);
}
_Script_CoreUObject::Class* _Script_Slate::CustomizedToolMenu::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Slate.CustomizedToolMenu");
    return result;
}
