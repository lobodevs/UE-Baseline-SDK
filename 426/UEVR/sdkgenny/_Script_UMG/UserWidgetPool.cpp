#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "UserWidgetPool.hpp"
void* _Script_UMG::UserWidgetPool::get_ActiveWidgets() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_UMG::UserWidgetPool::get_InactiveWidgets() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_UMG::UserWidgetPool::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/UMG.UserWidgetPool");
    return result;
}
