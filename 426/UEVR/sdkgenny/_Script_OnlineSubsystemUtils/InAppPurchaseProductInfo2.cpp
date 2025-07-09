#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InAppPurchaseProductInfo2.hpp"
void* _Script_OnlineSubsystemUtils::InAppPurchaseProductInfo2::get_CurrencyCode() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_OnlineSubsystemUtils::InAppPurchaseProductInfo2::get_Identifier() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_OnlineSubsystemUtils::InAppPurchaseProductInfo2::get_CurrencySymbol() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_OnlineSubsystemUtils::InAppPurchaseProductInfo2::get_DisplayPrice() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_OnlineSubsystemUtils::InAppPurchaseProductInfo2::get_TransactionIdentifier() {
    return (void*)((uintptr_t)this + 0x10);
}
float& _Script_OnlineSubsystemUtils::InAppPurchaseProductInfo2::get_RawPrice() {
    return *(float*)((uintptr_t)this + 0x50);
}
void* _Script_OnlineSubsystemUtils::InAppPurchaseProductInfo2::get_DisplayName() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_OnlineSubsystemUtils::InAppPurchaseProductInfo2::get_DisplayDescription() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_OnlineSubsystemUtils::InAppPurchaseProductInfo2::get_GroupingSeparator() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_OnlineSubsystemUtils::InAppPurchaseProductInfo2::get_DecimalSeparator() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_OnlineSubsystemUtils::InAppPurchaseProductInfo2::get_ReceiptData() {
    return (void*)((uintptr_t)this + 0x98);
}
void* _Script_OnlineSubsystemUtils::InAppPurchaseProductInfo2::get_DynamicFields() {
    return (void*)((uintptr_t)this + 0xa8);
}
_Script_CoreUObject::Class* _Script_OnlineSubsystemUtils::InAppPurchaseProductInfo2::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/OnlineSubsystemUtils.InAppPurchaseProductInfo2");
    return result;
}
