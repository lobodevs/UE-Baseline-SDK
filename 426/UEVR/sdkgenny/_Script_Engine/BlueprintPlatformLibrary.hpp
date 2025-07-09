#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct DateTime;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct BlueprintPlatformLibrary : public BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    int32_t ScheduleLocalNotificationFromNow(int32_t inSecondsFromNow, void*& Title, void*& Body, void*& Action, void* ActivationEvent);
    void ScheduleLocalNotificationBadgeFromNow(int32_t inSecondsFromNow, void* ActivationEvent);
    int32_t ScheduleLocalNotificationBadgeAtTime(_Script_CoreUObject::DateTime& FireDateTime, bool LocalTime, void* ActivationEvent);
    int32_t ScheduleLocalNotificationAtTime(_Script_CoreUObject::DateTime& FireDateTime, bool LocalTime, void*& Title, void*& Body, void*& Action, void* ActivationEvent);
    void GetLaunchNotification(bool& NotificationLaunchedApp, void*& ActivationEvent, int32_t& FireDate);
    void* GetDeviceOrientation();
    void ClearAllLocalNotifications();
    void CancelLocalNotificationById(int32_t NotificationId);
    void CancelLocalNotification(void* ActivationEvent);
}; // Size: 0x28
#pragma pack(pop)
}
