#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_OnlineSubsystemUtils {
#pragma pack(push, 1)
struct InAppPurchaseProductInfo2 {
    private: char pad_0[0xf8]; public:
    void* get_Identifier();
    void* get_TransactionIdentifier();
    void* get_DisplayName();
    void* get_DisplayDescription();
    void* get_DisplayPrice();
    float& get_RawPrice();
    void* get_CurrencyCode();
    void* get_CurrencySymbol();
    void* get_DecimalSeparator();
    void* get_GroupingSeparator();
    void* get_ReceiptData();
    void* get_DynamicFields();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xf8
#pragma pack(pop)
}
