#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "UdpMockMessage.hpp"
void* _Script_UdpMessaging::UdpMockMessage::get_Data() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_UdpMessaging::UdpMockMessage::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/UdpMessaging.UdpMockMessage");
    return result;
}
