#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\NetConnection.hpp"
#include "IpConnection.hpp"
float& _Script_OnlineSubsystemUtils::IpConnection::get_SocketErrorDisconnectDelay() {
    return *(float*)((uintptr_t)this + 0x1b40);
}
_Script_CoreUObject::Class* _Script_OnlineSubsystemUtils::IpConnection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/OnlineSubsystemUtils.IpConnection");
    return result;
}
