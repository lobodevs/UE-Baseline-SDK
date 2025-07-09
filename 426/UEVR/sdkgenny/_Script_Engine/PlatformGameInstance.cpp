#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GameInstance.hpp"
#include "PlatformGameInstance.hpp"
void* _Script_Engine::PlatformGameInstance::get_ApplicationWillDeactivateDelegate() {
    return (void*)((uintptr_t)this + 0x1a8);
}
void* _Script_Engine::PlatformGameInstance::get_ApplicationWillTerminateDelegate() {
    return (void*)((uintptr_t)this + 0x1e8);
}
void* _Script_Engine::PlatformGameInstance::get_ApplicationHasReactivatedDelegate() {
    return (void*)((uintptr_t)this + 0x1b8);
}
void* _Script_Engine::PlatformGameInstance::get_ApplicationWillEnterBackgroundDelegate() {
    return (void*)((uintptr_t)this + 0x1c8);
}
void* _Script_Engine::PlatformGameInstance::get_ApplicationHasEnteredForegroundDelegate() {
    return (void*)((uintptr_t)this + 0x1d8);
}
void* _Script_Engine::PlatformGameInstance::get_ApplicationShouldUnloadResourcesDelegate() {
    return (void*)((uintptr_t)this + 0x1f8);
}
void* _Script_Engine::PlatformGameInstance::get_ApplicationRegisteredForRemoteNotificationsDelegate() {
    return (void*)((uintptr_t)this + 0x218);
}
void* _Script_Engine::PlatformGameInstance::get_ApplicationReceivedStartupArgumentsDelegate() {
    return (void*)((uintptr_t)this + 0x208);
}
void* _Script_Engine::PlatformGameInstance::get_ApplicationRegisteredForUserNotificationsDelegate() {
    return (void*)((uintptr_t)this + 0x228);
}
void* _Script_Engine::PlatformGameInstance::get_ApplicationFailedToRegisterForRemoteNotificationsDelegate() {
    return (void*)((uintptr_t)this + 0x238);
}
void* _Script_Engine::PlatformGameInstance::get_ApplicationReceivedRemoteNotificationDelegate() {
    return (void*)((uintptr_t)this + 0x248);
}
void* _Script_Engine::PlatformGameInstance::get_ApplicationReceivedLocalNotificationDelegate() {
    return (void*)((uintptr_t)this + 0x258);
}
void* _Script_Engine::PlatformGameInstance::get_ApplicationReceivedScreenOrientationChangedNotificationDelegate() {
    return (void*)((uintptr_t)this + 0x268);
}
_Script_CoreUObject::Class* _Script_Engine::PlatformGameInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.PlatformGameInstance");
    return result;
}
