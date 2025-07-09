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
struct OnlineProxyStoreOffer {
    private: char pad_0[0x110]; public:
    void* get_OfferId();
    void* get_Title();
    void* get_Description();
    void* get_LongDescription();
    void* get_RegularPriceText();
    int32_t& get_RegularPrice();
    void* get_PriceText();
    int32_t& get_NumericPrice();
    void* get_CurrencyCode();
    void* get_ReleaseDate();
    void* get_ExpirationDate();
    void* get_DiscountType();
    void* get_DynamicFields();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x110
#pragma pack(pop)
}
