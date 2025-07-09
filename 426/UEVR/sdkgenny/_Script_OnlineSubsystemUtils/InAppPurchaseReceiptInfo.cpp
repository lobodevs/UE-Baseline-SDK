#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InAppPurchaseReceiptInfo.hpp"
void* _Script_OnlineSubsystemUtils::InAppPurchaseReceiptInfo::get_ValidationInfo() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_OnlineSubsystemUtils::InAppPurchaseReceiptInfo::get_ItemName() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_OnlineSubsystemUtils::InAppPurchaseReceiptInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/OnlineSubsystemUtils.InAppPurchaseReceiptInfo");
    return result;
}
void* _Script_OnlineSubsystemUtils::InAppPurchaseReceiptInfo::get_ItemId() {
    return (void*)((uintptr_t)this + 0x10);
}
