#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct PlayerController;
}
namespace _Script_OnlineSubsystemUtils {
struct InAppPurchaseProductRequest2;
}
namespace _Script_OnlineSubsystemUtils {
#pragma pack(push, 1)
struct InAppPurchaseCallbackProxy2 : public _Script_CoreUObject::Object {
    private: char pad_28[0x80]; public:
    void* get_OnSuccess();
    void* get_OnFailure();
    static _Script_CoreUObject::Class* static_class();
    _Script_OnlineSubsystemUtils::InAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseUnprocessedPurchases(_Script_Engine::PlayerController* PlayerController);
    _Script_OnlineSubsystemUtils::InAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseQueryOwned(_Script_Engine::PlayerController* PlayerController);
    _Script_OnlineSubsystemUtils::InAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchase(_Script_Engine::PlayerController* PlayerController, _Script_OnlineSubsystemUtils::InAppPurchaseProductRequest2& ProductRequest);
}; // Size: 0xa8
#pragma pack(pop)
}
