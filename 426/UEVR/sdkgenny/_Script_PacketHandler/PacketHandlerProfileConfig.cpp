#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "PacketHandlerProfileConfig.hpp"
_Script_CoreUObject::Class* _Script_PacketHandler::PacketHandlerProfileConfig::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/PacketHandler.PacketHandlerProfileConfig");
    return result;
}
void* _Script_PacketHandler::PacketHandlerProfileConfig::get_Components() {
    return (void*)((uintptr_t)this + 0x28);
}
