#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DemoPendingNetGame.hpp"
#include "PendingNetGame.hpp"
_Script_CoreUObject::Class* _Script_Engine::DemoPendingNetGame::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.DemoPendingNetGame");
    return result;
}
