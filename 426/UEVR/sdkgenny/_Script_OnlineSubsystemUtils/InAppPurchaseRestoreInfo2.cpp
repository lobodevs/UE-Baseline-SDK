#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InAppPurchaseRestoreInfo2.hpp"
void* _Script_OnlineSubsystemUtils::InAppPurchaseRestoreInfo2::get_ItemName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_OnlineSubsystemUtils::InAppPurchaseRestoreInfo2::get_ItemId() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_OnlineSubsystemUtils::InAppPurchaseRestoreInfo2::get_ValidationInfo() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_OnlineSubsystemUtils::InAppPurchaseRestoreInfo2::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/OnlineSubsystemUtils.InAppPurchaseRestoreInfo2");
    return result;
}
