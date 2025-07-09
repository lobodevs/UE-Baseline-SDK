#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "OnlineProxyStoreOffer.hpp"
void* _Script_OnlineSubsystemUtils::OnlineProxyStoreOffer::get_OfferId() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_OnlineSubsystemUtils::OnlineProxyStoreOffer::get_Title() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_OnlineSubsystemUtils::OnlineProxyStoreOffer::get_RegularPriceText() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_OnlineSubsystemUtils::OnlineProxyStoreOffer::get_Description() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_OnlineSubsystemUtils::OnlineProxyStoreOffer::get_LongDescription() {
    return (void*)((uintptr_t)this + 0x40);
}
int32_t& _Script_OnlineSubsystemUtils::OnlineProxyStoreOffer::get_NumericPrice() {
    return *(int32_t*)((uintptr_t)this + 0x90);
}
int32_t& _Script_OnlineSubsystemUtils::OnlineProxyStoreOffer::get_RegularPrice() {
    return *(int32_t*)((uintptr_t)this + 0x70);
}
void* _Script_OnlineSubsystemUtils::OnlineProxyStoreOffer::get_PriceText() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_OnlineSubsystemUtils::OnlineProxyStoreOffer::get_ReleaseDate() {
    return (void*)((uintptr_t)this + 0xa8);
}
void* _Script_OnlineSubsystemUtils::OnlineProxyStoreOffer::get_CurrencyCode() {
    return (void*)((uintptr_t)this + 0x98);
}
void* _Script_OnlineSubsystemUtils::OnlineProxyStoreOffer::get_ExpirationDate() {
    return (void*)((uintptr_t)this + 0xb0);
}
void* _Script_OnlineSubsystemUtils::OnlineProxyStoreOffer::get_DiscountType() {
    return (void*)((uintptr_t)this + 0xb8);
}
void* _Script_OnlineSubsystemUtils::OnlineProxyStoreOffer::get_DynamicFields() {
    return (void*)((uintptr_t)this + 0xc0);
}
_Script_CoreUObject::Class* _Script_OnlineSubsystemUtils::OnlineProxyStoreOffer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/OnlineSubsystemUtils.OnlineProxyStoreOffer");
    return result;
}
