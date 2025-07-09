#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DemoNetConnection.hpp"
#include "NetConnection.hpp"
_Script_CoreUObject::Class* _Script_Engine::DemoNetConnection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.DemoNetConnection");
    return result;
}
