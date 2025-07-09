#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ActorComponent.hpp"
#include "ApplicationLifecycleComponent.hpp"
void* _Script_Engine::ApplicationLifecycleComponent::get_ApplicationWillEnterBackgroundDelegate() {
    return (void*)((uintptr_t)this + 0xd0);
}
void* _Script_Engine::ApplicationLifecycleComponent::get_ApplicationWillDeactivateDelegate() {
    return (void*)((uintptr_t)this + 0xb0);
}
void* _Script_Engine::ApplicationLifecycleComponent::get_ApplicationHasReactivatedDelegate() {
    return (void*)((uintptr_t)this + 0xc0);
}
void* _Script_Engine::ApplicationLifecycleComponent::get_OnTemperatureChangeDelegate() {
    return (void*)((uintptr_t)this + 0x120);
}
void* _Script_Engine::ApplicationLifecycleComponent::get_ApplicationHasEnteredForegroundDelegate() {
    return (void*)((uintptr_t)this + 0xe0);
}
void* _Script_Engine::ApplicationLifecycleComponent::get_ApplicationShouldUnloadResourcesDelegate() {
    return (void*)((uintptr_t)this + 0x100);
}
void* _Script_Engine::ApplicationLifecycleComponent::get_ApplicationWillTerminateDelegate() {
    return (void*)((uintptr_t)this + 0xf0);
}
void* _Script_Engine::ApplicationLifecycleComponent::get_ApplicationReceivedStartupArgumentsDelegate() {
    return (void*)((uintptr_t)this + 0x110);
}
void* _Script_Engine::ApplicationLifecycleComponent::get_OnLowPowerModeDelegate() {
    return (void*)((uintptr_t)this + 0x130);
}
_Script_CoreUObject::Class* _Script_Engine::ApplicationLifecycleComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ApplicationLifecycleComponent");
    return result;
}
