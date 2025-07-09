#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SessionServicePong.hpp"
void* _Script_SessionMessages::SessionServicePong::get_SessionId() {
    return (void*)((uintptr_t)this + 0x58);
}
bool _Script_SessionMessages::SessionServicePong::get_Authorized() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_SessionMessages::SessionServicePong::set_Authorized(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SessionMessages::SessionServicePong::get_BuildDate() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SessionMessages::SessionServicePong::get_PlatformName() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_SessionMessages::SessionServicePong::get_DeviceName() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_SessionMessages::SessionServicePong::get_InstanceId() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_SessionMessages::SessionServicePong::get_InstanceName() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_SessionMessages::SessionServicePong::get_SessionName() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_SessionMessages::SessionServicePong::get_SessionOwner() {
    return (void*)((uintptr_t)this + 0x78);
}
bool _Script_SessionMessages::SessionServicePong::get_Standalone() {
    return (*(uint8_t*)((uintptr_t)this + 0x88 + 0)) & 1 != 0;
}
void _Script_SessionMessages::SessionServicePong::set_Standalone(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x88 + 0);
    *(uint8_t*)((uintptr_t)this + 0x88 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_SessionMessages::SessionServicePong::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SessionMessages.SessionServicePong");
    return result;
}
