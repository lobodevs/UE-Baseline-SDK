#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NetConnection.hpp"
#include "ReplayNetConnection.hpp"
_Script_CoreUObject::Class* _Script_Engine::ReplayNetConnection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ReplayNetConnection");
    return result;
}
